// roc 2011-06 00635f30  unit: FLog::VFastLogSettingsItem::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00635f30
//
// 00635f30  51                   push ecx
// 00635f31  6a18                 push 0x18
// 00635f33  c744240400000000     mov dword ptr [esp + 4], 0
// 00635f3b  e81e411d00           call 0x80a05e
// 00635f40  83c404               add esp, 4
// 00635f43  85c0                 test eax, eax
// 00635f45  742c                 je 0x635f73
// 00635f47  c700b86ca900         mov dword ptr [eax], 0xa96cb8
// 00635f4d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00635f51  894808               mov dword ptr [eax + 8], ecx
// 00635f54  8b542410             mov edx, dword ptr [esp + 0x10]
// 00635f58  89500c               mov dword ptr [eax + 0xc], edx
// 00635f5b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00635f5f  894810               mov dword ptr [eax + 0x10], ecx
// 00635f62  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00635f66  8b542418             mov edx, dword ptr [esp + 0x18]
// 00635f6a  895014               mov dword ptr [eax + 0x14], edx
// 00635f6d  8901                 mov dword ptr [ecx], eax
// 00635f6f  8bc1                 mov eax, ecx
// 00635f71  59                   pop ecx
// 00635f72  c3                   ret 
// 00635f73  8b442408             mov eax, dword ptr [esp + 8]
// 00635f77  33c9                 xor ecx, ecx
// 00635f79  8908                 mov dword ptr [eax], ecx
// 00635f7b  59                   pop ecx
// 00635f7c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
