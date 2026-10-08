// roc 2010-06 00638980  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00638980
//
// 00638980  51                   push ecx
// 00638981  6a28                 push 0x28
// 00638983  c744240400000000     mov dword ptr [esp + 4], 0
// 0063898b  e810f01600           call 0x7a79a0
// 00638990  83c404               add esp, 4
// 00638993  85c0                 test eax, eax
// 00638995  7432                 je 0x6389c9
// 00638997  c7005865a300         mov dword ptr [eax], 0xa36558
// 0063899d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006389a1  894808               mov dword ptr [eax + 8], ecx
// 006389a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006389a8  89500c               mov dword ptr [eax + 0xc], edx
// 006389ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006389af  894810               mov dword ptr [eax + 0x10], ecx
// 006389b2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006389b6  895018               mov dword ptr [eax + 0x18], edx
// 006389b9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006389bd  89481c               mov dword ptr [eax + 0x1c], ecx
// 006389c0  8b542420             mov edx, dword ptr [esp + 0x20]
// 006389c4  895020               mov dword ptr [eax + 0x20], edx
// 006389c7  eb02                 jmp 0x6389cb
// 006389c9  33c0                 xor eax, eax
// 006389cb  56                   push esi
// 006389cc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006389d0  6a00                 push 0
// 006389d2  8906                 mov dword ptr [esi], eax
// 006389d4  e8c1ef1600           call 0x7a799a
// 006389d9  83c404               add esp, 4
// 006389dc  8bc6                 mov eax, esi
// 006389de  5e                   pop esi
// 006389df  59                   pop ecx
// 006389e0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
