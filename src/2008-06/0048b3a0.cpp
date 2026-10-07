// roc 2008-06 0048b3a0  unit: boost::any::placeholder  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048b3a0
//
// 0048b3a0  51                   push ecx
// 0048b3a1  6a18                 push 0x18
// 0048b3a3  c744240400000000     mov dword ptr [esp + 4], 0
// 0048b3ab  e870552100           call 0x6a0920
// 0048b3b0  83c404               add esp, 4
// 0048b3b3  85c0                 test eax, eax
// 0048b3b5  742c                 je 0x48b3e3
// 0048b3b7  c70040168200         mov dword ptr [eax], 0x821640
// 0048b3bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048b3c1  894808               mov dword ptr [eax + 8], ecx
// 0048b3c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0048b3c8  89500c               mov dword ptr [eax + 0xc], edx
// 0048b3cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0048b3cf  894810               mov dword ptr [eax + 0x10], ecx
// 0048b3d2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048b3d6  8b542418             mov edx, dword ptr [esp + 0x18]
// 0048b3da  895014               mov dword ptr [eax + 0x14], edx
// 0048b3dd  8901                 mov dword ptr [ecx], eax
// 0048b3df  8bc1                 mov eax, ecx
// 0048b3e1  59                   pop ecx
// 0048b3e2  c3                   ret 
// 0048b3e3  8b442408             mov eax, dword ptr [esp + 8]
// 0048b3e7  33c9                 xor ecx, ecx
// 0048b3e9  8908                 mov dword ptr [eax], ecx
// 0048b3eb  59                   pop ecx
// 0048b3ec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
