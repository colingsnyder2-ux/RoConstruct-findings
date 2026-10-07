// roc 2011-06 004e3210  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004e3210
//
// 004e3210  51                   push ecx
// 004e3211  6a18                 push 0x18
// 004e3213  c744240400000000     mov dword ptr [esp + 4], 0
// 004e321b  e83e6e3200           call 0x80a05e
// 004e3220  83c404               add esp, 4
// 004e3223  85c0                 test eax, eax
// 004e3225  742c                 je 0x4e3253
// 004e3227  c7002c9fa700         mov dword ptr [eax], 0xa79f2c
// 004e322d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004e3231  894808               mov dword ptr [eax + 8], ecx
// 004e3234  8b542410             mov edx, dword ptr [esp + 0x10]
// 004e3238  89500c               mov dword ptr [eax + 0xc], edx
// 004e323b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004e323f  894810               mov dword ptr [eax + 0x10], ecx
// 004e3242  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004e3246  8b542418             mov edx, dword ptr [esp + 0x18]
// 004e324a  895014               mov dword ptr [eax + 0x14], edx
// 004e324d  8901                 mov dword ptr [ecx], eax
// 004e324f  8bc1                 mov eax, ecx
// 004e3251  59                   pop ecx
// 004e3252  c3                   ret 
// 004e3253  8b442408             mov eax, dword ptr [esp + 8]
// 004e3257  33c9                 xor ecx, ecx
// 004e3259  8908                 mov dword ptr [eax], ecx
// 004e325b  59                   pop ecx
// 004e325c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
