// roc 2008-06 00566080  unit: RBX::Team  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00566080
//
// 00566080  51                   push ecx
// 00566081  6a18                 push 0x18
// 00566083  c744240400000000     mov dword ptr [esp + 4], 0
// 0056608b  e890a81300           call 0x6a0920
// 00566090  83c404               add esp, 4
// 00566093  85c0                 test eax, eax
// 00566095  742c                 je 0x5660c3
// 00566097  c700e0e98200         mov dword ptr [eax], 0x82e9e0
// 0056609d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005660a1  894808               mov dword ptr [eax + 8], ecx
// 005660a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005660a8  89500c               mov dword ptr [eax + 0xc], edx
// 005660ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005660af  894810               mov dword ptr [eax + 0x10], ecx
// 005660b2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005660b6  8b542418             mov edx, dword ptr [esp + 0x18]
// 005660ba  895014               mov dword ptr [eax + 0x14], edx
// 005660bd  8901                 mov dword ptr [ecx], eax
// 005660bf  8bc1                 mov eax, ecx
// 005660c1  59                   pop ecx
// 005660c2  c3                   ret 
// 005660c3  8b442408             mov eax, dword ptr [esp + 8]
// 005660c7  33c9                 xor ecx, ecx
// 005660c9  8908                 mov dword ptr [eax], ecx
// 005660cb  59                   pop ecx
// 005660cc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
