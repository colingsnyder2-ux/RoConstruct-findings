// roc 2011-06 0071abc0  unit: RBX::P8SelectionPointLasso::?$GetSetImpl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0071abc0
//
// 0071abc0  51                   push ecx
// 0071abc1  6a18                 push 0x18
// 0071abc3  c744240400000000     mov dword ptr [esp + 4], 0
// 0071abcb  e88ef40e00           call 0x80a05e
// 0071abd0  83c404               add esp, 4
// 0071abd3  85c0                 test eax, eax
// 0071abd5  742c                 je 0x71ac03
// 0071abd7  c700040eab00         mov dword ptr [eax], 0xab0e04
// 0071abdd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071abe1  894808               mov dword ptr [eax + 8], ecx
// 0071abe4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0071abe8  89500c               mov dword ptr [eax + 0xc], edx
// 0071abeb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0071abef  894810               mov dword ptr [eax + 0x10], ecx
// 0071abf2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0071abf6  8b542418             mov edx, dword ptr [esp + 0x18]
// 0071abfa  895014               mov dword ptr [eax + 0x14], edx
// 0071abfd  8901                 mov dword ptr [ecx], eax
// 0071abff  8bc1                 mov eax, ecx
// 0071ac01  59                   pop ecx
// 0071ac02  c3                   ret 
// 0071ac03  8b442408             mov eax, dword ptr [esp + 8]
// 0071ac07  33c9                 xor ecx, ecx
// 0071ac09  8908                 mov dword ptr [eax], ecx
// 0071ac0b  59                   pop ecx
// 0071ac0c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
