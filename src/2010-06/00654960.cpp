// roc 2010-06 00654960  unit: RBX::ExtrudedPartInstance  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00654960
//
// 00654960  51                   push ecx
// 00654961  6a28                 push 0x28
// 00654963  c744240400000000     mov dword ptr [esp + 4], 0
// 0065496b  e830301500           call 0x7a79a0
// 00654970  83c404               add esp, 4
// 00654973  85c0                 test eax, eax
// 00654975  7432                 je 0x6549a9
// 00654977  c700f098a300         mov dword ptr [eax], 0xa398f0
// 0065497d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00654981  894808               mov dword ptr [eax + 8], ecx
// 00654984  8b542410             mov edx, dword ptr [esp + 0x10]
// 00654988  89500c               mov dword ptr [eax + 0xc], edx
// 0065498b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065498f  894810               mov dword ptr [eax + 0x10], ecx
// 00654992  8b542418             mov edx, dword ptr [esp + 0x18]
// 00654996  895018               mov dword ptr [eax + 0x18], edx
// 00654999  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0065499d  89481c               mov dword ptr [eax + 0x1c], ecx
// 006549a0  8b542420             mov edx, dword ptr [esp + 0x20]
// 006549a4  895020               mov dword ptr [eax + 0x20], edx
// 006549a7  eb02                 jmp 0x6549ab
// 006549a9  33c0                 xor eax, eax
// 006549ab  56                   push esi
// 006549ac  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006549b0  6a00                 push 0
// 006549b2  8906                 mov dword ptr [esi], eax
// 006549b4  e8e12f1500           call 0x7a799a
// 006549b9  83c404               add esp, 4
// 006549bc  8bc6                 mov eax, esi
// 006549be  5e                   pop esi
// 006549bf  59                   pop ecx
// 006549c0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
