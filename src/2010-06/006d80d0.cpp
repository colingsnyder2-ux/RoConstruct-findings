// roc 2010-06 006d80d0  unit: RBX::VSkateboardPlatform::?$EventDesc  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d80d0
//
// 006d80d0  51                   push ecx
// 006d80d1  6a10                 push 0x10
// 006d80d3  c744240400000000     mov dword ptr [esp + 4], 0
// 006d80db  e8c0f80c00           call 0x7a79a0
// 006d80e0  83c404               add esp, 4
// 006d80e3  85c0                 test eax, eax
// 006d80e5  7416                 je 0x6d80fd
// 006d80e7  c700d460a400         mov dword ptr [eax], 0xa460d4
// 006d80ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d80f1  894808               mov dword ptr [eax + 8], ecx
// 006d80f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d80f8  89500c               mov dword ptr [eax + 0xc], edx
// 006d80fb  eb02                 jmp 0x6d80ff
// 006d80fd  33c0                 xor eax, eax
// 006d80ff  56                   push esi
// 006d8100  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006d8104  6a00                 push 0
// 006d8106  8906                 mov dword ptr [esi], eax
// 006d8108  e88df80c00           call 0x7a799a
// 006d810d  83c404               add esp, 4
// 006d8110  8bc6                 mov eax, esi
// 006d8112  5e                   pop esi
// 006d8113  59                   pop ecx
// 006d8114  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
