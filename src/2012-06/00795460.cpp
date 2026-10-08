// roc 2012-06 00795460  unit: RBX::HUMAN::VHumanoidState::?$sp_counted_impl_p  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00795460
//
// 00795460  51                   push ecx
// 00795461  6a28                 push 0x28
// 00795463  c744240400000000     mov dword ptr [esp + 4], 0
// 0079546b  e8aacc1e00           call 0x98211a
// 00795470  83c404               add esp, 4
// 00795473  85c0                 test eax, eax
// 00795475  7432                 je 0x7954a9
// 00795477  c7008438bb00         mov dword ptr [eax], 0xbb3884
// 0079547d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00795481  894808               mov dword ptr [eax + 8], ecx
// 00795484  8b542410             mov edx, dword ptr [esp + 0x10]
// 00795488  89500c               mov dword ptr [eax + 0xc], edx
// 0079548b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0079548f  894810               mov dword ptr [eax + 0x10], ecx
// 00795492  8b542418             mov edx, dword ptr [esp + 0x18]
// 00795496  895018               mov dword ptr [eax + 0x18], edx
// 00795499  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0079549d  89481c               mov dword ptr [eax + 0x1c], ecx
// 007954a0  8b542420             mov edx, dword ptr [esp + 0x20]
// 007954a4  895020               mov dword ptr [eax + 0x20], edx
// 007954a7  eb02                 jmp 0x7954ab
// 007954a9  33c0                 xor eax, eax
// 007954ab  56                   push esi
// 007954ac  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007954b0  6a00                 push 0
// 007954b2  8906                 mov dword ptr [esi], eax
// 007954b4  e85bcc1e00           call 0x982114
// 007954b9  83c404               add esp, 4
// 007954bc  8bc6                 mov eax, esi
// 007954be  5e                   pop esi
// 007954bf  59                   pop ecx
// 007954c0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
