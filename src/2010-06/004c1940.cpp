// roc 2010-06 004c1940  unit: RBX::Network::Players::W4ChatOption::?$holder  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c1940
//
// 004c1940  51                   push ecx
// 004c1941  6a10                 push 0x10
// 004c1943  c744240400000000     mov dword ptr [esp + 4], 0
// 004c194b  e850602e00           call 0x7a79a0
// 004c1950  83c404               add esp, 4
// 004c1953  85c0                 test eax, eax
// 004c1955  7416                 je 0x4c196d
// 004c1957  c7001891a100         mov dword ptr [eax], 0xa19118
// 004c195d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c1961  894808               mov dword ptr [eax + 8], ecx
// 004c1964  8b542410             mov edx, dword ptr [esp + 0x10]
// 004c1968  89500c               mov dword ptr [eax + 0xc], edx
// 004c196b  eb02                 jmp 0x4c196f
// 004c196d  33c0                 xor eax, eax
// 004c196f  56                   push esi
// 004c1970  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004c1974  6a00                 push 0
// 004c1976  8906                 mov dword ptr [esi], eax
// 004c1978  e81d602e00           call 0x7a799a
// 004c197d  83c404               add esp, 4
// 004c1980  8bc6                 mov eax, esi
// 004c1982  5e                   pop esi
// 004c1983  59                   pop ecx
// 004c1984  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
