// roc 2012-06 00720720  unit: RBX::VMouseCommand::?$sp_counted_impl_p  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00720720
//
// 00720720  51                   push ecx
// 00720721  6a28                 push 0x28
// 00720723  c744240400000000     mov dword ptr [esp + 4], 0
// 0072072b  e8ea192600           call 0x98211a
// 00720730  83c404               add esp, 4
// 00720733  85c0                 test eax, eax
// 00720735  7432                 je 0x720769
// 00720737  c7007c3eba00         mov dword ptr [eax], 0xba3e7c
// 0072073d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00720741  894808               mov dword ptr [eax + 8], ecx
// 00720744  8b542410             mov edx, dword ptr [esp + 0x10]
// 00720748  89500c               mov dword ptr [eax + 0xc], edx
// 0072074b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0072074f  894810               mov dword ptr [eax + 0x10], ecx
// 00720752  8b542418             mov edx, dword ptr [esp + 0x18]
// 00720756  895018               mov dword ptr [eax + 0x18], edx
// 00720759  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0072075d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00720760  8b542420             mov edx, dword ptr [esp + 0x20]
// 00720764  895020               mov dword ptr [eax + 0x20], edx
// 00720767  eb02                 jmp 0x72076b
// 00720769  33c0                 xor eax, eax
// 0072076b  56                   push esi
// 0072076c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00720770  6a00                 push 0
// 00720772  8906                 mov dword ptr [esi], eax
// 00720774  e89b192600           call 0x982114
// 00720779  83c404               add esp, 4
// 0072077c  8bc6                 mov eax, esi
// 0072077e  5e                   pop esi
// 0072077f  59                   pop ecx
// 00720780  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
