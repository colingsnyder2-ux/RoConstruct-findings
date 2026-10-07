// roc 2011-06 006d3420  unit: RBX::VMotor::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d3420
//
// 006d3420  51                   push ecx
// 006d3421  6a18                 push 0x18
// 006d3423  c744240400000000     mov dword ptr [esp + 4], 0
// 006d342b  e82e6c1300           call 0x80a05e
// 006d3430  83c404               add esp, 4
// 006d3433  85c0                 test eax, eax
// 006d3435  742c                 je 0x6d3463
// 006d3437  c700985faa00         mov dword ptr [eax], 0xaa5f98
// 006d343d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d3441  894808               mov dword ptr [eax + 8], ecx
// 006d3444  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d3448  89500c               mov dword ptr [eax + 0xc], edx
// 006d344b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006d344f  894810               mov dword ptr [eax + 0x10], ecx
// 006d3452  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006d3456  8b542418             mov edx, dword ptr [esp + 0x18]
// 006d345a  895014               mov dword ptr [eax + 0x14], edx
// 006d345d  8901                 mov dword ptr [ecx], eax
// 006d345f  8bc1                 mov eax, ecx
// 006d3461  59                   pop ecx
// 006d3462  c3                   ret 
// 006d3463  8b442408             mov eax, dword ptr [esp + 8]
// 006d3467  33c9                 xor ecx, ecx
// 006d3469  8908                 mov dword ptr [eax], ecx
// 006d346b  59                   pop ecx
// 006d346c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
