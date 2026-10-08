// roc 2009-06 005c9690  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c9690
//
// 005c9690  51                   push ecx
// 005c9691  6a10                 push 0x10
// 005c9693  c744240400000000     mov dword ptr [esp + 4], 0
// 005c969b  e898f31400           call 0x718a38
// 005c96a0  83c404               add esp, 4
// 005c96a3  85c0                 test eax, eax
// 005c96a5  7416                 je 0x5c96bd
// 005c96a7  c70060428d00         mov dword ptr [eax], 0x8d4260
// 005c96ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c96b1  894808               mov dword ptr [eax + 8], ecx
// 005c96b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005c96b8  89500c               mov dword ptr [eax + 0xc], edx
// 005c96bb  eb02                 jmp 0x5c96bf
// 005c96bd  33c0                 xor eax, eax
// 005c96bf  56                   push esi
// 005c96c0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005c96c4  6a00                 push 0
// 005c96c6  8906                 mov dword ptr [esi], eax
// 005c96c8  e865f31400           call 0x718a32
// 005c96cd  83c404               add esp, 4
// 005c96d0  8bc6                 mov eax, esi
// 005c96d2  5e                   pop esi
// 005c96d3  59                   pop ecx
// 005c96d4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
