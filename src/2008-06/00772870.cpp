// from server: 100% by auto
// roc 2008-06 00772870  unit: CXTPControlCustom  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00772870
//
// 00772870  8b442404             mov eax, dword ptr [esp + 4]
// 00772874  8b9080010000         mov edx, dword ptr [eax + 0x180]
// 0077287a  899180010000         mov dword ptr [ecx + 0x180], edx
// 00772880  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 00772886  899184010000         mov dword ptr [ecx + 0x184], edx
// 0077288c  8b9088010000         mov edx, dword ptr [eax + 0x188]
// 00772892  899188010000         mov dword ptr [ecx + 0x188], edx
// 00772898  8b908c010000         mov edx, dword ptr [eax + 0x18c]
// 0077289e  89918c010000         mov dword ptr [ecx + 0x18c], edx
// 007728a4  8b909c010000         mov edx, dword ptr [eax + 0x19c]
// 007728aa  89919c010000         mov dword ptr [ecx + 0x19c], edx
// 007728b0  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 007728b6  899194010000         mov dword ptr [ecx + 0x194], edx
// 007728bc  8b9098010000         mov edx, dword ptr [eax + 0x198]
// 007728c2  899198010000         mov dword ptr [ecx + 0x198], edx
// 007728c8  8b907c010000         mov edx, dword ptr [eax + 0x17c]
// 007728ce  89917c010000         mov dword ptr [ecx + 0x17c], edx
// 007728d4  8b90a0010000         mov edx, dword ptr [eax + 0x1a0]
// 007728da  8991a0010000         mov dword ptr [ecx + 0x1a0], edx
// 007728e0  89442404             mov dword ptr [esp + 4], eax
// 007728e4  e9e7b4f3ff           jmp 0x6addd0
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?Copy@CXTPControlCustom@@MAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
