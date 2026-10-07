// roc 2011-06 00721340  unit: RBX::VInstance::?$NonFactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00721340
//
// 00721340  51                   push ecx
// 00721341  6a18                 push 0x18
// 00721343  c744240400000000     mov dword ptr [esp + 4], 0
// 0072134b  e80e8d0e00           call 0x80a05e
// 00721350  83c404               add esp, 4
// 00721353  85c0                 test eax, eax
// 00721355  742c                 je 0x721383
// 00721357  c7005825ab00         mov dword ptr [eax], 0xab2558
// 0072135d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00721361  894808               mov dword ptr [eax + 8], ecx
// 00721364  8b542410             mov edx, dword ptr [esp + 0x10]
// 00721368  89500c               mov dword ptr [eax + 0xc], edx
// 0072136b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0072136f  894810               mov dword ptr [eax + 0x10], ecx
// 00721372  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00721376  8b542418             mov edx, dword ptr [esp + 0x18]
// 0072137a  895014               mov dword ptr [eax + 0x14], edx
// 0072137d  8901                 mov dword ptr [ecx], eax
// 0072137f  8bc1                 mov eax, ecx
// 00721381  59                   pop ecx
// 00721382  c3                   ret 
// 00721383  8b442408             mov eax, dword ptr [esp + 8]
// 00721387  33c9                 xor ecx, ecx
// 00721389  8908                 mov dword ptr [eax], ecx
// 0072138b  59                   pop ecx
// 0072138c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
