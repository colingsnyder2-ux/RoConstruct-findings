// roc 2012-06 007954d0  unit: RBX::HUMAN::VHumanoidState::?$sp_counted_impl_p  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007954d0
//
// 007954d0  51                   push ecx
// 007954d1  6a28                 push 0x28
// 007954d3  c744240400000000     mov dword ptr [esp + 4], 0
// 007954db  e83acc1e00           call 0x98211a
// 007954e0  83c404               add esp, 4
// 007954e3  85c0                 test eax, eax
// 007954e5  7432                 je 0x795519
// 007954e7  c7009838bb00         mov dword ptr [eax], 0xbb3898
// 007954ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007954f1  894808               mov dword ptr [eax + 8], ecx
// 007954f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007954f8  89500c               mov dword ptr [eax + 0xc], edx
// 007954fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007954ff  894810               mov dword ptr [eax + 0x10], ecx
// 00795502  8b542418             mov edx, dword ptr [esp + 0x18]
// 00795506  895018               mov dword ptr [eax + 0x18], edx
// 00795509  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0079550d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00795510  8b542420             mov edx, dword ptr [esp + 0x20]
// 00795514  895020               mov dword ptr [eax + 0x20], edx
// 00795517  eb02                 jmp 0x79551b
// 00795519  33c0                 xor eax, eax
// 0079551b  56                   push esi
// 0079551c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00795520  6a00                 push 0
// 00795522  8906                 mov dword ptr [esi], eax
// 00795524  e8ebcb1e00           call 0x982114
// 00795529  83c404               add esp, 4
// 0079552c  8bc6                 mov eax, esi
// 0079552e  5e                   pop esi
// 0079552f  59                   pop ecx
// 00795530  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
