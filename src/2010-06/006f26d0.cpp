// roc 2010-06 006f26d0  unit: RBX::Network::P8Players::?$GetImpl  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f26d0
//
// 006f26d0  51                   push ecx
// 006f26d1  6a10                 push 0x10
// 006f26d3  c744240400000000     mov dword ptr [esp + 4], 0
// 006f26db  e8c0520b00           call 0x7a79a0
// 006f26e0  83c404               add esp, 4
// 006f26e3  85c0                 test eax, eax
// 006f26e5  7416                 je 0x6f26fd
// 006f26e7  c700cca4a400         mov dword ptr [eax], 0xa4a4cc
// 006f26ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f26f1  894808               mov dword ptr [eax + 8], ecx
// 006f26f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f26f8  89500c               mov dword ptr [eax + 0xc], edx
// 006f26fb  eb02                 jmp 0x6f26ff
// 006f26fd  33c0                 xor eax, eax
// 006f26ff  56                   push esi
// 006f2700  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f2704  6a00                 push 0
// 006f2706  8906                 mov dword ptr [esi], eax
// 006f2708  e88d520b00           call 0x7a799a
// 006f270d  83c404               add esp, 4
// 006f2710  8bc6                 mov eax, esi
// 006f2712  5e                   pop esi
// 006f2713  59                   pop ecx
// 006f2714  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
