// roc 2010-06 006f2770  unit: RBX::Network::P8Players::?$GetImpl  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f2770
//
// 006f2770  51                   push ecx
// 006f2771  6a10                 push 0x10
// 006f2773  c744240400000000     mov dword ptr [esp + 4], 0
// 006f277b  e820520b00           call 0x7a79a0
// 006f2780  83c404               add esp, 4
// 006f2783  85c0                 test eax, eax
// 006f2785  7416                 je 0x6f279d
// 006f2787  c700fca4a400         mov dword ptr [eax], 0xa4a4fc
// 006f278d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f2791  894808               mov dword ptr [eax + 8], ecx
// 006f2794  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f2798  89500c               mov dword ptr [eax + 0xc], edx
// 006f279b  eb02                 jmp 0x6f279f
// 006f279d  33c0                 xor eax, eax
// 006f279f  56                   push esi
// 006f27a0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f27a4  6a00                 push 0
// 006f27a6  8906                 mov dword ptr [esi], eax
// 006f27a8  e8ed510b00           call 0x7a799a
// 006f27ad  83c404               add esp, 4
// 006f27b0  8bc6                 mov eax, esi
// 006f27b2  5e                   pop esi
// 006f27b3  59                   pop ecx
// 006f27b4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
