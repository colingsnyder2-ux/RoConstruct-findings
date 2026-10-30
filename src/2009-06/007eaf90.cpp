// roc 2009-06 007eaf90  unit: CXTPControlCustom  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007eaf90
//
// 007eaf90  8b442404             mov eax, dword ptr [esp + 4]
// 007eaf94  8b9080010000         mov edx, dword ptr [eax + 0x180]
// 007eaf9a  899180010000         mov dword ptr [ecx + 0x180], edx
// 007eafa0  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 007eafa6  899184010000         mov dword ptr [ecx + 0x184], edx
// 007eafac  8b9088010000         mov edx, dword ptr [eax + 0x188]
// 007eafb2  899188010000         mov dword ptr [ecx + 0x188], edx
// 007eafb8  8b908c010000         mov edx, dword ptr [eax + 0x18c]
// 007eafbe  89918c010000         mov dword ptr [ecx + 0x18c], edx
// 007eafc4  8b909c010000         mov edx, dword ptr [eax + 0x19c]
// 007eafca  89919c010000         mov dword ptr [ecx + 0x19c], edx
// 007eafd0  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 007eafd6  899194010000         mov dword ptr [ecx + 0x194], edx
// 007eafdc  8b9098010000         mov edx, dword ptr [eax + 0x198]
// 007eafe2  899198010000         mov dword ptr [ecx + 0x198], edx
// 007eafe8  8b907c010000         mov edx, dword ptr [eax + 0x17c]
// 007eafee  89917c010000         mov dword ptr [ecx + 0x17c], edx
// 007eaff4  8b90a0010000         mov edx, dword ptr [eax + 0x1a0]
// 007eaffa  8991a0010000         mov dword ptr [ecx + 0x1a0], edx
// 007eb000  89442404             mov dword ptr [esp + 4], eax
// 007eb004  e9d774f3ff           jmp 0x7224e0
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?Copy@CXTPControlCustom@@MAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
