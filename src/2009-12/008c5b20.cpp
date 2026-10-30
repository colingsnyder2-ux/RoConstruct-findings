// roc 2009-12 008c5b20  unit: CXTPControlCustom  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c5b20
//
// 008c5b20  8b442404             mov eax, dword ptr [esp + 4]
// 008c5b24  8b9080010000         mov edx, dword ptr [eax + 0x180]
// 008c5b2a  899180010000         mov dword ptr [ecx + 0x180], edx
// 008c5b30  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 008c5b36  899184010000         mov dword ptr [ecx + 0x184], edx
// 008c5b3c  8b9088010000         mov edx, dword ptr [eax + 0x188]
// 008c5b42  899188010000         mov dword ptr [ecx + 0x188], edx
// 008c5b48  8b908c010000         mov edx, dword ptr [eax + 0x18c]
// 008c5b4e  89918c010000         mov dword ptr [ecx + 0x18c], edx
// 008c5b54  8b909c010000         mov edx, dword ptr [eax + 0x19c]
// 008c5b5a  89919c010000         mov dword ptr [ecx + 0x19c], edx
// 008c5b60  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 008c5b66  899194010000         mov dword ptr [ecx + 0x194], edx
// 008c5b6c  8b9098010000         mov edx, dword ptr [eax + 0x198]
// 008c5b72  899198010000         mov dword ptr [ecx + 0x198], edx
// 008c5b78  8b907c010000         mov edx, dword ptr [eax + 0x17c]
// 008c5b7e  89917c010000         mov dword ptr [ecx + 0x17c], edx
// 008c5b84  8b90a0010000         mov edx, dword ptr [eax + 0x1a0]
// 008c5b8a  8991a0010000         mov dword ptr [ecx + 0x1a0], edx
// 008c5b90  89442404             mov dword ptr [esp + 4], eax
// 008c5b94  e98730f3ff           jmp 0x7f8c20
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?Copy@CXTPControlCustom@@MAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
