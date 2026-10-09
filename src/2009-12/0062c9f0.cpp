// roc 2009-12 0062c9f0  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062c9f0
//
// 0062c9f0  51                   push ecx
// 0062c9f1  6a10                 push 0x10
// 0062c9f3  c744240400000000     mov dword ptr [esp + 4], 0
// 0062c9fb  e8606e1c00           call 0x7f3860
// 0062ca00  83c404               add esp, 4
// 0062ca03  85c0                 test eax, eax
// 0062ca05  7416                 je 0x62ca1d
// 0062ca07  c700dcad9c00         mov dword ptr [eax], 0x9caddc
// 0062ca0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062ca11  894808               mov dword ptr [eax + 8], ecx
// 0062ca14  8b542410             mov edx, dword ptr [esp + 0x10]
// 0062ca18  89500c               mov dword ptr [eax + 0xc], edx
// 0062ca1b  eb02                 jmp 0x62ca1f
// 0062ca1d  33c0                 xor eax, eax
// 0062ca1f  56                   push esi
// 0062ca20  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062ca24  6a00                 push 0
// 0062ca26  8906                 mov dword ptr [esi], eax
// 0062ca28  e82d6e1c00           call 0x7f385a
// 0062ca2d  83c404               add esp, 4
// 0062ca30  8bc6                 mov eax, esi
// 0062ca32  5e                   pop esi
// 0062ca33  59                   pop ecx
// 0062ca34  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
