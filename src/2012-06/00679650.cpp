// roc 2012-06 00679650  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00679650
//
// 00679650  51                   push ecx
// 00679651  6a10                 push 0x10
// 00679653  c744240400000000     mov dword ptr [esp + 4], 0
// 0067965b  e8ba8a3000           call 0x98211a
// 00679660  83c404               add esp, 4
// 00679663  85c0                 test eax, eax
// 00679665  7416                 je 0x67967d
// 00679667  c70088ddb800         mov dword ptr [eax], 0xb8dd88
// 0067966d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00679671  894808               mov dword ptr [eax + 8], ecx
// 00679674  8b542410             mov edx, dword ptr [esp + 0x10]
// 00679678  89500c               mov dword ptr [eax + 0xc], edx
// 0067967b  eb02                 jmp 0x67967f
// 0067967d  33c0                 xor eax, eax
// 0067967f  56                   push esi
// 00679680  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00679684  6a00                 push 0
// 00679686  8906                 mov dword ptr [esi], eax
// 00679688  e8878a3000           call 0x982114
// 0067968d  83c404               add esp, 4
// 00679690  8bc6                 mov eax, esi
// 00679692  5e                   pop esi
// 00679693  59                   pop ecx
// 00679694  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
