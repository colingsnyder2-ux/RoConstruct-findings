// roc 2011-06 00639970  unit: RBX::VProtectedString::?$holder  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00639970
//
// 00639970  51                   push ecx
// 00639971  6a18                 push 0x18
// 00639973  c744240400000000     mov dword ptr [esp + 4], 0
// 0063997b  e8de061d00           call 0x80a05e
// 00639980  83c404               add esp, 4
// 00639983  85c0                 test eax, eax
// 00639985  742c                 je 0x6399b3
// 00639987  c700cc74a900         mov dword ptr [eax], 0xa974cc
// 0063998d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00639991  894808               mov dword ptr [eax + 8], ecx
// 00639994  8b542410             mov edx, dword ptr [esp + 0x10]
// 00639998  89500c               mov dword ptr [eax + 0xc], edx
// 0063999b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0063999f  894810               mov dword ptr [eax + 0x10], ecx
// 006399a2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006399a6  8b542418             mov edx, dword ptr [esp + 0x18]
// 006399aa  895014               mov dword ptr [eax + 0x14], edx
// 006399ad  8901                 mov dword ptr [ecx], eax
// 006399af  8bc1                 mov eax, ecx
// 006399b1  59                   pop ecx
// 006399b2  c3                   ret 
// 006399b3  8b442408             mov eax, dword ptr [esp + 8]
// 006399b7  33c9                 xor ecx, ecx
// 006399b9  8908                 mov dword ptr [eax], ecx
// 006399bb  59                   pop ecx
// 006399bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
