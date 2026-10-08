// roc 2012-06 007303f0  unit: RBX::VGameBasicSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007303f0
//
// 007303f0  51                   push ecx
// 007303f1  6a18                 push 0x18
// 007303f3  c744240400000000     mov dword ptr [esp + 4], 0
// 007303fb  e81a1d2500           call 0x98211a
// 00730400  83c404               add esp, 4
// 00730403  85c0                 test eax, eax
// 00730405  7424                 je 0x73042b
// 00730407  c7002071ba00         mov dword ptr [eax], 0xba7120
// 0073040d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00730411  894808               mov dword ptr [eax + 8], ecx
// 00730414  8b542410             mov edx, dword ptr [esp + 0x10]
// 00730418  89500c               mov dword ptr [eax + 0xc], edx
// 0073041b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0073041f  894810               mov dword ptr [eax + 0x10], ecx
// 00730422  8b542418             mov edx, dword ptr [esp + 0x18]
// 00730426  895014               mov dword ptr [eax + 0x14], edx
// 00730429  eb02                 jmp 0x73042d
// 0073042b  33c0                 xor eax, eax
// 0073042d  56                   push esi
// 0073042e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00730432  6a00                 push 0
// 00730434  8906                 mov dword ptr [esi], eax
// 00730436  e8d91c2500           call 0x982114
// 0073043b  83c404               add esp, 4
// 0073043e  8bc6                 mov eax, esi
// 00730440  5e                   pop esi
// 00730441  59                   pop ecx
// 00730442  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
