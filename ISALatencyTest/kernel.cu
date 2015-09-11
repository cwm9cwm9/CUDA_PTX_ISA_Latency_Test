#include "cuda_runtime.h"
#include "device_launch_parameters.h"

#include <stdio.h>

#define PTX_ISA_VERSION_4_3									        // CHANGE THIS VALUE TO THE COMPUTE CAPABILITY OF YOUR CARD

#ifdef PTX_ISA_VERSION_4_3
#define PTX_ISA_VERSION_4_2
#endif

#ifdef PTX_ISA_VERSION_4_2
#define PTX_ISA_VERSION_4_1
#endif

#ifdef PTX_ISA_VERSION_4_1
#define PTX_ISA_VERSION_4_0
#endif

#ifdef PTX_ISA_VERSION_4_0
#define PTX_ISA_VERSION_3_2
#endif

#ifdef PTX_ISA_VERSION_3_2
#define PTX_ISA_VERSION_3_1
#endif

#ifdef PTX_ISA_VERSION_3_1
#define PTX_ISA_VERSION_3_0
#endif

#ifdef PTX_ISA_VERSION_3_1
#define PTX_ISA_VERSION_3_0
#endif

#ifdef PTX_ISA_VERSION_3_0
#define PTX_ISA_VERSION_2_2
#endif

#ifdef PTX_ISA_VERSION_2_3
#define PTX_ISA_VERSION_2_2
#endif

#ifdef PTX_ISA_VERSION_2_2
#define PTX_ISA_VERSION_2_1
#endif

#ifdef PTX_ISA_VERSION_2_1
#define PTX_ISA_VERSION_2_0
#endif

#ifdef PTX_ISA_VERSION_2_0
#define PTX_ISA_VERSION_1_x
#endif

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
	printf("%04u cyles for ", lastlatency);
	test(true);
	printf("\n");
}

#define NEXT_TEST_GROUP FirstTest

#include "test_bfind.h"
#include "test_brev.h"
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
