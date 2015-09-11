////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////
/////////////  TESTS GO HERE
/////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Change PTX_ISA_VERSION_2_0 to the PTX ISA Version number required BY THE INSTRUCTION.  Don't put your card's compute capability here...
#ifdef PTX_ISA_VERSION_2_0

// Replace INSTRUCTION with the instruction you are testing
// Replace PARAMTYPE1, PARAMTYPE2 etc. with the type of parameters you are testing (const, u32, whatever)
// Replace INPUT with the input data to the test instruction
// The FUNCTION NAME will be PRINTED IN THE OUTPUT, so please be descriptive!

/////////////  b32 constants
__device__ unsigned int Bfind_u32_const_0x00000000U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;	                                                    // If your instruction generates output data from input data, you need a variable to capture it

	asm("{                               \n\t"                        
		" mov.u64 %0, %%clock64;         \n\t"                         
		"                                \n\t"						                // If you need it, put setup code here
		" bfind.u32  %2, 0x0U;           \n\t"
		"                                \n\t"						                // If you need it, put post code here
		" mov.u64 %1, %%clock64;         \n\t"
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));					                // Different size registers need different letters.  l=64 bits, r=32 bits...
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);                // When printresult is true, print the name of the function along with any results
	return stop - start - 106;
}

__device__ unsigned int Bfind_u32_const_0x00000001U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u32  %2, 0x1U;           \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u32_const_0x00000010U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u32  %2, 0x10U;           \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u32_const_0x00000100U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u32  %2, 0x100U;           \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}


__device__ unsigned int Bfind_u32_const_0x00001000U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u32  %2, 0x00001000U;           \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u32_const_0x00010000U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u32  %2, 0x00010000U;           \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u32_const_0x00040000U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u32  %2, 0x00040000U;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u32_const_0x00080000U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u32  %2, 0x00080000U;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u32_const_0x00100000U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u32  %2, 0x00100000U;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u32_const_0x01000000U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u32  %2, 0x01000000U;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u32_const_0x10000000U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u32  %2, 0x10000000U;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u32_const_0x80000000U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u32  %2, 0x80000000U;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}


///////////// b32 registers


__device__ unsigned int Bfind_u32_register_0x00000000U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		".reg .u32 in32a;                \n\t"                         
		" mov.u32  in32a, 0x0U;           \n\t"
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u32  %2, in32a;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u32_register_0x00000001U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		".reg .u32 in32a;                \n\t"                         
		" mov.u32  in32a, 0x1U;           \n\t"
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u32  %2, in32a;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u32_register_0x00000010U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		".reg .u32 in32a;                \n\t"                         
		" mov.u32  in32a, 0x10U;           \n\t"
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u32  %2, in32a;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u32_register_0x00000100U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		".reg .u32 in32a;                \n\t"                         
		" mov.u32  in32a, 0x100U;           \n\t"
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u32  %2, in32a;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u32_register_0x00001000U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		".reg .u32 in32a;                \n\t"                         
		" mov.u32  in32a, 0x00001000U;           \n\t"
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u32  %2, in32a;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u32_register_0x00010000U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		".reg .u32 in32a;                \n\t"                         
		" mov.u32  in32a, 0x00010000U;           \n\t"
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u32  %2, in32a;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u32_register_0x00100000U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		".reg .u32 in32a;                \n\t"                         
		" mov.u32  in32a, 0x00100000U;    \n\t"
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u32  %2, in32a;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u32_register_0x01000000U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		".reg .u32 in32a;                \n\t"                         
		" mov.u32  in32a, 0x01000000U;    \n\t"
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u32  %2, in32a;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u32_register_0x10000000U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		".reg .u32 in32a;                \n\t"                         
		" mov.u32  in32a, 0x10000000U;    \n\t"
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u32  %2, in32a;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u32_register_0x80000000U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		".reg .u32 in32a;                \n\t"                         
		" mov.u32  in32a, 0x80000000U;    \n\t"
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u32  %2, in32a;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}


