// roc 2012-06 006d3760  unit: boost::io::Vbad_format_string::?$error_info_injector  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006d3760
//
// 006d3760  51                   push ecx
// 006d3761  6a10                 push 0x10
// 006d3763  c744240400000000     mov dword ptr [esp + 4], 0
// 006d376b  e8aae92a00           call 0x98211a
// 006d3770  83c404               add esp, 4
// 006d3773  85c0                 test eax, eax
// 006d3775  7416                 je 0x6d378d
// 006d3777  c700b08eb900         mov dword ptr [eax], 0xb98eb0
// 006d377d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d3781  894808               mov dword ptr [eax + 8], ecx
// 006d3784  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d3788  89500c               mov dword ptr [eax + 0xc], edx
// 006d378b  eb02                 jmp 0x6d378f
// 006d378d  33c0                 xor eax, eax
// 006d378f  56                   push esi
// 006d3790  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006d3794  6a00                 push 0
// 006d3796  8906                 mov dword ptr [esi], eax
// 006d3798  e877e92a00           call 0x982114
// 006d379d  83c404               add esp, 4
// 006d37a0  8bc6                 mov eax, esi
// 006d37a2  5e                   pop esi
// 006d37a3  59                   pop ecx
// 006d37a4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
