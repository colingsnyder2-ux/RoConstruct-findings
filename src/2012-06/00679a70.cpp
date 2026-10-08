// roc 2012-06 00679a70  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00679a70
//
// 00679a70  51                   push ecx
// 00679a71  6a18                 push 0x18
// 00679a73  c744240400000000     mov dword ptr [esp + 4], 0
// 00679a7b  e89a863000           call 0x98211a
// 00679a80  83c404               add esp, 4
// 00679a83  85c0                 test eax, eax
// 00679a85  7424                 je 0x679aab
// 00679a87  c70078deb800         mov dword ptr [eax], 0xb8de78
// 00679a8d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00679a91  894808               mov dword ptr [eax + 8], ecx
// 00679a94  8b542410             mov edx, dword ptr [esp + 0x10]
// 00679a98  89500c               mov dword ptr [eax + 0xc], edx
// 00679a9b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00679a9f  894810               mov dword ptr [eax + 0x10], ecx
// 00679aa2  8b542418             mov edx, dword ptr [esp + 0x18]
// 00679aa6  895014               mov dword ptr [eax + 0x14], edx
// 00679aa9  eb02                 jmp 0x679aad
// 00679aab  33c0                 xor eax, eax
// 00679aad  56                   push esi
// 00679aae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00679ab2  6a00                 push 0
// 00679ab4  8906                 mov dword ptr [esi], eax
// 00679ab6  e859863000           call 0x982114
// 00679abb  83c404               add esp, 4
// 00679abe  8bc6                 mov eax, esi
// 00679ac0  5e                   pop esi
// 00679ac1  59                   pop ecx
// 00679ac2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
