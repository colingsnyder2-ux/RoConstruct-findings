// roc 2009-06 005c98e0  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c98e0
//
// 005c98e0  51                   push ecx
// 005c98e1  6a18                 push 0x18
// 005c98e3  c744240400000000     mov dword ptr [esp + 4], 0
// 005c98eb  e848f11400           call 0x718a38
// 005c98f0  83c404               add esp, 4
// 005c98f3  85c0                 test eax, eax
// 005c98f5  7424                 je 0x5c991b
// 005c98f7  c700ec428d00         mov dword ptr [eax], 0x8d42ec
// 005c98fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c9901  894808               mov dword ptr [eax + 8], ecx
// 005c9904  8b542410             mov edx, dword ptr [esp + 0x10]
// 005c9908  89500c               mov dword ptr [eax + 0xc], edx
// 005c990b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005c990f  894810               mov dword ptr [eax + 0x10], ecx
// 005c9912  8b542418             mov edx, dword ptr [esp + 0x18]
// 005c9916  895014               mov dword ptr [eax + 0x14], edx
// 005c9919  eb02                 jmp 0x5c991d
// 005c991b  33c0                 xor eax, eax
// 005c991d  56                   push esi
// 005c991e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005c9922  6a00                 push 0
// 005c9924  8906                 mov dword ptr [esi], eax
// 005c9926  e807f11400           call 0x718a32
// 005c992b  83c404               add esp, 4
// 005c992e  8bc6                 mov eax, esi
// 005c9930  5e                   pop esi
// 005c9931  59                   pop ecx
// 005c9932  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
