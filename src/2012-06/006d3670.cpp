// roc 2012-06 006d3670  unit: boost::io::Vbad_format_string::?$error_info_injector  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006d3670
//
// 006d3670  51                   push ecx
// 006d3671  6a10                 push 0x10
// 006d3673  c744240400000000     mov dword ptr [esp + 4], 0
// 006d367b  e89aea2a00           call 0x98211a
// 006d3680  83c404               add esp, 4
// 006d3683  85c0                 test eax, eax
// 006d3685  7416                 je 0x6d369d
// 006d3687  c700748eb900         mov dword ptr [eax], 0xb98e74
// 006d368d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d3691  894808               mov dword ptr [eax + 8], ecx
// 006d3694  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d3698  89500c               mov dword ptr [eax + 0xc], edx
// 006d369b  eb02                 jmp 0x6d369f
// 006d369d  33c0                 xor eax, eax
// 006d369f  56                   push esi
// 006d36a0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006d36a4  6a00                 push 0
// 006d36a6  8906                 mov dword ptr [esi], eax
// 006d36a8  e867ea2a00           call 0x982114
// 006d36ad  83c404               add esp, 4
// 006d36b0  8bc6                 mov eax, esi
// 006d36b2  5e                   pop esi
// 006d36b3  59                   pop ecx
// 006d36b4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
