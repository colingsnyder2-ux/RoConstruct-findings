// roc 2012-06 00679830  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00679830
//
// 00679830  51                   push ecx
// 00679831  6a18                 push 0x18
// 00679833  c744240400000000     mov dword ptr [esp + 4], 0
// 0067983b  e8da883000           call 0x98211a
// 00679840  83c404               add esp, 4
// 00679843  85c0                 test eax, eax
// 00679845  7424                 je 0x67986b
// 00679847  c70000deb800         mov dword ptr [eax], 0xb8de00
// 0067984d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00679851  894808               mov dword ptr [eax + 8], ecx
// 00679854  8b542410             mov edx, dword ptr [esp + 0x10]
// 00679858  89500c               mov dword ptr [eax + 0xc], edx
// 0067985b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0067985f  894810               mov dword ptr [eax + 0x10], ecx
// 00679862  8b542418             mov edx, dword ptr [esp + 0x18]
// 00679866  895014               mov dword ptr [eax + 0x14], edx
// 00679869  eb02                 jmp 0x67986d
// 0067986b  33c0                 xor eax, eax
// 0067986d  56                   push esi
// 0067986e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00679872  6a00                 push 0
// 00679874  8906                 mov dword ptr [esi], eax
// 00679876  e899883000           call 0x982114
// 0067987b  83c404               add esp, 4
// 0067987e  8bc6                 mov eax, esi
// 00679880  5e                   pop esi
// 00679881  59                   pop ecx
// 00679882  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
