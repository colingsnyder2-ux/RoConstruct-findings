// roc 2012-06 008a2a40  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a2a40
//
// 008a2a40  51                   push ecx
// 008a2a41  6a18                 push 0x18
// 008a2a43  c744240400000000     mov dword ptr [esp + 4], 0
// 008a2a4b  e8caf60d00           call 0x98211a
// 008a2a50  83c404               add esp, 4
// 008a2a53  85c0                 test eax, eax
// 008a2a55  7424                 je 0x8a2a7b
// 008a2a57  c70020e5bd00         mov dword ptr [eax], 0xbde520
// 008a2a5d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a2a61  894808               mov dword ptr [eax + 8], ecx
// 008a2a64  8b542410             mov edx, dword ptr [esp + 0x10]
// 008a2a68  89500c               mov dword ptr [eax + 0xc], edx
// 008a2a6b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008a2a6f  894810               mov dword ptr [eax + 0x10], ecx
// 008a2a72  8b542418             mov edx, dword ptr [esp + 0x18]
// 008a2a76  895014               mov dword ptr [eax + 0x14], edx
// 008a2a79  eb02                 jmp 0x8a2a7d
// 008a2a7b  33c0                 xor eax, eax
// 008a2a7d  56                   push esi
// 008a2a7e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008a2a82  6a00                 push 0
// 008a2a84  8906                 mov dword ptr [esi], eax
// 008a2a86  e889f60d00           call 0x982114
// 008a2a8b  83c404               add esp, 4
// 008a2a8e  8bc6                 mov eax, esi
// 008a2a90  5e                   pop esi
// 008a2a91  59                   pop ecx
// 008a2a92  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
