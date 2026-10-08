// roc 2010-06 0066d8f0  unit: RBX::Humanoid  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0066d8f0
//
// 0066d8f0  51                   push ecx
// 0066d8f1  6a28                 push 0x28
// 0066d8f3  c744240400000000     mov dword ptr [esp + 4], 0
// 0066d8fb  e8a0a01300           call 0x7a79a0
// 0066d900  83c404               add esp, 4
// 0066d903  85c0                 test eax, eax
// 0066d905  7432                 je 0x66d939
// 0066d907  c70028c8a300         mov dword ptr [eax], 0xa3c828
// 0066d90d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066d911  894808               mov dword ptr [eax + 8], ecx
// 0066d914  8b542410             mov edx, dword ptr [esp + 0x10]
// 0066d918  89500c               mov dword ptr [eax + 0xc], edx
// 0066d91b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066d91f  894810               mov dword ptr [eax + 0x10], ecx
// 0066d922  8b542418             mov edx, dword ptr [esp + 0x18]
// 0066d926  895018               mov dword ptr [eax + 0x18], edx
// 0066d929  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066d92d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0066d930  8b542420             mov edx, dword ptr [esp + 0x20]
// 0066d934  895020               mov dword ptr [eax + 0x20], edx
// 0066d937  eb02                 jmp 0x66d93b
// 0066d939  33c0                 xor eax, eax
// 0066d93b  56                   push esi
// 0066d93c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0066d940  6a00                 push 0
// 0066d942  8906                 mov dword ptr [esi], eax
// 0066d944  e851a01300           call 0x7a799a
// 0066d949  83c404               add esp, 4
// 0066d94c  8bc6                 mov eax, esi
// 0066d94e  5e                   pop esi
// 0066d94f  59                   pop ecx
// 0066d950  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
