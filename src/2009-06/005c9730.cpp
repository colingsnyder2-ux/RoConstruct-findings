// roc 2009-06 005c9730  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c9730
//
// 005c9730  51                   push ecx
// 005c9731  6a10                 push 0x10
// 005c9733  c744240400000000     mov dword ptr [esp + 4], 0
// 005c973b  e8f8f21400           call 0x718a38
// 005c9740  83c404               add esp, 4
// 005c9743  85c0                 test eax, eax
// 005c9745  7416                 je 0x5c975d
// 005c9747  c70088428d00         mov dword ptr [eax], 0x8d4288
// 005c974d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c9751  894808               mov dword ptr [eax + 8], ecx
// 005c9754  8b542410             mov edx, dword ptr [esp + 0x10]
// 005c9758  89500c               mov dword ptr [eax + 0xc], edx
// 005c975b  eb02                 jmp 0x5c975f
// 005c975d  33c0                 xor eax, eax
// 005c975f  56                   push esi
// 005c9760  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005c9764  6a00                 push 0
// 005c9766  8906                 mov dword ptr [esi], eax
// 005c9768  e8c5f21400           call 0x718a32
// 005c976d  83c404               add esp, 4
// 005c9770  8bc6                 mov eax, esi
// 005c9772  5e                   pop esi
// 005c9773  59                   pop ecx
// 005c9774  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
