// roc 2012-06 006797e0  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006797e0
//
// 006797e0  51                   push ecx
// 006797e1  6a10                 push 0x10
// 006797e3  c744240400000000     mov dword ptr [esp + 4], 0
// 006797eb  e82a893000           call 0x98211a
// 006797f0  83c404               add esp, 4
// 006797f3  85c0                 test eax, eax
// 006797f5  7416                 je 0x67980d
// 006797f7  c700ecddb800         mov dword ptr [eax], 0xb8ddec
// 006797fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00679801  894808               mov dword ptr [eax + 8], ecx
// 00679804  8b542410             mov edx, dword ptr [esp + 0x10]
// 00679808  89500c               mov dword ptr [eax + 0xc], edx
// 0067980b  eb02                 jmp 0x67980f
// 0067980d  33c0                 xor eax, eax
// 0067980f  56                   push esi
// 00679810  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00679814  6a00                 push 0
// 00679816  8906                 mov dword ptr [esi], eax
// 00679818  e8f7883000           call 0x982114
// 0067981d  83c404               add esp, 4
// 00679820  8bc6                 mov eax, esi
// 00679822  5e                   pop esi
// 00679823  59                   pop ecx
// 00679824  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
