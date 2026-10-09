// roc 2009-12 00528e40  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00528e40
//
// 00528e40  51                   push ecx
// 00528e41  6a18                 push 0x18
// 00528e43  c744240400000000     mov dword ptr [esp + 4], 0
// 00528e4b  e810aa2c00           call 0x7f3860
// 00528e50  83c404               add esp, 4
// 00528e53  85c0                 test eax, eax
// 00528e55  7424                 je 0x528e7b
// 00528e57  c7005cc09b00         mov dword ptr [eax], 0x9bc05c
// 00528e5d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00528e61  894808               mov dword ptr [eax + 8], ecx
// 00528e64  8b542410             mov edx, dword ptr [esp + 0x10]
// 00528e68  89500c               mov dword ptr [eax + 0xc], edx
// 00528e6b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00528e6f  894810               mov dword ptr [eax + 0x10], ecx
// 00528e72  8b542418             mov edx, dword ptr [esp + 0x18]
// 00528e76  895014               mov dword ptr [eax + 0x14], edx
// 00528e79  eb02                 jmp 0x528e7d
// 00528e7b  33c0                 xor eax, eax
// 00528e7d  56                   push esi
// 00528e7e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00528e82  6a00                 push 0
// 00528e84  8906                 mov dword ptr [esi], eax
// 00528e86  e8cfa92c00           call 0x7f385a
// 00528e8b  83c404               add esp, 4
// 00528e8e  8bc6                 mov eax, esi
// 00528e90  5e                   pop esi
// 00528e91  59                   pop ecx
// 00528e92  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
