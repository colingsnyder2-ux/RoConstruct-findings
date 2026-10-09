// roc 2009-12 006dcf40  unit: RBX::Camera  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006dcf40
//
// 006dcf40  51                   push ecx
// 006dcf41  6a18                 push 0x18
// 006dcf43  c744240400000000     mov dword ptr [esp + 4], 0
// 006dcf4b  e810691100           call 0x7f3860
// 006dcf50  83c404               add esp, 4
// 006dcf53  85c0                 test eax, eax
// 006dcf55  7424                 je 0x6dcf7b
// 006dcf57  c700bc9c9d00         mov dword ptr [eax], 0x9d9cbc
// 006dcf5d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006dcf61  894808               mov dword ptr [eax + 8], ecx
// 006dcf64  8b542410             mov edx, dword ptr [esp + 0x10]
// 006dcf68  89500c               mov dword ptr [eax + 0xc], edx
// 006dcf6b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006dcf6f  894810               mov dword ptr [eax + 0x10], ecx
// 006dcf72  8b542418             mov edx, dword ptr [esp + 0x18]
// 006dcf76  895014               mov dword ptr [eax + 0x14], edx
// 006dcf79  eb02                 jmp 0x6dcf7d
// 006dcf7b  33c0                 xor eax, eax
// 006dcf7d  56                   push esi
// 006dcf7e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006dcf82  6a00                 push 0
// 006dcf84  8906                 mov dword ptr [esi], eax
// 006dcf86  e8cf681100           call 0x7f385a
// 006dcf8b  83c404               add esp, 4
// 006dcf8e  8bc6                 mov eax, esi
// 006dcf90  5e                   pop esi
// 006dcf91  59                   pop ecx
// 006dcf92  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
