// roc 2009-12 0062cb80  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062cb80
//
// 0062cb80  51                   push ecx
// 0062cb81  6a10                 push 0x10
// 0062cb83  c744240400000000     mov dword ptr [esp + 4], 0
// 0062cb8b  e8d06c1c00           call 0x7f3860
// 0062cb90  83c404               add esp, 4
// 0062cb93  85c0                 test eax, eax
// 0062cb95  7416                 je 0x62cbad
// 0062cb97  c70054ae9c00         mov dword ptr [eax], 0x9cae54
// 0062cb9d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062cba1  894808               mov dword ptr [eax + 8], ecx
// 0062cba4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0062cba8  89500c               mov dword ptr [eax + 0xc], edx
// 0062cbab  eb02                 jmp 0x62cbaf
// 0062cbad  33c0                 xor eax, eax
// 0062cbaf  56                   push esi
// 0062cbb0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062cbb4  6a00                 push 0
// 0062cbb6  8906                 mov dword ptr [esi], eax
// 0062cbb8  e89d6c1c00           call 0x7f385a
// 0062cbbd  83c404               add esp, 4
// 0062cbc0  8bc6                 mov eax, esi
// 0062cbc2  5e                   pop esi
// 0062cbc3  59                   pop ecx
// 0062cbc4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
