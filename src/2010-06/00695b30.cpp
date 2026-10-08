// roc 2010-06 00695b30  unit: RBX::VMotor::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00695b30
//
// 00695b30  51                   push ecx
// 00695b31  6a18                 push 0x18
// 00695b33  c744240400000000     mov dword ptr [esp + 4], 0
// 00695b3b  e8601e1100           call 0x7a79a0
// 00695b40  83c404               add esp, 4
// 00695b43  85c0                 test eax, eax
// 00695b45  7424                 je 0x695b6b
// 00695b47  c70084e4a300         mov dword ptr [eax], 0xa3e484
// 00695b4d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00695b51  894808               mov dword ptr [eax + 8], ecx
// 00695b54  8b542410             mov edx, dword ptr [esp + 0x10]
// 00695b58  89500c               mov dword ptr [eax + 0xc], edx
// 00695b5b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00695b5f  894810               mov dword ptr [eax + 0x10], ecx
// 00695b62  8b542418             mov edx, dword ptr [esp + 0x18]
// 00695b66  895014               mov dword ptr [eax + 0x14], edx
// 00695b69  eb02                 jmp 0x695b6d
// 00695b6b  33c0                 xor eax, eax
// 00695b6d  56                   push esi
// 00695b6e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00695b72  6a00                 push 0
// 00695b74  8906                 mov dword ptr [esi], eax
// 00695b76  e81f1e1100           call 0x7a799a
// 00695b7b  83c404               add esp, 4
// 00695b7e  8bc6                 mov eax, esi
// 00695b80  5e                   pop esi
// 00695b81  59                   pop ecx
// 00695b82  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
