// roc 2012-06 0071aa10  unit: RBX::P8BaseScript::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0071aa10
//
// 0071aa10  51                   push ecx
// 0071aa11  6a18                 push 0x18
// 0071aa13  c744240400000000     mov dword ptr [esp + 4], 0
// 0071aa1b  e8fa762600           call 0x98211a
// 0071aa20  83c404               add esp, 4
// 0071aa23  85c0                 test eax, eax
// 0071aa25  7424                 je 0x71aa4b
// 0071aa27  c7006433ba00         mov dword ptr [eax], 0xba3364
// 0071aa2d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071aa31  894808               mov dword ptr [eax + 8], ecx
// 0071aa34  8b542410             mov edx, dword ptr [esp + 0x10]
// 0071aa38  89500c               mov dword ptr [eax + 0xc], edx
// 0071aa3b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0071aa3f  894810               mov dword ptr [eax + 0x10], ecx
// 0071aa42  8b542418             mov edx, dword ptr [esp + 0x18]
// 0071aa46  895014               mov dword ptr [eax + 0x14], edx
// 0071aa49  eb02                 jmp 0x71aa4d
// 0071aa4b  33c0                 xor eax, eax
// 0071aa4d  56                   push esi
// 0071aa4e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0071aa52  6a00                 push 0
// 0071aa54  8906                 mov dword ptr [esi], eax
// 0071aa56  e8b9762600           call 0x982114
// 0071aa5b  83c404               add esp, 4
// 0071aa5e  8bc6                 mov eax, esi
// 0071aa60  5e                   pop esi
// 0071aa61  59                   pop ecx
// 0071aa62  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
