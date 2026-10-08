// roc 2009-06 005c9880  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c9880
//
// 005c9880  51                   push ecx
// 005c9881  6a18                 push 0x18
// 005c9883  c744240400000000     mov dword ptr [esp + 4], 0
// 005c988b  e8a8f11400           call 0x718a38
// 005c9890  83c404               add esp, 4
// 005c9893  85c0                 test eax, eax
// 005c9895  7424                 je 0x5c98bb
// 005c9897  c700d8428d00         mov dword ptr [eax], 0x8d42d8
// 005c989d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c98a1  894808               mov dword ptr [eax + 8], ecx
// 005c98a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005c98a8  89500c               mov dword ptr [eax + 0xc], edx
// 005c98ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005c98af  894810               mov dword ptr [eax + 0x10], ecx
// 005c98b2  8b542418             mov edx, dword ptr [esp + 0x18]
// 005c98b6  895014               mov dword ptr [eax + 0x14], edx
// 005c98b9  eb02                 jmp 0x5c98bd
// 005c98bb  33c0                 xor eax, eax
// 005c98bd  56                   push esi
// 005c98be  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005c98c2  6a00                 push 0
// 005c98c4  8906                 mov dword ptr [esi], eax
// 005c98c6  e867f11400           call 0x718a32
// 005c98cb  83c404               add esp, 4
// 005c98ce  8bc6                 mov eax, esi
// 005c98d0  5e                   pop esi
// 005c98d1  59                   pop ecx
// 005c98d2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
