// roc 2012-06 008db8f0  unit: RBX::SkateboardPlatform  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008db8f0
//
// 008db8f0  51                   push ecx
// 008db8f1  6a28                 push 0x28
// 008db8f3  c744240400000000     mov dword ptr [esp + 4], 0
// 008db8fb  e81a680a00           call 0x98211a
// 008db900  83c404               add esp, 4
// 008db903  85c0                 test eax, eax
// 008db905  7432                 je 0x8db939
// 008db907  c700aca4be00         mov dword ptr [eax], 0xbea4ac
// 008db90d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008db911  894808               mov dword ptr [eax + 8], ecx
// 008db914  8b542410             mov edx, dword ptr [esp + 0x10]
// 008db918  89500c               mov dword ptr [eax + 0xc], edx
// 008db91b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008db91f  894810               mov dword ptr [eax + 0x10], ecx
// 008db922  8b542418             mov edx, dword ptr [esp + 0x18]
// 008db926  895018               mov dword ptr [eax + 0x18], edx
// 008db929  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008db92d  89481c               mov dword ptr [eax + 0x1c], ecx
// 008db930  8b542420             mov edx, dword ptr [esp + 0x20]
// 008db934  895020               mov dword ptr [eax + 0x20], edx
// 008db937  eb02                 jmp 0x8db93b
// 008db939  33c0                 xor eax, eax
// 008db93b  56                   push esi
// 008db93c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008db940  6a00                 push 0
// 008db942  8906                 mov dword ptr [esi], eax
// 008db944  e8cb670a00           call 0x982114
// 008db949  83c404               add esp, 4
// 008db94c  8bc6                 mov eax, esi
// 008db94e  5e                   pop esi
// 008db94f  59                   pop ecx
// 008db950  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
