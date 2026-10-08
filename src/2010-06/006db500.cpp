// roc 2010-06 006db500  unit: RBX::VPartInstance::?$SeatImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006db500
//
// 006db500  51                   push ecx
// 006db501  6a28                 push 0x28
// 006db503  c744240400000000     mov dword ptr [esp + 4], 0
// 006db50b  e890c40c00           call 0x7a79a0
// 006db510  83c404               add esp, 4
// 006db513  85c0                 test eax, eax
// 006db515  7432                 je 0x6db549
// 006db517  c700c86ca400         mov dword ptr [eax], 0xa46cc8
// 006db51d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006db521  894808               mov dword ptr [eax + 8], ecx
// 006db524  8b542410             mov edx, dword ptr [esp + 0x10]
// 006db528  89500c               mov dword ptr [eax + 0xc], edx
// 006db52b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006db52f  894810               mov dword ptr [eax + 0x10], ecx
// 006db532  8b542418             mov edx, dword ptr [esp + 0x18]
// 006db536  895018               mov dword ptr [eax + 0x18], edx
// 006db539  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006db53d  89481c               mov dword ptr [eax + 0x1c], ecx
// 006db540  8b542420             mov edx, dword ptr [esp + 0x20]
// 006db544  895020               mov dword ptr [eax + 0x20], edx
// 006db547  eb02                 jmp 0x6db54b
// 006db549  33c0                 xor eax, eax
// 006db54b  56                   push esi
// 006db54c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006db550  6a00                 push 0
// 006db552  8906                 mov dword ptr [esi], eax
// 006db554  e841c40c00           call 0x7a799a
// 006db559  83c404               add esp, 4
// 006db55c  8bc6                 mov eax, esi
// 006db55e  5e                   pop esi
// 006db55f  59                   pop ecx
// 006db560  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
