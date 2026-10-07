// roc 2011-06 006d3470  unit: RBX::VMotor::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d3470
//
// 006d3470  51                   push ecx
// 006d3471  6a18                 push 0x18
// 006d3473  c744240400000000     mov dword ptr [esp + 4], 0
// 006d347b  e8de6b1300           call 0x80a05e
// 006d3480  83c404               add esp, 4
// 006d3483  85c0                 test eax, eax
// 006d3485  742c                 je 0x6d34b3
// 006d3487  c700ac5faa00         mov dword ptr [eax], 0xaa5fac
// 006d348d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d3491  894808               mov dword ptr [eax + 8], ecx
// 006d3494  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d3498  89500c               mov dword ptr [eax + 0xc], edx
// 006d349b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006d349f  894810               mov dword ptr [eax + 0x10], ecx
// 006d34a2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006d34a6  8b542418             mov edx, dword ptr [esp + 0x18]
// 006d34aa  895014               mov dword ptr [eax + 0x14], edx
// 006d34ad  8901                 mov dword ptr [ecx], eax
// 006d34af  8bc1                 mov eax, ecx
// 006d34b1  59                   pop ecx
// 006d34b2  c3                   ret 
// 006d34b3  8b442408             mov eax, dword ptr [esp + 8]
// 006d34b7  33c9                 xor ecx, ecx
// 006d34b9  8908                 mov dword ptr [eax], ecx
// 006d34bb  59                   pop ecx
// 006d34bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
