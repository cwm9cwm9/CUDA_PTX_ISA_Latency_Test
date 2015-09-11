////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////
/////////////  TESTS GO HERE
/////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

                                                                                                    // Replace INSTRUCTION with the instruction you are testing
                                                                                                    // Replace PARAMTYPE1, PARAMTYPE2 etc. with the type of parameters you are testing (const, u32, whatever)
                                                                                                    // Replace INPUT with the input data to the test instruction
                                                                                                    // The FUNCTION NAME will be PRINTED IN THE OUTPUT, so please be descriptive!

#ifdef PTX_ISA_VERSION_x_x                                                                          // Change PTX_ISA_VERSION_2_0 to the PTX ISA Version number required BY THE INSTRUCTION.  Don't put your card's compute capability here...
#pragma region "----- INSTRUCTION U32 CONSTANT TESTS -----"											// Break different test groups into named regions for convenience
__device__ unsigned INSTRUCTION_PARAMTYPE1_PARAMTYPE2_INPUT(bool printresult)
{
	volatile unsigned start, stop;

	volatile unsigned out32a;										                                // If your instruction generates output data from input data, you need a variable to capture it

	asm("{                               \n\t"
		" mov.u32 %0, %%clock;           \n\t"
		"                                \n\t"						                                // If you need it, put setup code here
		" bfind.u32  %2, 0x0U;           \n\t"						                                // YOUR TEST INSTRUCTION GOES HERE.  THERE SHOULD ONLY BE ONE INSTRUCTION
		"                                \n\t"						                                // If you need it, put post code here
		" mov.u32 %1, %%clock;           \n\t"
		"}"
		: "=r"(start), "=r"(stop), "=r"(out32a));					                                // Different size registers need different letters.  l=64 bits, r=32 bits...

	if (printresult) printf("%s = %u", __FUNCTION__, out32a);                                // When printresult is true, print the name of the function along with any results
	return stop - start - 42;
}
#pragma endregion
#endif

#pragma region "TEST INTEGRATION CODE"
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////
/////////////  TEST INTEGRATION CODE
/////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

__device__ void After_INSTRUCTION();											                    // Replace INSTRUCTION with your instruction name
__device__ void NEXT_TEST_GROUP()
{
#ifdef PTX_ISA_VERSION_x_x                                                                          // Change PTX_ISA_VERSION_x_x to the PTX ISA Version number required BY THE INSTRUCTION.  Don't put your card's compute capability here...
	Evaluate(&INSTRUCTION_PARAMTYPE1_PARAMTYPE2_INPUT);								                // call evaluate on the address of every function you've created
#endif
	After_INSTRUCTION();											                                // Replace INSTRUCTION with your instruction name
}

#undef NEXT_TEST_GROUP
#define NEXT_TEST_GROUP After_INSTRUCTION											                // Replace INSTRUCTION with your instruction name
#pragma endregion