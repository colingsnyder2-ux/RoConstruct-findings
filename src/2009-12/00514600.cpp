// roc 2009-12 00514600  unit: RBX::Network::Players::W4ChatOption::?$holder  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00514600
//
// 00514600  51                   push ecx
// 00514601  6a10                 push 0x10
// 00514603  c744240400000000     mov dword ptr [esp + 4], 0
// 0051460b  e850f22d00           call 0x7f3860
// 00514610  83c404               add esp, 4
// 00514613  85c0                 test eax, eax
// 00514615  7416                 je 0x51462d
// 00514617  c7004cb39b00         mov dword ptr [eax], 0x9bb34c
// 0051461d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00514621  894808               mov dword ptr [eax + 8], ecx
// 00514624  8b542410             mov edx, dword ptr [esp + 0x10]
// 00514628  89500c               mov dword ptr [eax + 0xc], edx
// 0051462b  eb02                 jmp 0x51462f
// 0051462d  33c0                 xor eax, eax
// 0051462f  56                   push esi
// 00514630  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00514634  6a00                 push 0
// 00514636  8906                 mov dword ptr [esi], eax
// 00514638  e81df22d00           call 0x7f385a
// 0051463d  83c404               add esp, 4
// 00514640  8bc6                 mov eax, esi
// 00514642  5e                   pop esi
// 00514643  59                   pop ecx
// 00514644  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
