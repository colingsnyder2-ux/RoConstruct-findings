// roc 2010-06 00879ce0  unit: CXTPControlCustom  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00879ce0
//
// 00879ce0  8b442404             mov eax, dword ptr [esp + 4]
// 00879ce4  8b9080010000         mov edx, dword ptr [eax + 0x180]
// 00879cea  899180010000         mov dword ptr [ecx + 0x180], edx
// 00879cf0  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 00879cf6  899184010000         mov dword ptr [ecx + 0x184], edx
// 00879cfc  8b9088010000         mov edx, dword ptr [eax + 0x188]
// 00879d02  899188010000         mov dword ptr [ecx + 0x188], edx
// 00879d08  8b908c010000         mov edx, dword ptr [eax + 0x18c]
// 00879d0e  89918c010000         mov dword ptr [ecx + 0x18c], edx
// 00879d14  8b909c010000         mov edx, dword ptr [eax + 0x19c]
// 00879d1a  89919c010000         mov dword ptr [ecx + 0x19c], edx
// 00879d20  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 00879d26  899194010000         mov dword ptr [ecx + 0x194], edx
// 00879d2c  8b9098010000         mov edx, dword ptr [eax + 0x198]
// 00879d32  899198010000         mov dword ptr [ecx + 0x198], edx
// 00879d38  8b907c010000         mov edx, dword ptr [eax + 0x17c]
// 00879d3e  89917c010000         mov dword ptr [ecx + 0x17c], edx
// 00879d44  8b90a0010000         mov edx, dword ptr [eax + 0x1a0]
// 00879d4a  8991a0010000         mov dword ptr [ecx + 0x1a0], edx
// 00879d50  89442404             mov dword ptr [esp + 4], eax
// 00879d54  e91731f3ff           jmp 0x7ace70
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?Copy@CXTPControlCustom@@MAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
