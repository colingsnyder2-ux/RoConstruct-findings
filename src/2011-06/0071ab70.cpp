// roc 2011-06 0071ab70  unit: RBX::P8SelectionPointLasso::?$GetSetImpl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0071ab70
//
// 0071ab70  51                   push ecx
// 0071ab71  6a18                 push 0x18
// 0071ab73  c744240400000000     mov dword ptr [esp + 4], 0
// 0071ab7b  e8def40e00           call 0x80a05e
// 0071ab80  83c404               add esp, 4
// 0071ab83  85c0                 test eax, eax
// 0071ab85  742c                 je 0x71abb3
// 0071ab87  c700f00dab00         mov dword ptr [eax], 0xab0df0
// 0071ab8d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071ab91  894808               mov dword ptr [eax + 8], ecx
// 0071ab94  8b542410             mov edx, dword ptr [esp + 0x10]
// 0071ab98  89500c               mov dword ptr [eax + 0xc], edx
// 0071ab9b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0071ab9f  894810               mov dword ptr [eax + 0x10], ecx
// 0071aba2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0071aba6  8b542418             mov edx, dword ptr [esp + 0x18]
// 0071abaa  895014               mov dword ptr [eax + 0x14], edx
// 0071abad  8901                 mov dword ptr [ecx], eax
// 0071abaf  8bc1                 mov eax, ecx
// 0071abb1  59                   pop ecx
// 0071abb2  c3                   ret 
// 0071abb3  8b442408             mov eax, dword ptr [esp + 8]
// 0071abb7  33c9                 xor ecx, ecx
// 0071abb9  8908                 mov dword ptr [eax], ecx
// 0071abbb  59                   pop ecx
// 0071abbc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
