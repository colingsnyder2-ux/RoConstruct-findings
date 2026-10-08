// roc 2012-06 006d3620  unit: boost::io::Vbad_format_string::?$error_info_injector  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006d3620
//
// 006d3620  51                   push ecx
// 006d3621  6a10                 push 0x10
// 006d3623  c744240400000000     mov dword ptr [esp + 4], 0
// 006d362b  e8eaea2a00           call 0x98211a
// 006d3630  83c404               add esp, 4
// 006d3633  85c0                 test eax, eax
// 006d3635  7416                 je 0x6d364d
// 006d3637  c700608eb900         mov dword ptr [eax], 0xb98e60
// 006d363d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d3641  894808               mov dword ptr [eax + 8], ecx
// 006d3644  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d3648  89500c               mov dword ptr [eax + 0xc], edx
// 006d364b  eb02                 jmp 0x6d364f
// 006d364d  33c0                 xor eax, eax
// 006d364f  56                   push esi
// 006d3650  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006d3654  6a00                 push 0
// 006d3656  8906                 mov dword ptr [esi], eax
// 006d3658  e8b7ea2a00           call 0x982114
// 006d365d  83c404               add esp, 4
// 006d3660  8bc6                 mov eax, esi
// 006d3662  5e                   pop esi
// 006d3663  59                   pop ecx
// 006d3664  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
