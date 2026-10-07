// roc 2011-06 006d3510  unit: RBX::VMotor::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d3510
//
// 006d3510  51                   push ecx
// 006d3511  6a18                 push 0x18
// 006d3513  c744240400000000     mov dword ptr [esp + 4], 0
// 006d351b  e83e6b1300           call 0x80a05e
// 006d3520  83c404               add esp, 4
// 006d3523  85c0                 test eax, eax
// 006d3525  742c                 je 0x6d3553
// 006d3527  c700d45faa00         mov dword ptr [eax], 0xaa5fd4
// 006d352d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d3531  894808               mov dword ptr [eax + 8], ecx
// 006d3534  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d3538  89500c               mov dword ptr [eax + 0xc], edx
// 006d353b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006d353f  894810               mov dword ptr [eax + 0x10], ecx
// 006d3542  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006d3546  8b542418             mov edx, dword ptr [esp + 0x18]
// 006d354a  895014               mov dword ptr [eax + 0x14], edx
// 006d354d  8901                 mov dword ptr [ecx], eax
// 006d354f  8bc1                 mov eax, ecx
// 006d3551  59                   pop ecx
// 006d3552  c3                   ret 
// 006d3553  8b442408             mov eax, dword ptr [esp + 8]
// 006d3557  33c9                 xor ecx, ecx
// 006d3559  8908                 mov dword ptr [eax], ecx
// 006d355b  59                   pop ecx
// 006d355c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
