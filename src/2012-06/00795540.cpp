// roc 2012-06 00795540  unit: RBX::HUMAN::VHumanoidState::?$sp_counted_impl_p  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00795540
//
// 00795540  51                   push ecx
// 00795541  6a28                 push 0x28
// 00795543  c744240400000000     mov dword ptr [esp + 4], 0
// 0079554b  e8cacb1e00           call 0x98211a
// 00795550  83c404               add esp, 4
// 00795553  85c0                 test eax, eax
// 00795555  7432                 je 0x795589
// 00795557  c700ac38bb00         mov dword ptr [eax], 0xbb38ac
// 0079555d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00795561  894808               mov dword ptr [eax + 8], ecx
// 00795564  8b542410             mov edx, dword ptr [esp + 0x10]
// 00795568  89500c               mov dword ptr [eax + 0xc], edx
// 0079556b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0079556f  894810               mov dword ptr [eax + 0x10], ecx
// 00795572  8b542418             mov edx, dword ptr [esp + 0x18]
// 00795576  895018               mov dword ptr [eax + 0x18], edx
// 00795579  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0079557d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00795580  8b542420             mov edx, dword ptr [esp + 0x20]
// 00795584  895020               mov dword ptr [eax + 0x20], edx
// 00795587  eb02                 jmp 0x79558b
// 00795589  33c0                 xor eax, eax
// 0079558b  56                   push esi
// 0079558c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00795590  6a00                 push 0
// 00795592  8906                 mov dword ptr [esi], eax
// 00795594  e87bcb1e00           call 0x982114
// 00795599  83c404               add esp, 4
// 0079559c  8bc6                 mov eax, esi
// 0079559e  5e                   pop esi
// 0079559f  59                   pop ecx
// 007955a0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
