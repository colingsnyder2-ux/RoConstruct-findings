// roc 2009-06 004c5510  unit: RBX::Network::Players::Plugin  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c5510
//
// 004c5510  51                   push ecx
// 004c5511  6a10                 push 0x10
// 004c5513  c744240400000000     mov dword ptr [esp + 4], 0
// 004c551b  e818352500           call 0x718a38
// 004c5520  83c404               add esp, 4
// 004c5523  85c0                 test eax, eax
// 004c5525  7416                 je 0x4c553d
// 004c5527  c70054508c00         mov dword ptr [eax], 0x8c5054
// 004c552d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c5531  894808               mov dword ptr [eax + 8], ecx
// 004c5534  8b542410             mov edx, dword ptr [esp + 0x10]
// 004c5538  89500c               mov dword ptr [eax + 0xc], edx
// 004c553b  eb02                 jmp 0x4c553f
// 004c553d  33c0                 xor eax, eax
// 004c553f  56                   push esi
// 004c5540  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004c5544  6a00                 push 0
// 004c5546  8906                 mov dword ptr [esi], eax
// 004c5548  e8e5342500           call 0x718a32
// 004c554d  83c404               add esp, 4
// 004c5550  8bc6                 mov eax, esi
// 004c5552  5e                   pop esi
// 004c5553  59                   pop ecx
// 004c5554  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
