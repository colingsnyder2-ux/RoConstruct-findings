// roc 2011-06 00731490  unit: RBX::P8Mouse::?$GetImpl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00731490
//
// 00731490  51                   push ecx
// 00731491  6a18                 push 0x18
// 00731493  c744240400000000     mov dword ptr [esp + 4], 0
// 0073149b  e8be8b0d00           call 0x80a05e
// 007314a0  83c404               add esp, 4
// 007314a3  85c0                 test eax, eax
// 007314a5  742c                 je 0x7314d3
// 007314a7  c700f437ab00         mov dword ptr [eax], 0xab37f4
// 007314ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007314b1  894808               mov dword ptr [eax + 8], ecx
// 007314b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007314b8  89500c               mov dword ptr [eax + 0xc], edx
// 007314bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007314bf  894810               mov dword ptr [eax + 0x10], ecx
// 007314c2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007314c6  8b542418             mov edx, dword ptr [esp + 0x18]
// 007314ca  895014               mov dword ptr [eax + 0x14], edx
// 007314cd  8901                 mov dword ptr [ecx], eax
// 007314cf  8bc1                 mov eax, ecx
// 007314d1  59                   pop ecx
// 007314d2  c3                   ret 
// 007314d3  8b442408             mov eax, dword ptr [esp + 8]
// 007314d7  33c9                 xor ecx, ecx
// 007314d9  8908                 mov dword ptr [eax], ecx
// 007314db  59                   pop ecx
// 007314dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
