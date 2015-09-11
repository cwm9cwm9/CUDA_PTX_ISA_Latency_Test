#include "cuda_runtime.h"
#include "device_launch_parameters.h"
#include "compute_capability.h"

#include <stdio.h>

typedef unsigned int(*TEST)(bool);

__device__ void Evaluate(TEST test)
{
	unsigned repetitionsleft = 5;
	unsigned lastlatency;
	unsigned newlatency;

	lastlatency = test(false);
	while (repetitionsleft) {
		newlatency = test(false);
		if (newlatency == lastlatency) repetitionsleft--;
		else {
			repetitionsleft = 5;
			lastlatency = newlatency;
		}
	}
	printf("%06u cycles: ", lastlatency);
	test(true);
	printf("\n");
}

#define NEXT_TEST_GROUP FirstTest

#include "test_bfind.h"
#include "test_brev.h"
#include "test_popc.h"
#include "test_template.h"											// Add your test_INSTRUCTION.h file here

__device__ void NEXT_TEST_GROUP() {}

__global__ void LatencyTest()
{
	FirstTest();
}

int main()
{
	cudaError_t cudaStatus = cudaSuccess;

    cudaStatus = cudaSetDevice(0);
    if (cudaStatus != cudaSuccess) {
        fprintf(stderr, "cudaSetDevice failed!  Do you have a CUDA-capable GPU installed?");
        goto Error;
    }

	LatencyTest <<<1, 1>>>();

    cudaStatus = cudaGetLastError();
    if (cudaStatus != cudaSuccess) {
        fprintf(stderr, "addKernel launch failed: %s\n", cudaGetErrorString(cudaStatus));
        goto Error;
    }
    
    cudaStatus = cudaDeviceSynchronize();
    if (cudaStatus != cudaSuccess) {
        fprintf(stderr, "cudaDeviceSynchronize returned error code %d after launching addKernel!\n", cudaStatus);
        goto Error;
    }

Error:
    
	cudaStatus = cudaDeviceReset();
	if (cudaStatus != cudaSuccess) {
		fprintf(stderr, "cudaDeviceReset failed!");
		return 1;
	}

	printf("Engine exited -- Enter to exit\n");
	scanf("exit");

	return cudaStatus;
}
