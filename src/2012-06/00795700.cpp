// roc 2012-06 00795700  unit: RBX::HUMAN::VHumanoidState::?$sp_counted_impl_p  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00795700
//
// 00795700  51                   push ecx
// 00795701  6a28                 push 0x28
// 00795703  c744240400000000     mov dword ptr [esp + 4], 0
// 0079570b  e80aca1e00           call 0x98211a
// 00795710  83c404               add esp, 4
// 00795713  85c0                 test eax, eax
// 00795715  7432                 je 0x795749
// 00795717  c700fc38bb00         mov dword ptr [eax], 0xbb38fc
// 0079571d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00795721  894808               mov dword ptr [eax + 8], ecx
// 00795724  8b542410             mov edx, dword ptr [esp + 0x10]
// 00795728  89500c               mov dword ptr [eax + 0xc], edx
// 0079572b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0079572f  894810               mov dword ptr [eax + 0x10], ecx
// 00795732  8b542418             mov edx, dword ptr [esp + 0x18]
// 00795736  895018               mov dword ptr [eax + 0x18], edx
// 00795739  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0079573d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00795740  8b542420             mov edx, dword ptr [esp + 0x20]
// 00795744  895020               mov dword ptr [eax + 0x20], edx
// 00795747  eb02                 jmp 0x79574b
// 00795749  33c0                 xor eax, eax
// 0079574b  56                   push esi
// 0079574c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00795750  6a00                 push 0
// 00795752  8906                 mov dword ptr [esi], eax
// 00795754  e8bbc91e00           call 0x982114
// 00795759  83c404               add esp, 4
// 0079575c  8bc6                 mov eax, esi
// 0079575e  5e                   pop esi
// 0079575f  59                   pop ecx
// 00795760  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
