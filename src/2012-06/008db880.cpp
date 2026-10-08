// roc 2012-06 008db880  unit: RBX::SkateboardPlatform  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008db880
//
// 008db880  51                   push ecx
// 008db881  6a28                 push 0x28
// 008db883  c744240400000000     mov dword ptr [esp + 4], 0
// 008db88b  e88a680a00           call 0x98211a
// 008db890  83c404               add esp, 4
// 008db893  85c0                 test eax, eax
// 008db895  7432                 je 0x8db8c9
// 008db897  c70098a4be00         mov dword ptr [eax], 0xbea498
// 008db89d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008db8a1  894808               mov dword ptr [eax + 8], ecx
// 008db8a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008db8a8  89500c               mov dword ptr [eax + 0xc], edx
// 008db8ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008db8af  894810               mov dword ptr [eax + 0x10], ecx
// 008db8b2  8b542418             mov edx, dword ptr [esp + 0x18]
// 008db8b6  895018               mov dword ptr [eax + 0x18], edx
// 008db8b9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008db8bd  89481c               mov dword ptr [eax + 0x1c], ecx
// 008db8c0  8b542420             mov edx, dword ptr [esp + 0x20]
// 008db8c4  895020               mov dword ptr [eax + 0x20], edx
// 008db8c7  eb02                 jmp 0x8db8cb
// 008db8c9  33c0                 xor eax, eax
// 008db8cb  56                   push esi
// 008db8cc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008db8d0  6a00                 push 0
// 008db8d2  8906                 mov dword ptr [esi], eax
// 008db8d4  e83b680a00           call 0x982114
// 008db8d9  83c404               add esp, 4
// 008db8dc  8bc6                 mov eax, esi
// 008db8de  5e                   pop esi
// 008db8df  59                   pop ecx
// 008db8e0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
