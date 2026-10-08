// roc 2010-06 006028f0  unit: RBX::HeartbeatInstance  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006028f0
//
// 006028f0  51                   push ecx
// 006028f1  6a28                 push 0x28
// 006028f3  c744240400000000     mov dword ptr [esp + 4], 0
// 006028fb  e8a0501a00           call 0x7a79a0
// 00602900  83c404               add esp, 4
// 00602903  85c0                 test eax, eax
// 00602905  7432                 je 0x602939
// 00602907  c700000ca300         mov dword ptr [eax], 0xa30c00
// 0060290d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00602911  894808               mov dword ptr [eax + 8], ecx
// 00602914  8b542410             mov edx, dword ptr [esp + 0x10]
// 00602918  89500c               mov dword ptr [eax + 0xc], edx
// 0060291b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0060291f  894810               mov dword ptr [eax + 0x10], ecx
// 00602922  8b542418             mov edx, dword ptr [esp + 0x18]
// 00602926  895018               mov dword ptr [eax + 0x18], edx
// 00602929  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0060292d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00602930  8b542420             mov edx, dword ptr [esp + 0x20]
// 00602934  895020               mov dword ptr [eax + 0x20], edx
// 00602937  eb02                 jmp 0x60293b
// 00602939  33c0                 xor eax, eax
// 0060293b  56                   push esi
// 0060293c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00602940  6a00                 push 0
// 00602942  8906                 mov dword ptr [esi], eax
// 00602944  e851501a00           call 0x7a799a
// 00602949  83c404               add esp, 4
// 0060294c  8bc6                 mov eax, esi
// 0060294e  5e                   pop esi
// 0060294f  59                   pop ecx
// 00602950  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
