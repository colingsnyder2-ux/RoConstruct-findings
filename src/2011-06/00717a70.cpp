// roc 2011-06 00717a70  unit: RBX::Frame  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00717a70
//
// 00717a70  51                   push ecx
// 00717a71  6a18                 push 0x18
// 00717a73  c744240400000000     mov dword ptr [esp + 4], 0
// 00717a7b  e8de250f00           call 0x80a05e
// 00717a80  83c404               add esp, 4
// 00717a83  85c0                 test eax, eax
// 00717a85  742c                 je 0x717ab3
// 00717a87  c700e802ab00         mov dword ptr [eax], 0xab02e8
// 00717a8d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00717a91  894808               mov dword ptr [eax + 8], ecx
// 00717a94  8b542410             mov edx, dword ptr [esp + 0x10]
// 00717a98  89500c               mov dword ptr [eax + 0xc], edx
// 00717a9b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00717a9f  894810               mov dword ptr [eax + 0x10], ecx
// 00717aa2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00717aa6  8b542418             mov edx, dword ptr [esp + 0x18]
// 00717aaa  895014               mov dword ptr [eax + 0x14], edx
// 00717aad  8901                 mov dword ptr [ecx], eax
// 00717aaf  8bc1                 mov eax, ecx
// 00717ab1  59                   pop ecx
// 00717ab2  c3                   ret 
// 00717ab3  8b442408             mov eax, dword ptr [esp + 8]
// 00717ab7  33c9                 xor ecx, ecx
// 00717ab9  8908                 mov dword ptr [eax], ecx
// 00717abb  59                   pop ecx
// 00717abc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
