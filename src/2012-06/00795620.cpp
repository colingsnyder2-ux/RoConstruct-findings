// roc 2012-06 00795620  unit: RBX::HUMAN::VHumanoidState::?$sp_counted_impl_p  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00795620
//
// 00795620  51                   push ecx
// 00795621  6a28                 push 0x28
// 00795623  c744240400000000     mov dword ptr [esp + 4], 0
// 0079562b  e8eaca1e00           call 0x98211a
// 00795630  83c404               add esp, 4
// 00795633  85c0                 test eax, eax
// 00795635  7432                 je 0x795669
// 00795637  c700d438bb00         mov dword ptr [eax], 0xbb38d4
// 0079563d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00795641  894808               mov dword ptr [eax + 8], ecx
// 00795644  8b542410             mov edx, dword ptr [esp + 0x10]
// 00795648  89500c               mov dword ptr [eax + 0xc], edx
// 0079564b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0079564f  894810               mov dword ptr [eax + 0x10], ecx
// 00795652  8b542418             mov edx, dword ptr [esp + 0x18]
// 00795656  895018               mov dword ptr [eax + 0x18], edx
// 00795659  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0079565d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00795660  8b542420             mov edx, dword ptr [esp + 0x20]
// 00795664  895020               mov dword ptr [eax + 0x20], edx
// 00795667  eb02                 jmp 0x79566b
// 00795669  33c0                 xor eax, eax
// 0079566b  56                   push esi
// 0079566c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00795670  6a00                 push 0
// 00795672  8906                 mov dword ptr [esi], eax
// 00795674  e89bca1e00           call 0x982114
// 00795679  83c404               add esp, 4
// 0079567c  8bc6                 mov eax, esi
// 0079567e  5e                   pop esi
// 0079567f  59                   pop ecx
// 00795680  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
