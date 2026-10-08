// roc 2009-06 005c96e0  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c96e0
//
// 005c96e0  51                   push ecx
// 005c96e1  6a10                 push 0x10
// 005c96e3  c744240400000000     mov dword ptr [esp + 4], 0
// 005c96eb  e848f31400           call 0x718a38
// 005c96f0  83c404               add esp, 4
// 005c96f3  85c0                 test eax, eax
// 005c96f5  7416                 je 0x5c970d
// 005c96f7  c70074428d00         mov dword ptr [eax], 0x8d4274
// 005c96fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c9701  894808               mov dword ptr [eax + 8], ecx
// 005c9704  8b542410             mov edx, dword ptr [esp + 0x10]
// 005c9708  89500c               mov dword ptr [eax + 0xc], edx
// 005c970b  eb02                 jmp 0x5c970f
// 005c970d  33c0                 xor eax, eax
// 005c970f  56                   push esi
// 005c9710  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005c9714  6a00                 push 0
// 005c9716  8906                 mov dword ptr [esi], eax
// 005c9718  e815f31400           call 0x718a32
// 005c971d  83c404               add esp, 4
// 005c9720  8bc6                 mov eax, esi
// 005c9722  5e                   pop esi
// 005c9723  59                   pop ecx
// 005c9724  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
