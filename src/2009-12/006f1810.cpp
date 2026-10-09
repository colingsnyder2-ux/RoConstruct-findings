// roc 2009-12 006f1810  unit: RBX::BasicPartInstance  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006f1810
//
// 006f1810  51                   push ecx
// 006f1811  6a28                 push 0x28
// 006f1813  c744240400000000     mov dword ptr [esp + 4], 0
// 006f181b  e840201000           call 0x7f3860
// 006f1820  83c404               add esp, 4
// 006f1823  85c0                 test eax, eax
// 006f1825  7432                 je 0x6f1859
// 006f1827  c70028b99d00         mov dword ptr [eax], 0x9db928
// 006f182d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f1831  894808               mov dword ptr [eax + 8], ecx
// 006f1834  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f1838  89500c               mov dword ptr [eax + 0xc], edx
// 006f183b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006f183f  894810               mov dword ptr [eax + 0x10], ecx
// 006f1842  8b542418             mov edx, dword ptr [esp + 0x18]
// 006f1846  895018               mov dword ptr [eax + 0x18], edx
// 006f1849  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006f184d  89481c               mov dword ptr [eax + 0x1c], ecx
// 006f1850  8b542420             mov edx, dword ptr [esp + 0x20]
// 006f1854  895020               mov dword ptr [eax + 0x20], edx
// 006f1857  eb02                 jmp 0x6f185b
// 006f1859  33c0                 xor eax, eax
// 006f185b  56                   push esi
// 006f185c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f1860  6a00                 push 0
// 006f1862  8906                 mov dword ptr [esi], eax
// 006f1864  e8f11f1000           call 0x7f385a
// 006f1869  83c404               add esp, 4
// 006f186c  8bc6                 mov eax, esi
// 006f186e  5e                   pop esi
// 006f186f  59                   pop ecx
// 006f1870  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
