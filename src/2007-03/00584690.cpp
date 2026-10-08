// roc 2007-03 00584690  unit: seg_00580000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00584690
//
// 00584690  51                   push ecx
// 00584691  6a18                 push 0x18
// 00584693  c744240400000000     mov dword ptr [esp + 4], 0
// 0058469b  e8689a0900           call 0x61e108
// 005846a0  83c404               add esp, 4
// 005846a3  85c0                 test eax, eax
// 005846a5  7424                 je 0x5846cb
// 005846a7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005846ab  8b542410             mov edx, dword ptr [esp + 0x10]
// 005846af  894808               mov dword ptr [eax + 8], ecx
// 005846b2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005846b6  89500c               mov dword ptr [eax + 0xc], edx
// 005846b9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005846bd  c70014fb7a00         mov dword ptr [eax], 0x7afb14
// 005846c3  894810               mov dword ptr [eax + 0x10], ecx
// 005846c6  895014               mov dword ptr [eax + 0x14], edx
// 005846c9  eb02                 jmp 0x5846cd
// 005846cb  33c0                 xor eax, eax
// 005846cd  56                   push esi
// 005846ce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005846d2  6a00                 push 0
// 005846d4  c744240800000000     mov dword ptr [esp + 8], 0
// 005846dc  8906                 mov dword ptr [esi], eax
// 005846de  e80d9a0900           call 0x61e0f0
// 005846e3  83c404               add esp, 4
// 005846e6  8bc6                 mov eax, esi
// 005846e8  5e                   pop esi
// 005846e9  59                   pop ecx
// 005846ea  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
