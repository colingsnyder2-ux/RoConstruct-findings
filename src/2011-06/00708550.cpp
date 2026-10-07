// roc 2011-06 00708550  unit: RBX::ArcHandles  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00708550
//
// 00708550  51                   push ecx
// 00708551  6a18                 push 0x18
// 00708553  c744240400000000     mov dword ptr [esp + 4], 0
// 0070855b  e8fe1a1000           call 0x80a05e
// 00708560  83c404               add esp, 4
// 00708563  85c0                 test eax, eax
// 00708565  742c                 je 0x708593
// 00708567  c700fcd7aa00         mov dword ptr [eax], 0xaad7fc
// 0070856d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00708571  894808               mov dword ptr [eax + 8], ecx
// 00708574  8b542410             mov edx, dword ptr [esp + 0x10]
// 00708578  89500c               mov dword ptr [eax + 0xc], edx
// 0070857b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0070857f  894810               mov dword ptr [eax + 0x10], ecx
// 00708582  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00708586  8b542418             mov edx, dword ptr [esp + 0x18]
// 0070858a  895014               mov dword ptr [eax + 0x14], edx
// 0070858d  8901                 mov dword ptr [ecx], eax
// 0070858f  8bc1                 mov eax, ecx
// 00708591  59                   pop ecx
// 00708592  c3                   ret 
// 00708593  8b442408             mov eax, dword ptr [esp + 8]
// 00708597  33c9                 xor ecx, ecx
// 00708599  8908                 mov dword ptr [eax], ecx
// 0070859b  59                   pop ecx
// 0070859c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
