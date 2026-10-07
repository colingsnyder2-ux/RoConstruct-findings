// roc 2008-06 0060aa70  unit: RBX::VHole::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060aa70
//
// 0060aa70  51                   push ecx
// 0060aa71  6a18                 push 0x18
// 0060aa73  c744240400000000     mov dword ptr [esp + 4], 0
// 0060aa7b  e8a05e0900           call 0x6a0920
// 0060aa80  83c404               add esp, 4
// 0060aa83  85c0                 test eax, eax
// 0060aa85  742c                 je 0x60aab3
// 0060aa87  c700cc2b8400         mov dword ptr [eax], 0x842bcc
// 0060aa8d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060aa91  894808               mov dword ptr [eax + 8], ecx
// 0060aa94  8b542410             mov edx, dword ptr [esp + 0x10]
// 0060aa98  89500c               mov dword ptr [eax + 0xc], edx
// 0060aa9b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0060aa9f  894810               mov dword ptr [eax + 0x10], ecx
// 0060aaa2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060aaa6  8b542418             mov edx, dword ptr [esp + 0x18]
// 0060aaaa  895014               mov dword ptr [eax + 0x14], edx
// 0060aaad  8901                 mov dword ptr [ecx], eax
// 0060aaaf  8bc1                 mov eax, ecx
// 0060aab1  59                   pop ecx
// 0060aab2  c3                   ret 
// 0060aab3  8b442408             mov eax, dword ptr [esp + 8]
// 0060aab7  33c9                 xor ecx, ecx
// 0060aab9  8908                 mov dword ptr [eax], ecx
// 0060aabb  59                   pop ecx
// 0060aabc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
