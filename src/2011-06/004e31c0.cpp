// roc 2011-06 004e31c0  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004e31c0
//
// 004e31c0  51                   push ecx
// 004e31c1  6a18                 push 0x18
// 004e31c3  c744240400000000     mov dword ptr [esp + 4], 0
// 004e31cb  e88e6e3200           call 0x80a05e
// 004e31d0  83c404               add esp, 4
// 004e31d3  85c0                 test eax, eax
// 004e31d5  742c                 je 0x4e3203
// 004e31d7  c700189fa700         mov dword ptr [eax], 0xa79f18
// 004e31dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004e31e1  894808               mov dword ptr [eax + 8], ecx
// 004e31e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 004e31e8  89500c               mov dword ptr [eax + 0xc], edx
// 004e31eb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004e31ef  894810               mov dword ptr [eax + 0x10], ecx
// 004e31f2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004e31f6  8b542418             mov edx, dword ptr [esp + 0x18]
// 004e31fa  895014               mov dword ptr [eax + 0x14], edx
// 004e31fd  8901                 mov dword ptr [ecx], eax
// 004e31ff  8bc1                 mov eax, ecx
// 004e3201  59                   pop ecx
// 004e3202  c3                   ret 
// 004e3203  8b442408             mov eax, dword ptr [esp + 8]
// 004e3207  33c9                 xor ecx, ecx
// 004e3209  8908                 mov dword ptr [eax], ecx
// 004e320b  59                   pop ecx
// 004e320c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
