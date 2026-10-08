// roc 2007-03 00444a60  unit: seg_00440000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00444a60
//
// 00444a60  51                   push ecx
// 00444a61  6a18                 push 0x18
// 00444a63  c744240400000000     mov dword ptr [esp + 4], 0
// 00444a6b  e898961d00           call 0x61e108
// 00444a70  83c404               add esp, 4
// 00444a73  85c0                 test eax, eax
// 00444a75  7424                 je 0x444a9b
// 00444a77  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00444a7b  8b542410             mov edx, dword ptr [esp + 0x10]
// 00444a7f  894808               mov dword ptr [eax + 8], ecx
// 00444a82  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00444a86  89500c               mov dword ptr [eax + 0xc], edx
// 00444a89  8b542418             mov edx, dword ptr [esp + 0x18]
// 00444a8d  c70038eb7800         mov dword ptr [eax], 0x78eb38
// 00444a93  894810               mov dword ptr [eax + 0x10], ecx
// 00444a96  895014               mov dword ptr [eax + 0x14], edx
// 00444a99  eb02                 jmp 0x444a9d
// 00444a9b  33c0                 xor eax, eax
// 00444a9d  56                   push esi
// 00444a9e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00444aa2  6a00                 push 0
// 00444aa4  c744240800000000     mov dword ptr [esp + 8], 0
// 00444aac  8906                 mov dword ptr [esi], eax
// 00444aae  e83d961d00           call 0x61e0f0
// 00444ab3  83c404               add esp, 4
// 00444ab6  8bc6                 mov eax, esi
// 00444ab8  5e                   pop esi
// 00444ab9  59                   pop ecx
// 00444aba  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
