// roc 2007-03 00578190  unit: seg_00570000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00578190
//
// 00578190  51                   push ecx
// 00578191  6a18                 push 0x18
// 00578193  c744240400000000     mov dword ptr [esp + 4], 0
// 0057819b  e8685f0a00           call 0x61e108
// 005781a0  83c404               add esp, 4
// 005781a3  85c0                 test eax, eax
// 005781a5  7424                 je 0x5781cb
// 005781a7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005781ab  8b542410             mov edx, dword ptr [esp + 0x10]
// 005781af  894808               mov dword ptr [eax + 8], ecx
// 005781b2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005781b6  89500c               mov dword ptr [eax + 0xc], edx
// 005781b9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005781bd  c70030c87a00         mov dword ptr [eax], 0x7ac830
// 005781c3  894810               mov dword ptr [eax + 0x10], ecx
// 005781c6  895014               mov dword ptr [eax + 0x14], edx
// 005781c9  eb02                 jmp 0x5781cd
// 005781cb  33c0                 xor eax, eax
// 005781cd  56                   push esi
// 005781ce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005781d2  6a00                 push 0
// 005781d4  c744240800000000     mov dword ptr [esp + 8], 0
// 005781dc  8906                 mov dword ptr [esi], eax
// 005781de  e80d5f0a00           call 0x61e0f0
// 005781e3  83c404               add esp, 4
// 005781e6  8bc6                 mov eax, esi
// 005781e8  5e                   pop esi
// 005781e9  59                   pop ecx
// 005781ea  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
