// roc 2011-06 0071ab20  unit: RBX::P8SelectionPointLasso::?$GetSetImpl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0071ab20
//
// 0071ab20  51                   push ecx
// 0071ab21  6a18                 push 0x18
// 0071ab23  c744240400000000     mov dword ptr [esp + 4], 0
// 0071ab2b  e82ef50e00           call 0x80a05e
// 0071ab30  83c404               add esp, 4
// 0071ab33  85c0                 test eax, eax
// 0071ab35  742c                 je 0x71ab63
// 0071ab37  c700dc0dab00         mov dword ptr [eax], 0xab0ddc
// 0071ab3d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071ab41  894808               mov dword ptr [eax + 8], ecx
// 0071ab44  8b542410             mov edx, dword ptr [esp + 0x10]
// 0071ab48  89500c               mov dword ptr [eax + 0xc], edx
// 0071ab4b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0071ab4f  894810               mov dword ptr [eax + 0x10], ecx
// 0071ab52  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0071ab56  8b542418             mov edx, dword ptr [esp + 0x18]
// 0071ab5a  895014               mov dword ptr [eax + 0x14], edx
// 0071ab5d  8901                 mov dword ptr [ecx], eax
// 0071ab5f  8bc1                 mov eax, ecx
// 0071ab61  59                   pop ecx
// 0071ab62  c3                   ret 
// 0071ab63  8b442408             mov eax, dword ptr [esp + 8]
// 0071ab67  33c9                 xor ecx, ecx
// 0071ab69  8908                 mov dword ptr [eax], ecx
// 0071ab6b  59                   pop ecx
// 0071ab6c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
