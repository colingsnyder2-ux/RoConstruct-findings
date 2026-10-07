// roc 2011-06 007047e0  unit: RBX::VSelectionBox::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007047e0
//
// 007047e0  51                   push ecx
// 007047e1  6a18                 push 0x18
// 007047e3  c744240400000000     mov dword ptr [esp + 4], 0
// 007047eb  e86e581000           call 0x80a05e
// 007047f0  83c404               add esp, 4
// 007047f3  85c0                 test eax, eax
// 007047f5  742c                 je 0x704823
// 007047f7  c700c4d3aa00         mov dword ptr [eax], 0xaad3c4
// 007047fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00704801  894808               mov dword ptr [eax + 8], ecx
// 00704804  8b542410             mov edx, dword ptr [esp + 0x10]
// 00704808  89500c               mov dword ptr [eax + 0xc], edx
// 0070480b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0070480f  894810               mov dword ptr [eax + 0x10], ecx
// 00704812  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00704816  8b542418             mov edx, dword ptr [esp + 0x18]
// 0070481a  895014               mov dword ptr [eax + 0x14], edx
// 0070481d  8901                 mov dword ptr [ecx], eax
// 0070481f  8bc1                 mov eax, ecx
// 00704821  59                   pop ecx
// 00704822  c3                   ret 
// 00704823  8b442408             mov eax, dword ptr [esp + 8]
// 00704827  33c9                 xor ecx, ecx
// 00704829  8908                 mov dword ptr [eax], ecx
// 0070482b  59                   pop ecx
// 0070482c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
