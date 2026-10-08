// roc 2012-06 007cf610  unit: RBX::SpawnLocation  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007cf610
//
// 007cf610  51                   push ecx
// 007cf611  6a28                 push 0x28
// 007cf613  c744240400000000     mov dword ptr [esp + 4], 0
// 007cf61b  e8fa2a1b00           call 0x98211a
// 007cf620  83c404               add esp, 4
// 007cf623  85c0                 test eax, eax
// 007cf625  7432                 je 0x7cf659
// 007cf627  c700ccf3bb00         mov dword ptr [eax], 0xbbf3cc
// 007cf62d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007cf631  894808               mov dword ptr [eax + 8], ecx
// 007cf634  8b542410             mov edx, dword ptr [esp + 0x10]
// 007cf638  89500c               mov dword ptr [eax + 0xc], edx
// 007cf63b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007cf63f  894810               mov dword ptr [eax + 0x10], ecx
// 007cf642  8b542418             mov edx, dword ptr [esp + 0x18]
// 007cf646  895018               mov dword ptr [eax + 0x18], edx
// 007cf649  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007cf64d  89481c               mov dword ptr [eax + 0x1c], ecx
// 007cf650  8b542420             mov edx, dword ptr [esp + 0x20]
// 007cf654  895020               mov dword ptr [eax + 0x20], edx
// 007cf657  eb02                 jmp 0x7cf65b
// 007cf659  33c0                 xor eax, eax
// 007cf65b  56                   push esi
// 007cf65c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007cf660  6a00                 push 0
// 007cf662  8906                 mov dword ptr [esi], eax
// 007cf664  e8ab2a1b00           call 0x982114
// 007cf669  83c404               add esp, 4
// 007cf66c  8bc6                 mov eax, esi
// 007cf66e  5e                   pop esi
// 007cf66f  59                   pop ecx
// 007cf670  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
