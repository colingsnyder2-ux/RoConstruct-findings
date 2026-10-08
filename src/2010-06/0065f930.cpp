// roc 2010-06 0065f930  unit: RBX::VPlayerMouse::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0065f930
//
// 0065f930  51                   push ecx
// 0065f931  6a18                 push 0x18
// 0065f933  c744240400000000     mov dword ptr [esp + 4], 0
// 0065f93b  e860801400           call 0x7a79a0
// 0065f940  83c404               add esp, 4
// 0065f943  85c0                 test eax, eax
// 0065f945  7424                 je 0x65f96b
// 0065f947  c7000ca7a300         mov dword ptr [eax], 0xa3a70c
// 0065f94d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065f951  894808               mov dword ptr [eax + 8], ecx
// 0065f954  8b542410             mov edx, dword ptr [esp + 0x10]
// 0065f958  89500c               mov dword ptr [eax + 0xc], edx
// 0065f95b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065f95f  894810               mov dword ptr [eax + 0x10], ecx
// 0065f962  8b542418             mov edx, dword ptr [esp + 0x18]
// 0065f966  895014               mov dword ptr [eax + 0x14], edx
// 0065f969  eb02                 jmp 0x65f96d
// 0065f96b  33c0                 xor eax, eax
// 0065f96d  56                   push esi
// 0065f96e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0065f972  6a00                 push 0
// 0065f974  8906                 mov dword ptr [esi], eax
// 0065f976  e81f801400           call 0x7a799a
// 0065f97b  83c404               add esp, 4
// 0065f97e  8bc6                 mov eax, esi
// 0065f980  5e                   pop esi
// 0065f981  59                   pop ecx
// 0065f982  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
