// roc 2012-06 006796a0  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006796a0
//
// 006796a0  51                   push ecx
// 006796a1  6a10                 push 0x10
// 006796a3  c744240400000000     mov dword ptr [esp + 4], 0
// 006796ab  e86a8a3000           call 0x98211a
// 006796b0  83c404               add esp, 4
// 006796b3  85c0                 test eax, eax
// 006796b5  7416                 je 0x6796cd
// 006796b7  c7009cddb800         mov dword ptr [eax], 0xb8dd9c
// 006796bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006796c1  894808               mov dword ptr [eax + 8], ecx
// 006796c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006796c8  89500c               mov dword ptr [eax + 0xc], edx
// 006796cb  eb02                 jmp 0x6796cf
// 006796cd  33c0                 xor eax, eax
// 006796cf  56                   push esi
// 006796d0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006796d4  6a00                 push 0
// 006796d6  8906                 mov dword ptr [esi], eax
// 006796d8  e8378a3000           call 0x982114
// 006796dd  83c404               add esp, 4
// 006796e0  8bc6                 mov eax, esi
// 006796e2  5e                   pop esi
// 006796e3  59                   pop ecx
// 006796e4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
