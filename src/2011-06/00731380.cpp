// roc 2011-06 00731380  unit: RBX::P8Mouse::?$GetImpl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00731380
//
// 00731380  51                   push ecx
// 00731381  6a18                 push 0x18
// 00731383  c744240400000000     mov dword ptr [esp + 4], 0
// 0073138b  e8ce8c0d00           call 0x80a05e
// 00731390  83c404               add esp, 4
// 00731393  85c0                 test eax, eax
// 00731395  742c                 je 0x7313c3
// 00731397  c700a437ab00         mov dword ptr [eax], 0xab37a4
// 0073139d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007313a1  894808               mov dword ptr [eax + 8], ecx
// 007313a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007313a8  89500c               mov dword ptr [eax + 0xc], edx
// 007313ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007313af  894810               mov dword ptr [eax + 0x10], ecx
// 007313b2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007313b6  8b542418             mov edx, dword ptr [esp + 0x18]
// 007313ba  895014               mov dword ptr [eax + 0x14], edx
// 007313bd  8901                 mov dword ptr [ecx], eax
// 007313bf  8bc1                 mov eax, ecx
// 007313c1  59                   pop ecx
// 007313c2  c3                   ret 
// 007313c3  8b442408             mov eax, dword ptr [esp + 8]
// 007313c7  33c9                 xor ecx, ecx
// 007313c9  8908                 mov dword ptr [eax], ecx
// 007313cb  59                   pop ecx
// 007313cc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
