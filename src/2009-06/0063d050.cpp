// roc 2009-06 0063d050  unit: RBX::VHat::?$FactoryProduct  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0063d050
//
// 0063d050  51                   push ecx
// 0063d051  6a28                 push 0x28
// 0063d053  c744240400000000     mov dword ptr [esp + 4], 0
// 0063d05b  e8d8b90d00           call 0x718a38
// 0063d060  83c404               add esp, 4
// 0063d063  85c0                 test eax, eax
// 0063d065  7432                 je 0x63d099
// 0063d067  c700a4b98d00         mov dword ptr [eax], 0x8db9a4
// 0063d06d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063d071  894808               mov dword ptr [eax + 8], ecx
// 0063d074  8b542410             mov edx, dword ptr [esp + 0x10]
// 0063d078  89500c               mov dword ptr [eax + 0xc], edx
// 0063d07b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0063d07f  894810               mov dword ptr [eax + 0x10], ecx
// 0063d082  8b542418             mov edx, dword ptr [esp + 0x18]
// 0063d086  895018               mov dword ptr [eax + 0x18], edx
// 0063d089  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0063d08d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0063d090  8b542420             mov edx, dword ptr [esp + 0x20]
// 0063d094  895020               mov dword ptr [eax + 0x20], edx
// 0063d097  eb02                 jmp 0x63d09b
// 0063d099  33c0                 xor eax, eax
// 0063d09b  56                   push esi
// 0063d09c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0063d0a0  6a00                 push 0
// 0063d0a2  8906                 mov dword ptr [esi], eax
// 0063d0a4  e889b90d00           call 0x718a32
// 0063d0a9  83c404               add esp, 4
// 0063d0ac  8bc6                 mov eax, esi
// 0063d0ae  5e                   pop esi
// 0063d0af  59                   pop ecx
// 0063d0b0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
