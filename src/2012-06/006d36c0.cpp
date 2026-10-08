// roc 2012-06 006d36c0  unit: boost::io::Vbad_format_string::?$error_info_injector  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006d36c0
//
// 006d36c0  51                   push ecx
// 006d36c1  6a10                 push 0x10
// 006d36c3  c744240400000000     mov dword ptr [esp + 4], 0
// 006d36cb  e84aea2a00           call 0x98211a
// 006d36d0  83c404               add esp, 4
// 006d36d3  85c0                 test eax, eax
// 006d36d5  7416                 je 0x6d36ed
// 006d36d7  c700888eb900         mov dword ptr [eax], 0xb98e88
// 006d36dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d36e1  894808               mov dword ptr [eax + 8], ecx
// 006d36e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d36e8  89500c               mov dword ptr [eax + 0xc], edx
// 006d36eb  eb02                 jmp 0x6d36ef
// 006d36ed  33c0                 xor eax, eax
// 006d36ef  56                   push esi
// 006d36f0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006d36f4  6a00                 push 0
// 006d36f6  8906                 mov dword ptr [esi], eax
// 006d36f8  e817ea2a00           call 0x982114
// 006d36fd  83c404               add esp, 4
// 006d3700  8bc6                 mov eax, esi
// 006d3702  5e                   pop esi
// 006d3703  59                   pop ecx
// 006d3704  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
