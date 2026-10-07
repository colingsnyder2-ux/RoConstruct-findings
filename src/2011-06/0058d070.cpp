// roc 2011-06 0058d070  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058d070
//
// 0058d070  51                   push ecx
// 0058d071  6a18                 push 0x18
// 0058d073  c744240400000000     mov dword ptr [esp + 4], 0
// 0058d07b  e8decf2700           call 0x80a05e
// 0058d080  83c404               add esp, 4
// 0058d083  85c0                 test eax, eax
// 0058d085  742c                 je 0x58d0b3
// 0058d087  c700f48ca800         mov dword ptr [eax], 0xa88cf4
// 0058d08d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058d091  894808               mov dword ptr [eax + 8], ecx
// 0058d094  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058d098  89500c               mov dword ptr [eax + 0xc], edx
// 0058d09b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0058d09f  894810               mov dword ptr [eax + 0x10], ecx
// 0058d0a2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058d0a6  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058d0aa  895014               mov dword ptr [eax + 0x14], edx
// 0058d0ad  8901                 mov dword ptr [ecx], eax
// 0058d0af  8bc1                 mov eax, ecx
// 0058d0b1  59                   pop ecx
// 0058d0b2  c3                   ret 
// 0058d0b3  8b442408             mov eax, dword ptr [esp + 8]
// 0058d0b7  33c9                 xor ecx, ecx
// 0058d0b9  8908                 mov dword ptr [eax], ecx
// 0058d0bb  59                   pop ecx
// 0058d0bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
