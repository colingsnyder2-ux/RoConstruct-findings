// roc 2009-06 004c5460  unit: RBX::Network::Players::Plugin  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c5460
//
// 004c5460  51                   push ecx
// 004c5461  6a10                 push 0x10
// 004c5463  c744240400000000     mov dword ptr [esp + 4], 0
// 004c546b  e8c8352500           call 0x718a38
// 004c5470  83c404               add esp, 4
// 004c5473  85c0                 test eax, eax
// 004c5475  7416                 je 0x4c548d
// 004c5477  c7001c508c00         mov dword ptr [eax], 0x8c501c
// 004c547d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c5481  894808               mov dword ptr [eax + 8], ecx
// 004c5484  8b542410             mov edx, dword ptr [esp + 0x10]
// 004c5488  89500c               mov dword ptr [eax + 0xc], edx
// 004c548b  eb02                 jmp 0x4c548f
// 004c548d  33c0                 xor eax, eax
// 004c548f  56                   push esi
// 004c5490  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004c5494  6a00                 push 0
// 004c5496  8906                 mov dword ptr [esi], eax
// 004c5498  e895352500           call 0x718a32
// 004c549d  83c404               add esp, 4
// 004c54a0  8bc6                 mov eax, esi
// 004c54a2  5e                   pop esi
// 004c54a3  59                   pop ecx
// 004c54a4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
