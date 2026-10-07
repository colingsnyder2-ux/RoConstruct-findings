// roc 2011-06 00704790  unit: RBX::VSelectionBox::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00704790
//
// 00704790  51                   push ecx
// 00704791  6a18                 push 0x18
// 00704793  c744240400000000     mov dword ptr [esp + 4], 0
// 0070479b  e8be581000           call 0x80a05e
// 007047a0  83c404               add esp, 4
// 007047a3  85c0                 test eax, eax
// 007047a5  742c                 je 0x7047d3
// 007047a7  c700b0d3aa00         mov dword ptr [eax], 0xaad3b0
// 007047ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007047b1  894808               mov dword ptr [eax + 8], ecx
// 007047b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007047b8  89500c               mov dword ptr [eax + 0xc], edx
// 007047bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007047bf  894810               mov dword ptr [eax + 0x10], ecx
// 007047c2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007047c6  8b542418             mov edx, dword ptr [esp + 0x18]
// 007047ca  895014               mov dword ptr [eax + 0x14], edx
// 007047cd  8901                 mov dword ptr [ecx], eax
// 007047cf  8bc1                 mov eax, ecx
// 007047d1  59                   pop ecx
// 007047d2  c3                   ret 
// 007047d3  8b442408             mov eax, dword ptr [esp + 8]
// 007047d7  33c9                 xor ecx, ecx
// 007047d9  8908                 mov dword ptr [eax], ecx
// 007047db  59                   pop ecx
// 007047dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
