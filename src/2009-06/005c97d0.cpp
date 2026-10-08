// roc 2009-06 005c97d0  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c97d0
//
// 005c97d0  51                   push ecx
// 005c97d1  6a10                 push 0x10
// 005c97d3  c744240400000000     mov dword ptr [esp + 4], 0
// 005c97db  e858f21400           call 0x718a38
// 005c97e0  83c404               add esp, 4
// 005c97e3  85c0                 test eax, eax
// 005c97e5  7416                 je 0x5c97fd
// 005c97e7  c700b0428d00         mov dword ptr [eax], 0x8d42b0
// 005c97ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c97f1  894808               mov dword ptr [eax + 8], ecx
// 005c97f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005c97f8  89500c               mov dword ptr [eax + 0xc], edx
// 005c97fb  eb02                 jmp 0x5c97ff
// 005c97fd  33c0                 xor eax, eax
// 005c97ff  56                   push esi
// 005c9800  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005c9804  6a00                 push 0
// 005c9806  8906                 mov dword ptr [esi], eax
// 005c9808  e825f21400           call 0x718a32
// 005c980d  83c404               add esp, 4
// 005c9810  8bc6                 mov eax, esi
// 005c9812  5e                   pop esi
// 005c9813  59                   pop ecx
// 005c9814  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
