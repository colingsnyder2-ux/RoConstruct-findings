// roc 2011-06 004e3170  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004e3170
//
// 004e3170  51                   push ecx
// 004e3171  6a18                 push 0x18
// 004e3173  c744240400000000     mov dword ptr [esp + 4], 0
// 004e317b  e8de6e3200           call 0x80a05e
// 004e3180  83c404               add esp, 4
// 004e3183  85c0                 test eax, eax
// 004e3185  742c                 je 0x4e31b3
// 004e3187  c700049fa700         mov dword ptr [eax], 0xa79f04
// 004e318d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004e3191  894808               mov dword ptr [eax + 8], ecx
// 004e3194  8b542410             mov edx, dword ptr [esp + 0x10]
// 004e3198  89500c               mov dword ptr [eax + 0xc], edx
// 004e319b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004e319f  894810               mov dword ptr [eax + 0x10], ecx
// 004e31a2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004e31a6  8b542418             mov edx, dword ptr [esp + 0x18]
// 004e31aa  895014               mov dword ptr [eax + 0x14], edx
// 004e31ad  8901                 mov dword ptr [ecx], eax
// 004e31af  8bc1                 mov eax, ecx
// 004e31b1  59                   pop ecx
// 004e31b2  c3                   ret 
// 004e31b3  8b442408             mov eax, dword ptr [esp + 8]
// 004e31b7  33c9                 xor ecx, ecx
// 004e31b9  8908                 mov dword ptr [eax], ecx
// 004e31bb  59                   pop ecx
// 004e31bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
