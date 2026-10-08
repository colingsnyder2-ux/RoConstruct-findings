// roc 2010-06 006ee450  unit: RBX::BadgeService  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006ee450
//
// 006ee450  51                   push ecx
// 006ee451  6a28                 push 0x28
// 006ee453  c744240400000000     mov dword ptr [esp + 4], 0
// 006ee45b  e840950b00           call 0x7a79a0
// 006ee460  83c404               add esp, 4
// 006ee463  85c0                 test eax, eax
// 006ee465  7432                 je 0x6ee499
// 006ee467  c70064a0a400         mov dword ptr [eax], 0xa4a064
// 006ee46d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ee471  894808               mov dword ptr [eax + 8], ecx
// 006ee474  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ee478  89500c               mov dword ptr [eax + 0xc], edx
// 006ee47b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ee47f  894810               mov dword ptr [eax + 0x10], ecx
// 006ee482  8b542418             mov edx, dword ptr [esp + 0x18]
// 006ee486  895018               mov dword ptr [eax + 0x18], edx
// 006ee489  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006ee48d  89481c               mov dword ptr [eax + 0x1c], ecx
// 006ee490  8b542420             mov edx, dword ptr [esp + 0x20]
// 006ee494  895020               mov dword ptr [eax + 0x20], edx
// 006ee497  eb02                 jmp 0x6ee49b
// 006ee499  33c0                 xor eax, eax
// 006ee49b  56                   push esi
// 006ee49c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ee4a0  6a00                 push 0
// 006ee4a2  8906                 mov dword ptr [esi], eax
// 006ee4a4  e8f1940b00           call 0x7a799a
// 006ee4a9  83c404               add esp, 4
// 006ee4ac  8bc6                 mov eax, esi
// 006ee4ae  5e                   pop esi
// 006ee4af  59                   pop ecx
// 006ee4b0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
