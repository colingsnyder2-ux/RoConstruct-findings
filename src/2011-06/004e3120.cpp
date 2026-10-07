// roc 2011-06 004e3120  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004e3120
//
// 004e3120  51                   push ecx
// 004e3121  6a18                 push 0x18
// 004e3123  c744240400000000     mov dword ptr [esp + 4], 0
// 004e312b  e82e6f3200           call 0x80a05e
// 004e3130  83c404               add esp, 4
// 004e3133  85c0                 test eax, eax
// 004e3135  742c                 je 0x4e3163
// 004e3137  c700f09ea700         mov dword ptr [eax], 0xa79ef0
// 004e313d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004e3141  894808               mov dword ptr [eax + 8], ecx
// 004e3144  8b542410             mov edx, dword ptr [esp + 0x10]
// 004e3148  89500c               mov dword ptr [eax + 0xc], edx
// 004e314b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004e314f  894810               mov dword ptr [eax + 0x10], ecx
// 004e3152  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004e3156  8b542418             mov edx, dword ptr [esp + 0x18]
// 004e315a  895014               mov dword ptr [eax + 0x14], edx
// 004e315d  8901                 mov dword ptr [ecx], eax
// 004e315f  8bc1                 mov eax, ecx
// 004e3161  59                   pop ecx
// 004e3162  c3                   ret 
// 004e3163  8b442408             mov eax, dword ptr [esp + 8]
// 004e3167  33c9                 xor ecx, ecx
// 004e3169  8908                 mov dword ptr [eax], ecx
// 004e316b  59                   pop ecx
// 004e316c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
