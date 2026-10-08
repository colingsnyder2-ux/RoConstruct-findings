// roc 2012-06 00795690  unit: RBX::HUMAN::VHumanoidState::?$sp_counted_impl_p  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00795690
//
// 00795690  51                   push ecx
// 00795691  6a28                 push 0x28
// 00795693  c744240400000000     mov dword ptr [esp + 4], 0
// 0079569b  e87aca1e00           call 0x98211a
// 007956a0  83c404               add esp, 4
// 007956a3  85c0                 test eax, eax
// 007956a5  7432                 je 0x7956d9
// 007956a7  c700e838bb00         mov dword ptr [eax], 0xbb38e8
// 007956ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007956b1  894808               mov dword ptr [eax + 8], ecx
// 007956b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007956b8  89500c               mov dword ptr [eax + 0xc], edx
// 007956bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007956bf  894810               mov dword ptr [eax + 0x10], ecx
// 007956c2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007956c6  895018               mov dword ptr [eax + 0x18], edx
// 007956c9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007956cd  89481c               mov dword ptr [eax + 0x1c], ecx
// 007956d0  8b542420             mov edx, dword ptr [esp + 0x20]
// 007956d4  895020               mov dword ptr [eax + 0x20], edx
// 007956d7  eb02                 jmp 0x7956db
// 007956d9  33c0                 xor eax, eax
// 007956db  56                   push esi
// 007956dc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007956e0  6a00                 push 0
// 007956e2  8906                 mov dword ptr [esi], eax
// 007956e4  e82bca1e00           call 0x982114
// 007956e9  83c404               add esp, 4
// 007956ec  8bc6                 mov eax, esi
// 007956ee  5e                   pop esi
// 007956ef  59                   pop ecx
// 007956f0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
