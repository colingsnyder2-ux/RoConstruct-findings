// roc 2012-06 00720660  unit: RBX::VMouseCommand::?$sp_counted_impl_p  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00720660
//
// 00720660  51                   push ecx
// 00720661  6a28                 push 0x28
// 00720663  c744240400000000     mov dword ptr [esp + 4], 0
// 0072066b  e8aa1a2600           call 0x98211a
// 00720670  83c404               add esp, 4
// 00720673  85c0                 test eax, eax
// 00720675  7432                 je 0x7206a9
// 00720677  c700543eba00         mov dword ptr [eax], 0xba3e54
// 0072067d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00720681  894808               mov dword ptr [eax + 8], ecx
// 00720684  8b542410             mov edx, dword ptr [esp + 0x10]
// 00720688  89500c               mov dword ptr [eax + 0xc], edx
// 0072068b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0072068f  894810               mov dword ptr [eax + 0x10], ecx
// 00720692  8b542418             mov edx, dword ptr [esp + 0x18]
// 00720696  895018               mov dword ptr [eax + 0x18], edx
// 00720699  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0072069d  89481c               mov dword ptr [eax + 0x1c], ecx
// 007206a0  8b542420             mov edx, dword ptr [esp + 0x20]
// 007206a4  895020               mov dword ptr [eax + 0x20], edx
// 007206a7  eb02                 jmp 0x7206ab
// 007206a9  33c0                 xor eax, eax
// 007206ab  56                   push esi
// 007206ac  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007206b0  6a00                 push 0
// 007206b2  8906                 mov dword ptr [esi], eax
// 007206b4  e85b1a2600           call 0x982114
// 007206b9  83c404               add esp, 4
// 007206bc  8bc6                 mov eax, esi
// 007206be  5e                   pop esi
// 007206bf  59                   pop ecx
// 007206c0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
