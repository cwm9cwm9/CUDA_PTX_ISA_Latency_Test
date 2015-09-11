#define PTX_ISA_VERSION_4_3									        // CHANGE THIS VALUE TO THE COMPUTE CAPABILITY OF YOUR CARD

#pragma region "#define all lower versions"

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

#ifdef PTX_ISA_VERSION_3_0
#define PTX_ISA_VERSION_2_3
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

#pragma endregion
