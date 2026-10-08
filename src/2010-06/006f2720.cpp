// roc 2010-06 006f2720  unit: RBX::Network::P8Players::?$GetImpl  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f2720
//
// 006f2720  51                   push ecx
// 006f2721  6a10                 push 0x10
// 006f2723  c744240400000000     mov dword ptr [esp + 4], 0
// 006f272b  e870520b00           call 0x7a79a0
// 006f2730  83c404               add esp, 4
// 006f2733  85c0                 test eax, eax
// 006f2735  7416                 je 0x6f274d
// 006f2737  c700e4a4a400         mov dword ptr [eax], 0xa4a4e4
// 006f273d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f2741  894808               mov dword ptr [eax + 8], ecx
// 006f2744  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f2748  89500c               mov dword ptr [eax + 0xc], edx
// 006f274b  eb02                 jmp 0x6f274f
// 006f274d  33c0                 xor eax, eax
// 006f274f  56                   push esi
// 006f2750  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f2754  6a00                 push 0
// 006f2756  8906                 mov dword ptr [esi], eax
// 006f2758  e83d520b00           call 0x7a799a
// 006f275d  83c404               add esp, 4
// 006f2760  8bc6                 mov eax, esi
// 006f2762  5e                   pop esi
// 006f2763  59                   pop ecx
// 006f2764  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
