// roc 2011-06 0058ce90  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058ce90
//
// 0058ce90  51                   push ecx
// 0058ce91  6a18                 push 0x18
// 0058ce93  c744240400000000     mov dword ptr [esp + 4], 0
// 0058ce9b  e8bed12700           call 0x80a05e
// 0058cea0  83c404               add esp, 4
// 0058cea3  85c0                 test eax, eax
// 0058cea5  742c                 je 0x58ced3
// 0058cea7  c7007c8ca800         mov dword ptr [eax], 0xa88c7c
// 0058cead  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058ceb1  894808               mov dword ptr [eax + 8], ecx
// 0058ceb4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058ceb8  89500c               mov dword ptr [eax + 0xc], edx
// 0058cebb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0058cebf  894810               mov dword ptr [eax + 0x10], ecx
// 0058cec2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058cec6  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058ceca  895014               mov dword ptr [eax + 0x14], edx
// 0058cecd  8901                 mov dword ptr [ecx], eax
// 0058cecf  8bc1                 mov eax, ecx
// 0058ced1  59                   pop ecx
// 0058ced2  c3                   ret 
// 0058ced3  8b442408             mov eax, dword ptr [esp + 8]
// 0058ced7  33c9                 xor ecx, ecx
// 0058ced9  8908                 mov dword ptr [eax], ecx
// 0058cedb  59                   pop ecx
// 0058cedc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
