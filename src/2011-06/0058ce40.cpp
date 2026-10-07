// roc 2011-06 0058ce40  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058ce40
//
// 0058ce40  51                   push ecx
// 0058ce41  6a18                 push 0x18
// 0058ce43  c744240400000000     mov dword ptr [esp + 4], 0
// 0058ce4b  e80ed22700           call 0x80a05e
// 0058ce50  83c404               add esp, 4
// 0058ce53  85c0                 test eax, eax
// 0058ce55  742c                 je 0x58ce83
// 0058ce57  c700688ca800         mov dword ptr [eax], 0xa88c68
// 0058ce5d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058ce61  894808               mov dword ptr [eax + 8], ecx
// 0058ce64  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058ce68  89500c               mov dword ptr [eax + 0xc], edx
// 0058ce6b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0058ce6f  894810               mov dword ptr [eax + 0x10], ecx
// 0058ce72  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058ce76  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058ce7a  895014               mov dword ptr [eax + 0x14], edx
// 0058ce7d  8901                 mov dword ptr [ecx], eax
// 0058ce7f  8bc1                 mov eax, ecx
// 0058ce81  59                   pop ecx
// 0058ce82  c3                   ret 
// 0058ce83  8b442408             mov eax, dword ptr [esp + 8]
// 0058ce87  33c9                 xor ecx, ecx
// 0058ce89  8908                 mov dword ptr [eax], ecx
// 0058ce8b  59                   pop ecx
// 0058ce8c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
