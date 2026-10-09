// roc 2009-12 00514550  unit: RBX::Network::Players::W4ChatOption::?$holder  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00514550
//
// 00514550  51                   push ecx
// 00514551  6a10                 push 0x10
// 00514553  c744240400000000     mov dword ptr [esp + 4], 0
// 0051455b  e800f32d00           call 0x7f3860
// 00514560  83c404               add esp, 4
// 00514563  85c0                 test eax, eax
// 00514565  7416                 je 0x51457d
// 00514567  c7000cb39b00         mov dword ptr [eax], 0x9bb30c
// 0051456d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00514571  894808               mov dword ptr [eax + 8], ecx
// 00514574  8b542410             mov edx, dword ptr [esp + 0x10]
// 00514578  89500c               mov dword ptr [eax + 0xc], edx
// 0051457b  eb02                 jmp 0x51457f
// 0051457d  33c0                 xor eax, eax
// 0051457f  56                   push esi
// 00514580  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00514584  6a00                 push 0
// 00514586  8906                 mov dword ptr [esi], eax
// 00514588  e8cdf22d00           call 0x7f385a
// 0051458d  83c404               add esp, 4
// 00514590  8bc6                 mov eax, esi
// 00514592  5e                   pop esi
// 00514593  59                   pop ecx
// 00514594  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
