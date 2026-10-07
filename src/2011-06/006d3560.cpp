// roc 2011-06 006d3560  unit: RBX::VMotor::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d3560
//
// 006d3560  51                   push ecx
// 006d3561  6a18                 push 0x18
// 006d3563  c744240400000000     mov dword ptr [esp + 4], 0
// 006d356b  e8ee6a1300           call 0x80a05e
// 006d3570  83c404               add esp, 4
// 006d3573  85c0                 test eax, eax
// 006d3575  742c                 je 0x6d35a3
// 006d3577  c700e85faa00         mov dword ptr [eax], 0xaa5fe8
// 006d357d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d3581  894808               mov dword ptr [eax + 8], ecx
// 006d3584  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d3588  89500c               mov dword ptr [eax + 0xc], edx
// 006d358b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006d358f  894810               mov dword ptr [eax + 0x10], ecx
// 006d3592  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006d3596  8b542418             mov edx, dword ptr [esp + 0x18]
// 006d359a  895014               mov dword ptr [eax + 0x14], edx
// 006d359d  8901                 mov dword ptr [ecx], eax
// 006d359f  8bc1                 mov eax, ecx
// 006d35a1  59                   pop ecx
// 006d35a2  c3                   ret 
// 006d35a3  8b442408             mov eax, dword ptr [esp + 8]
// 006d35a7  33c9                 xor ecx, ecx
// 006d35a9  8908                 mov dword ptr [eax], ecx
// 006d35ab  59                   pop ecx
// 006d35ac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
