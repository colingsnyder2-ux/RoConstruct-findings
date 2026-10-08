// roc 2012-06 006d3710  unit: boost::io::Vbad_format_string::?$error_info_injector  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006d3710
//
// 006d3710  51                   push ecx
// 006d3711  6a10                 push 0x10
// 006d3713  c744240400000000     mov dword ptr [esp + 4], 0
// 006d371b  e8fae92a00           call 0x98211a
// 006d3720  83c404               add esp, 4
// 006d3723  85c0                 test eax, eax
// 006d3725  7416                 je 0x6d373d
// 006d3727  c7009c8eb900         mov dword ptr [eax], 0xb98e9c
// 006d372d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d3731  894808               mov dword ptr [eax + 8], ecx
// 006d3734  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d3738  89500c               mov dword ptr [eax + 0xc], edx
// 006d373b  eb02                 jmp 0x6d373f
// 006d373d  33c0                 xor eax, eax
// 006d373f  56                   push esi
// 006d3740  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006d3744  6a00                 push 0
// 006d3746  8906                 mov dword ptr [esi], eax
// 006d3748  e8c7e92a00           call 0x982114
// 006d374d  83c404               add esp, 4
// 006d3750  8bc6                 mov eax, esi
// 006d3752  5e                   pop esi
// 006d3753  59                   pop ecx
// 006d3754  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
