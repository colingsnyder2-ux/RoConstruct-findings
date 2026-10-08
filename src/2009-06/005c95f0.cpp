// roc 2009-06 005c95f0  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c95f0
//
// 005c95f0  51                   push ecx
// 005c95f1  6a10                 push 0x10
// 005c95f3  c744240400000000     mov dword ptr [esp + 4], 0
// 005c95fb  e838f41400           call 0x718a38
// 005c9600  83c404               add esp, 4
// 005c9603  85c0                 test eax, eax
// 005c9605  7416                 je 0x5c961d
// 005c9607  c70038428d00         mov dword ptr [eax], 0x8d4238
// 005c960d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c9611  894808               mov dword ptr [eax + 8], ecx
// 005c9614  8b542410             mov edx, dword ptr [esp + 0x10]
// 005c9618  89500c               mov dword ptr [eax + 0xc], edx
// 005c961b  eb02                 jmp 0x5c961f
// 005c961d  33c0                 xor eax, eax
// 005c961f  56                   push esi
// 005c9620  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005c9624  6a00                 push 0
// 005c9626  8906                 mov dword ptr [esi], eax
// 005c9628  e805f41400           call 0x718a32
// 005c962d  83c404               add esp, 4
// 005c9630  8bc6                 mov eax, esi
// 005c9632  5e                   pop esi
// 005c9633  59                   pop ecx
// 005c9634  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