///////////// b64 registers


__device__ unsigned int Bfind_u64_register_0x0000000000000000U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		".reg .u64 in64a;                \n\t"                         
		" mov.u64  in64a, 0x0000000000000000U;           \n\t"
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u64  %2, in64a;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u64_register_0x0000000000000001U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		".reg .u64 in64a;                \n\t"                         
		" mov.u64  in64a, 0x0000000000000001U;           \n\t"
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u64  %2, in64a;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u64_register_0x0000000000000010U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		".reg .u64 in64a;                \n\t"                         
		" mov.u64  in64a, 0x0000000000000010U;           \n\t"
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u64  %2, in64a;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u64_register_0x0000000000000100U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		".reg .u64 in64a;                \n\t"                         
		" mov.u64  in64a, 0x0000000000000100U;           \n\t"
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u64  %2, in64a;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u64_register_0x0000000000001000U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		".reg .u64 in64a;                \n\t"                         
		" mov.u64  in64a, 0x0000000000001000U;           \n\t"
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u64  %2, in64a;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u64_register_0x0000000000010000U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		".reg .u64 in64a;                \n\t"                         
		" mov.u64  in64a, 0x0000000000010000U;           \n\t"
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u64  %2, in64a;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u64_register_0x0000000000100000U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		".reg .u64 in64a;                \n\t"                         
		" mov.u64  in64a, 0x0000000000100000U;    \n\t"
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u64  %2, in64a;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u64_register_0x0000000001000000U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		".reg .u64 in64a;                \n\t"                         
		" mov.u64  in64a, 0x0000000001000000U;    \n\t"
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u64  %2, in64a;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u64_register_0x0000000010000000U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		".reg .u64 in64a;                \n\t"                         
		" mov.u64  in64a, 0x0000000001000000U;    \n\t"
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u64  %2, in64a;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u64_register_0x0000000080000000U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		".reg .u64 in64a;                \n\t"                         
		" mov.u64  in64a, 0x0000000008000000U;    \n\t"
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u64  %2, in64a;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u64_register_0x0000000100000000U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		".reg .u64 in64a;                \n\t"                         
		" mov.u64  in64a, 0x100000000U;           \n\t"
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u64  %2, in64a;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u64_register_0x0000001000000000U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		".reg .u64 in64a;                \n\t"                         
		" mov.u64  in64a, 0x1000000000U;           \n\t"
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u64  %2, in64a;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u64_register_0x0000010000000000U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		".reg .u64 in64a;                \n\t"                         
		" mov.u64  in64a, 0x10000000000U;           \n\t"
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u64  %2, in64a;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u64_register_0x000001000(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		".reg .u64 in64a;                \n\t"                         
		" mov.u64  in64a, 0x100000000U;           \n\t"
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u64  %2, in64a;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u64_register_0x0000100000000000U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		".reg .u64 in64a;                \n\t"                         
		" mov.u64  in64a, 0x0000100000000000U;           \n\t"
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u64  %2, in64a;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u64_register_0x0001000000000000U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		".reg .u64 in64a;                \n\t"                         
		" mov.u64  in64a, 0x0001000000000000U;           \n\t"
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u64  %2, in64a;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u64_register_0x0010000000000000U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		".reg .u64 in64a;                \n\t"                         
		" mov.u64  in64a, 0x0010000000000000U;    \n\t"
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u64  %2, in64a;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u64_register_0x0100000000000000U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		".reg .u64 in64a;                \n\t"                         
		" mov.u64  in64a, 0x0100000000000000U;    \n\t"
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u64  %2, in64a;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u64_register_0x1000000000000000U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		".reg .u64 in64a;                \n\t"                         
		" mov.u64  in64a, 0x1000000000000000U;    \n\t"
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u64  %2, in64a;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

__device__ unsigned int Bfind_u64_register_0x8000000000000000U(bool printresult)
{
	volatile unsigned long long start, stop;

	volatile unsigned out32a;

	asm("{                               \n\t"                        
		".reg .u64 in64a;                \n\t"                         
		" mov.u64  in64a, 0x8000000000000000U;    \n\t"
		" mov.u64 %0, %%clock64;         \n\t"                         
		" bfind.u64  %2, in64a;    \n\t"
		" mov.u64 %1, %%clock64;         \n\t"                         
		"}"
		: "=l"(start), "=l"(stop), "=r"(out32a));
	if (printresult) printf("%s result = %u", __FUNCTION__, out32a);
	return stop - start - 106;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////
/////////////  TEST INTEGRATION CODE
/////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

__device__ void After_bfind();								                        // Replace INSTRUCTION with your instruction name

__device__ void NEXT_TEST_GROUP()
{
	Evaluate(&Bfind_u32_const_0x00000000U);                                         // call evaluate on the address of every function you've created
	Evaluate(&Bfind_u32_const_0x00000001U);
	Evaluate(&Bfind_u32_const_0x00000010U);
	Evaluate(&Bfind_u32_const_0x00000100U);
	Evaluate(&Bfind_u32_const_0x00001000U);
	Evaluate(&Bfind_u32_const_0x00010000U);
	Evaluate(&Bfind_u32_const_0x00040000U);
	Evaluate(&Bfind_u32_const_0x00080000U);
	Evaluate(&Bfind_u32_const_0x00100000U);
	Evaluate(&Bfind_u32_const_0x01000000U);
	Evaluate(&Bfind_u32_const_0x10000000U);
	Evaluate(&Bfind_u32_const_0x80000000U);
	Evaluate(&Bfind_u32_register_0x00000000U);
	Evaluate(&Bfind_u32_register_0x00000001U);
	Evaluate(&Bfind_u32_register_0x00000010U);
	Evaluate(&Bfind_u32_register_0x00000100U);
	Evaluate(&Bfind_u32_register_0x00001000U);
	Evaluate(&Bfind_u32_register_0x00010000U);
	Evaluate(&Bfind_u32_register_0x00100000U);
	Evaluate(&Bfind_u32_register_0x01000000U);
	Evaluate(&Bfind_u32_register_0x10000000U);
	Evaluate(&Bfind_u32_register_0x80000000U);

	Evaluate(&Bfind_u64_register_0x0000000000000000U);
	Evaluate(&Bfind_u64_register_0x0000000000000001U);
	Evaluate(&Bfind_u64_register_0x0000000000000010U);
	Evaluate(&Bfind_u64_register_0x0000000000000100U);
	Evaluate(&Bfind_u64_register_0x0000000000001000U);
	Evaluate(&Bfind_u64_register_0x0000000000010000U);
	Evaluate(&Bfind_u64_register_0x0000000000100000U);
	Evaluate(&Bfind_u64_register_0x0000000001000000U);
	Evaluate(&Bfind_u64_register_0x0000000010000000U);
	Evaluate(&Bfind_u64_register_0x0000000080000000U);
	Evaluate(&Bfind_u64_register_0x0000000100000000U);
	Evaluate(&Bfind_u64_register_0x0000001000000000U);
	Evaluate(&Bfind_u64_register_0x0000010000000000U);
	Evaluate(&Bfind_u64_register_0x0000100000000000U);
	Evaluate(&Bfind_u64_register_0x0001000000000000U);
	Evaluate(&Bfind_u64_register_0x0010000000000000U);
	Evaluate(&Bfind_u64_register_0x0100000000000000U);
	Evaluate(&Bfind_u64_register_0x1000000000000000U);
	Evaluate(&Bfind_u64_register_0x8000000000000000U);
	
	After_bfind();                                                                  // Replace INSTRUCTION with your instruction name
}

#undef NEXT_TEST_GROUP
#define NEXT_TEST_GROUP After_bfind											        // Replace INSTRUCTION with your instruction name

#endif