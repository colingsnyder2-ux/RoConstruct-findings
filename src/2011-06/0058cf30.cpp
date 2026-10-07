// roc 2011-06 0058cf30  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058cf30
//
// 0058cf30  51                   push ecx
// 0058cf31  6a18                 push 0x18
// 0058cf33  c744240400000000     mov dword ptr [esp + 4], 0
// 0058cf3b  e81ed12700           call 0x80a05e
// 0058cf40  83c404               add esp, 4
// 0058cf43  85c0                 test eax, eax
// 0058cf45  742c                 je 0x58cf73
// 0058cf47  c700a48ca800         mov dword ptr [eax], 0xa88ca4
// 0058cf4d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058cf51  894808               mov dword ptr [eax + 8], ecx
// 0058cf54  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058cf58  89500c               mov dword ptr [eax + 0xc], edx
// 0058cf5b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0058cf5f  894810               mov dword ptr [eax + 0x10], ecx
// 0058cf62  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058cf66  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058cf6a  895014               mov dword ptr [eax + 0x14], edx
// 0058cf6d  8901                 mov dword ptr [ecx], eax
// 0058cf6f  8bc1                 mov eax, ecx
// 0058cf71  59                   pop ecx
// 0058cf72  c3                   ret 
// 0058cf73  8b442408             mov eax, dword ptr [esp + 8]
// 0058cf77  33c9                 xor ecx, ecx
// 0058cf79  8908                 mov dword ptr [eax], ecx
// 0058cf7b  59                   pop ecx
// 0058cf7c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
