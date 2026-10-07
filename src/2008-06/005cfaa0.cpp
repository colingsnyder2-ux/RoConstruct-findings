// roc 2008-06 005cfaa0  unit: ChatEnter  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cfaa0
//
// 005cfaa0  51                   push ecx
// 005cfaa1  6a18                 push 0x18
// 005cfaa3  c744240400000000     mov dword ptr [esp + 4], 0
// 005cfaab  e8700e0d00           call 0x6a0920
// 005cfab0  83c404               add esp, 4
// 005cfab3  85c0                 test eax, eax
// 005cfab5  742c                 je 0x5cfae3
// 005cfab7  c70060aa8300         mov dword ptr [eax], 0x83aa60
// 005cfabd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005cfac1  894808               mov dword ptr [eax + 8], ecx
// 005cfac4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005cfac8  89500c               mov dword ptr [eax + 0xc], edx
// 005cfacb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005cfacf  894810               mov dword ptr [eax + 0x10], ecx
// 005cfad2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cfad6  8b542418             mov edx, dword ptr [esp + 0x18]
// 005cfada  895014               mov dword ptr [eax + 0x14], edx
// 005cfadd  8901                 mov dword ptr [ecx], eax
// 005cfadf  8bc1                 mov eax, ecx
// 005cfae1  59                   pop ecx
// 005cfae2  c3                   ret 
// 005cfae3  8b442408             mov eax, dword ptr [esp + 8]
// 005cfae7  33c9                 xor ecx, ecx
// 005cfae9  8908                 mov dword ptr [eax], ecx
// 005cfaeb  59                   pop ecx
// 005cfaec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
