// roc 2010-06 006f7d30  unit: RBX::VFrame::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f7d30
//
// 006f7d30  51                   push ecx
// 006f7d31  6a18                 push 0x18
// 006f7d33  c744240400000000     mov dword ptr [esp + 4], 0
// 006f7d3b  e860fc0a00           call 0x7a79a0
// 006f7d40  83c404               add esp, 4
// 006f7d43  85c0                 test eax, eax
// 006f7d45  7424                 je 0x6f7d6b
// 006f7d47  c700e4aaa400         mov dword ptr [eax], 0xa4aae4
// 006f7d4d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f7d51  894808               mov dword ptr [eax + 8], ecx
// 006f7d54  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f7d58  89500c               mov dword ptr [eax + 0xc], edx
// 006f7d5b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006f7d5f  894810               mov dword ptr [eax + 0x10], ecx
// 006f7d62  8b542418             mov edx, dword ptr [esp + 0x18]
// 006f7d66  895014               mov dword ptr [eax + 0x14], edx
// 006f7d69  eb02                 jmp 0x6f7d6d
// 006f7d6b  33c0                 xor eax, eax
// 006f7d6d  56                   push esi
// 006f7d6e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f7d72  6a00                 push 0
// 006f7d74  8906                 mov dword ptr [esi], eax
// 006f7d76  e81ffc0a00           call 0x7a799a
// 006f7d7b  83c404               add esp, 4
// 006f7d7e  8bc6                 mov eax, esi
// 006f7d80  5e                   pop esi
// 006f7d81  59                   pop ecx
// 006f7d82  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
