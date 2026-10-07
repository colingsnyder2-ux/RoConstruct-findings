// roc 2008-06 0048b3f0  unit: boost::any::placeholder  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048b3f0
//
// 0048b3f0  51                   push ecx
// 0048b3f1  6a18                 push 0x18
// 0048b3f3  c744240400000000     mov dword ptr [esp + 4], 0
// 0048b3fb  e820552100           call 0x6a0920
// 0048b400  83c404               add esp, 4
// 0048b403  85c0                 test eax, eax
// 0048b405  742c                 je 0x48b433
// 0048b407  c70054168200         mov dword ptr [eax], 0x821654
// 0048b40d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048b411  894808               mov dword ptr [eax + 8], ecx
// 0048b414  8b542410             mov edx, dword ptr [esp + 0x10]
// 0048b418  89500c               mov dword ptr [eax + 0xc], edx
// 0048b41b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0048b41f  894810               mov dword ptr [eax + 0x10], ecx
// 0048b422  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048b426  8b542418             mov edx, dword ptr [esp + 0x18]
// 0048b42a  895014               mov dword ptr [eax + 0x14], edx
// 0048b42d  8901                 mov dword ptr [ecx], eax
// 0048b42f  8bc1                 mov eax, ecx
// 0048b431  59                   pop ecx
// 0048b432  c3                   ret 
// 0048b433  8b442408             mov eax, dword ptr [esp + 8]
// 0048b437  33c9                 xor ecx, ecx
// 0048b439  8908                 mov dword ptr [eax], ecx
// 0048b43b  59                   pop ecx
// 0048b43c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
