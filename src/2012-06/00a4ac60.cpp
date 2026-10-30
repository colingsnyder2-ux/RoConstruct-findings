// roc 2012-06 00a4ac60  unit: CXTPControlCustom  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4ac60
//
// 00a4ac60  8b442404             mov eax, dword ptr [esp + 4]
// 00a4ac64  8b9080010000         mov edx, dword ptr [eax + 0x180]
// 00a4ac6a  899180010000         mov dword ptr [ecx + 0x180], edx
// 00a4ac70  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 00a4ac76  899184010000         mov dword ptr [ecx + 0x184], edx
// 00a4ac7c  8b9088010000         mov edx, dword ptr [eax + 0x188]
// 00a4ac82  899188010000         mov dword ptr [ecx + 0x188], edx
// 00a4ac88  8b908c010000         mov edx, dword ptr [eax + 0x18c]
// 00a4ac8e  89918c010000         mov dword ptr [ecx + 0x18c], edx
// 00a4ac94  8b909c010000         mov edx, dword ptr [eax + 0x19c]
// 00a4ac9a  89919c010000         mov dword ptr [ecx + 0x19c], edx
// 00a4aca0  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 00a4aca6  899194010000         mov dword ptr [ecx + 0x194], edx
// 00a4acac  8b9098010000         mov edx, dword ptr [eax + 0x198]
// 00a4acb2  899198010000         mov dword ptr [ecx + 0x198], edx
// 00a4acb8  8b907c010000         mov edx, dword ptr [eax + 0x17c]
// 00a4acbe  89917c010000         mov dword ptr [ecx + 0x17c], edx
// 00a4acc4  8b90a0010000         mov edx, dword ptr [eax + 0x1a0]
// 00a4acca  8991a0010000         mov dword ptr [ecx + 0x1a0], edx
// 00a4acd0  89442404             mov dword ptr [esp + 4], eax
// 00a4acd4  e917c9f3ff           jmp 0x9875f0
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?Copy@CXTPControlCustom@@MAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
