// roc 2012-06 00679790  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00679790
//
// 00679790  51                   push ecx
// 00679791  6a10                 push 0x10
// 00679793  c744240400000000     mov dword ptr [esp + 4], 0
// 0067979b  e87a893000           call 0x98211a
// 006797a0  83c404               add esp, 4
// 006797a3  85c0                 test eax, eax
// 006797a5  7416                 je 0x6797bd
// 006797a7  c700d8ddb800         mov dword ptr [eax], 0xb8ddd8
// 006797ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006797b1  894808               mov dword ptr [eax + 8], ecx
// 006797b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006797b8  89500c               mov dword ptr [eax + 0xc], edx
// 006797bb  eb02                 jmp 0x6797bf
// 006797bd  33c0                 xor eax, eax
// 006797bf  56                   push esi
// 006797c0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006797c4  6a00                 push 0
// 006797c6  8906                 mov dword ptr [esi], eax
// 006797c8  e847893000           call 0x982114
// 006797cd  83c404               add esp, 4
// 006797d0  8bc6                 mov eax, esi
// 006797d2  5e                   pop esi
// 006797d3  59                   pop ecx
// 006797d4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
