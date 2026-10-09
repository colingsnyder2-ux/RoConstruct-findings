// roc 2009-12 0062cb30  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062cb30
//
// 0062cb30  51                   push ecx
// 0062cb31  6a10                 push 0x10
// 0062cb33  c744240400000000     mov dword ptr [esp + 4], 0
// 0062cb3b  e8206d1c00           call 0x7f3860
// 0062cb40  83c404               add esp, 4
// 0062cb43  85c0                 test eax, eax
// 0062cb45  7416                 je 0x62cb5d
// 0062cb47  c7003cae9c00         mov dword ptr [eax], 0x9cae3c
// 0062cb4d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062cb51  894808               mov dword ptr [eax + 8], ecx
// 0062cb54  8b542410             mov edx, dword ptr [esp + 0x10]
// 0062cb58  89500c               mov dword ptr [eax + 0xc], edx
// 0062cb5b  eb02                 jmp 0x62cb5f
// 0062cb5d  33c0                 xor eax, eax
// 0062cb5f  56                   push esi
// 0062cb60  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062cb64  6a00                 push 0
// 0062cb66  8906                 mov dword ptr [esi], eax
// 0062cb68  e8ed6c1c00           call 0x7f385a
// 0062cb6d  83c404               add esp, 4
// 0062cb70  8bc6                 mov eax, esi
// 0062cb72  5e                   pop esi
// 0062cb73  59                   pop ecx
// 0062cb74  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
