// roc 2011-06 006a86a0  unit: RBX::VGuiTextButton::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a86a0
//
// 006a86a0  51                   push ecx
// 006a86a1  6a18                 push 0x18
// 006a86a3  c744240400000000     mov dword ptr [esp + 4], 0
// 006a86ab  e8ae191600           call 0x80a05e
// 006a86b0  83c404               add esp, 4
// 006a86b3  85c0                 test eax, eax
// 006a86b5  742c                 je 0x6a86e3
// 006a86b7  c7009c31aa00         mov dword ptr [eax], 0xaa319c
// 006a86bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a86c1  894808               mov dword ptr [eax + 8], ecx
// 006a86c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006a86c8  89500c               mov dword ptr [eax + 0xc], edx
// 006a86cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006a86cf  894810               mov dword ptr [eax + 0x10], ecx
// 006a86d2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a86d6  8b542418             mov edx, dword ptr [esp + 0x18]
// 006a86da  895014               mov dword ptr [eax + 0x14], edx
// 006a86dd  8901                 mov dword ptr [ecx], eax
// 006a86df  8bc1                 mov eax, ecx
// 006a86e1  59                   pop ecx
// 006a86e2  c3                   ret 
// 006a86e3  8b442408             mov eax, dword ptr [esp + 8]
// 006a86e7  33c9                 xor ecx, ecx
// 006a86e9  8908                 mov dword ptr [eax], ecx
// 006a86eb  59                   pop ecx
// 006a86ec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
