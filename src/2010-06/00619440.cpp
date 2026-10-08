// roc 2010-06 00619440  unit: RBX::VHat::?$FactoryProduct  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00619440
//
// 00619440  51                   push ecx
// 00619441  6a28                 push 0x28
// 00619443  c744240400000000     mov dword ptr [esp + 4], 0
// 0061944b  e850e51800           call 0x7a79a0
// 00619450  83c404               add esp, 4
// 00619453  85c0                 test eax, eax
// 00619455  7432                 je 0x619489
// 00619457  c700041ca300         mov dword ptr [eax], 0xa31c04
// 0061945d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00619461  894808               mov dword ptr [eax + 8], ecx
// 00619464  8b542410             mov edx, dword ptr [esp + 0x10]
// 00619468  89500c               mov dword ptr [eax + 0xc], edx
// 0061946b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0061946f  894810               mov dword ptr [eax + 0x10], ecx
// 00619472  8b542418             mov edx, dword ptr [esp + 0x18]
// 00619476  895018               mov dword ptr [eax + 0x18], edx
// 00619479  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0061947d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00619480  8b542420             mov edx, dword ptr [esp + 0x20]
// 00619484  895020               mov dword ptr [eax + 0x20], edx
// 00619487  eb02                 jmp 0x61948b
// 00619489  33c0                 xor eax, eax
// 0061948b  56                   push esi
// 0061948c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00619490  6a00                 push 0
// 00619492  8906                 mov dword ptr [esi], eax
// 00619494  e801e51800           call 0x7a799a
// 00619499  83c404               add esp, 4
// 0061949c  8bc6                 mov eax, esi
// 0061949e  5e                   pop esi
// 0061949f  59                   pop ecx
// 006194a0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
