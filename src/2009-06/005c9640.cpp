// roc 2009-06 005c9640  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c9640
//
// 005c9640  51                   push ecx
// 005c9641  6a10                 push 0x10
// 005c9643  c744240400000000     mov dword ptr [esp + 4], 0
// 005c964b  e8e8f31400           call 0x718a38
// 005c9650  83c404               add esp, 4
// 005c9653  85c0                 test eax, eax
// 005c9655  7416                 je 0x5c966d
// 005c9657  c7004c428d00         mov dword ptr [eax], 0x8d424c
// 005c965d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c9661  894808               mov dword ptr [eax + 8], ecx
// 005c9664  8b542410             mov edx, dword ptr [esp + 0x10]
// 005c9668  89500c               mov dword ptr [eax + 0xc], edx
// 005c966b  eb02                 jmp 0x5c966f
// 005c966d  33c0                 xor eax, eax
// 005c966f  56                   push esi
// 005c9670  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005c9674  6a00                 push 0
// 005c9676  8906                 mov dword ptr [esi], eax
// 005c9678  e8b5f31400           call 0x718a32
// 005c967d  83c404               add esp, 4
// 005c9680  8bc6                 mov eax, esi
// 005c9682  5e                   pop esi
// 005c9683  59                   pop ecx
// 005c9684  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
