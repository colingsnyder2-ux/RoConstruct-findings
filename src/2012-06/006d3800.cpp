// roc 2012-06 006d3800  unit: boost::io::Vbad_format_string::?$error_info_injector  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006d3800
//
// 006d3800  51                   push ecx
// 006d3801  6a10                 push 0x10
// 006d3803  c744240400000000     mov dword ptr [esp + 4], 0
// 006d380b  e80ae92a00           call 0x98211a
// 006d3810  83c404               add esp, 4
// 006d3813  85c0                 test eax, eax
// 006d3815  7416                 je 0x6d382d
// 006d3817  c700d88eb900         mov dword ptr [eax], 0xb98ed8
// 006d381d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d3821  894808               mov dword ptr [eax + 8], ecx
// 006d3824  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d3828  89500c               mov dword ptr [eax + 0xc], edx
// 006d382b  eb02                 jmp 0x6d382f
// 006d382d  33c0                 xor eax, eax
// 006d382f  56                   push esi
// 006d3830  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006d3834  6a00                 push 0
// 006d3836  8906                 mov dword ptr [esi], eax
// 006d3838  e8d7e82a00           call 0x982114
// 006d383d  83c404               add esp, 4
// 006d3840  8bc6                 mov eax, esi
// 006d3842  5e                   pop esi
// 006d3843  59                   pop ecx
// 006d3844  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
