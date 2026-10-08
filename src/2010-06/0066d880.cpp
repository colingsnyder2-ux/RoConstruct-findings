// roc 2010-06 0066d880  unit: RBX::Humanoid  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0066d880
//
// 0066d880  51                   push ecx
// 0066d881  6a28                 push 0x28
// 0066d883  c744240400000000     mov dword ptr [esp + 4], 0
// 0066d88b  e810a11300           call 0x7a79a0
// 0066d890  83c404               add esp, 4
// 0066d893  85c0                 test eax, eax
// 0066d895  7432                 je 0x66d8c9
// 0066d897  c70010c8a300         mov dword ptr [eax], 0xa3c810
// 0066d89d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066d8a1  894808               mov dword ptr [eax + 8], ecx
// 0066d8a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0066d8a8  89500c               mov dword ptr [eax + 0xc], edx
// 0066d8ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066d8af  894810               mov dword ptr [eax + 0x10], ecx
// 0066d8b2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0066d8b6  895018               mov dword ptr [eax + 0x18], edx
// 0066d8b9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066d8bd  89481c               mov dword ptr [eax + 0x1c], ecx
// 0066d8c0  8b542420             mov edx, dword ptr [esp + 0x20]
// 0066d8c4  895020               mov dword ptr [eax + 0x20], edx
// 0066d8c7  eb02                 jmp 0x66d8cb
// 0066d8c9  33c0                 xor eax, eax
// 0066d8cb  56                   push esi
// 0066d8cc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0066d8d0  6a00                 push 0
// 0066d8d2  8906                 mov dword ptr [esi], eax
// 0066d8d4  e8c1a01300           call 0x7a799a
// 0066d8d9  83c404               add esp, 4
// 0066d8dc  8bc6                 mov eax, esi
// 0066d8de  5e                   pop esi
// 0066d8df  59                   pop ecx
// 0066d8e0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
