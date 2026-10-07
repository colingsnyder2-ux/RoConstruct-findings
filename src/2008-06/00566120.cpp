// roc 2008-06 00566120  unit: RBX::Team  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00566120
//
// 00566120  51                   push ecx
// 00566121  6a18                 push 0x18
// 00566123  c744240400000000     mov dword ptr [esp + 4], 0
// 0056612b  e8f0a71300           call 0x6a0920
// 00566130  83c404               add esp, 4
// 00566133  85c0                 test eax, eax
// 00566135  742c                 je 0x566163
// 00566137  c700b8e98200         mov dword ptr [eax], 0x82e9b8
// 0056613d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00566141  894808               mov dword ptr [eax + 8], ecx
// 00566144  8b542410             mov edx, dword ptr [esp + 0x10]
// 00566148  89500c               mov dword ptr [eax + 0xc], edx
// 0056614b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0056614f  894810               mov dword ptr [eax + 0x10], ecx
// 00566152  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00566156  8b542418             mov edx, dword ptr [esp + 0x18]
// 0056615a  895014               mov dword ptr [eax + 0x14], edx
// 0056615d  8901                 mov dword ptr [ecx], eax
// 0056615f  8bc1                 mov eax, ecx
// 00566161  59                   pop ecx
// 00566162  c3                   ret 
// 00566163  8b442408             mov eax, dword ptr [esp + 8]
// 00566167  33c9                 xor ecx, ecx
// 00566169  8908                 mov dword ptr [eax], ecx
// 0056616b  59                   pop ecx
// 0056616c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
