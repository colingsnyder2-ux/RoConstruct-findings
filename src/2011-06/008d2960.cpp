// roc 2011-06 008d2960  unit: CXTPControlCustom  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d2960
//
// 008d2960  8b442404             mov eax, dword ptr [esp + 4]
// 008d2964  8b9080010000         mov edx, dword ptr [eax + 0x180]
// 008d296a  899180010000         mov dword ptr [ecx + 0x180], edx
// 008d2970  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 008d2976  899184010000         mov dword ptr [ecx + 0x184], edx
// 008d297c  8b9088010000         mov edx, dword ptr [eax + 0x188]
// 008d2982  899188010000         mov dword ptr [ecx + 0x188], edx
// 008d2988  8b908c010000         mov edx, dword ptr [eax + 0x18c]
// 008d298e  89918c010000         mov dword ptr [ecx + 0x18c], edx
// 008d2994  8b909c010000         mov edx, dword ptr [eax + 0x19c]
// 008d299a  89919c010000         mov dword ptr [ecx + 0x19c], edx
// 008d29a0  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 008d29a6  899194010000         mov dword ptr [ecx + 0x194], edx
// 008d29ac  8b9098010000         mov edx, dword ptr [eax + 0x198]
// 008d29b2  899198010000         mov dword ptr [ecx + 0x198], edx
// 008d29b8  8b907c010000         mov edx, dword ptr [eax + 0x17c]
// 008d29be  89917c010000         mov dword ptr [ecx + 0x17c], edx
// 008d29c4  8b90a0010000         mov edx, dword ptr [eax + 0x1a0]
// 008d29ca  8991a0010000         mov dword ptr [ecx + 0x1a0], edx
// 008d29d0  89442404             mov dword ptr [esp + 4], eax
// 008d29d4  e907c9f3ff           jmp 0x80f2e0
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?Copy@CXTPControlCustom@@MAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
