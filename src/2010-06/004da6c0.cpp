// roc 2010-06 004da6c0  unit: RBX::Network::Server  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004da6c0
//
// 004da6c0  51                   push ecx
// 004da6c1  6a10                 push 0x10
// 004da6c3  c744240400000000     mov dword ptr [esp + 4], 0
// 004da6cb  e8d0d22c00           call 0x7a79a0
// 004da6d0  83c404               add esp, 4
// 004da6d3  85c0                 test eax, eax
// 004da6d5  7416                 je 0x4da6ed
// 004da6d7  c700c0a6a100         mov dword ptr [eax], 0xa1a6c0
// 004da6dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004da6e1  894808               mov dword ptr [eax + 8], ecx
// 004da6e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 004da6e8  89500c               mov dword ptr [eax + 0xc], edx
// 004da6eb  eb02                 jmp 0x4da6ef
// 004da6ed  33c0                 xor eax, eax
// 004da6ef  56                   push esi
// 004da6f0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004da6f4  6a00                 push 0
// 004da6f6  8906                 mov dword ptr [esi], eax
// 004da6f8  e89dd22c00           call 0x7a799a
// 004da6fd  83c404               add esp, 4
// 004da700  8bc6                 mov eax, esi
// 004da702  5e                   pop esi
// 004da703  59                   pop ecx
// 004da704  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
