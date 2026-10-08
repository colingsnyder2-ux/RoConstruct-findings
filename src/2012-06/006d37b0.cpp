// roc 2012-06 006d37b0  unit: boost::io::Vbad_format_string::?$error_info_injector  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006d37b0
//
// 006d37b0  51                   push ecx
// 006d37b1  6a10                 push 0x10
// 006d37b3  c744240400000000     mov dword ptr [esp + 4], 0
// 006d37bb  e85ae92a00           call 0x98211a
// 006d37c0  83c404               add esp, 4
// 006d37c3  85c0                 test eax, eax
// 006d37c5  7416                 je 0x6d37dd
// 006d37c7  c700c48eb900         mov dword ptr [eax], 0xb98ec4
// 006d37cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d37d1  894808               mov dword ptr [eax + 8], ecx
// 006d37d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d37d8  89500c               mov dword ptr [eax + 0xc], edx
// 006d37db  eb02                 jmp 0x6d37df
// 006d37dd  33c0                 xor eax, eax
// 006d37df  56                   push esi
// 006d37e0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006d37e4  6a00                 push 0
// 006d37e6  8906                 mov dword ptr [esi], eax
// 006d37e8  e827e92a00           call 0x982114
// 006d37ed  83c404               add esp, 4
// 006d37f0  8bc6                 mov eax, esi
// 006d37f2  5e                   pop esi
// 006d37f3  59                   pop ecx
// 006d37f4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
