// roc 2008-06 0048b490  unit: boost::any::placeholder  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048b490
//
// 0048b490  51                   push ecx
// 0048b491  6a18                 push 0x18
// 0048b493  c744240400000000     mov dword ptr [esp + 4], 0
// 0048b49b  e880542100           call 0x6a0920
// 0048b4a0  83c404               add esp, 4
// 0048b4a3  85c0                 test eax, eax
// 0048b4a5  742c                 je 0x48b4d3
// 0048b4a7  c7007c168200         mov dword ptr [eax], 0x82167c
// 0048b4ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048b4b1  894808               mov dword ptr [eax + 8], ecx
// 0048b4b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0048b4b8  89500c               mov dword ptr [eax + 0xc], edx
// 0048b4bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0048b4bf  894810               mov dword ptr [eax + 0x10], ecx
// 0048b4c2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048b4c6  8b542418             mov edx, dword ptr [esp + 0x18]
// 0048b4ca  895014               mov dword ptr [eax + 0x14], edx
// 0048b4cd  8901                 mov dword ptr [ecx], eax
// 0048b4cf  8bc1                 mov eax, ecx
// 0048b4d1  59                   pop ecx
// 0048b4d2  c3                   ret 
// 0048b4d3  8b442408             mov eax, dword ptr [esp + 8]
// 0048b4d7  33c9                 xor ecx, ecx
// 0048b4d9  8908                 mov dword ptr [eax], ecx
// 0048b4db  59                   pop ecx
// 0048b4dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
