// roc 2012-06 00878100  unit: DummyJob  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00878100
//
// 00878100  51                   push ecx
// 00878101  6a10                 push 0x10
// 00878103  c744240400000000     mov dword ptr [esp + 4], 0
// 0087810b  e80aa01000           call 0x98211a
// 00878110  83c404               add esp, 4
// 00878113  85c0                 test eax, eax
// 00878115  7416                 je 0x87812d
// 00878117  c700287dbd00         mov dword ptr [eax], 0xbd7d28
// 0087811d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00878121  894808               mov dword ptr [eax + 8], ecx
// 00878124  8b542410             mov edx, dword ptr [esp + 0x10]
// 00878128  89500c               mov dword ptr [eax + 0xc], edx
// 0087812b  eb02                 jmp 0x87812f
// 0087812d  33c0                 xor eax, eax
// 0087812f  56                   push esi
// 00878130  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00878134  6a00                 push 0
// 00878136  8906                 mov dword ptr [esi], eax
// 00878138  e8d79f1000           call 0x982114
// 0087813d  83c404               add esp, 4
// 00878140  8bc6                 mov eax, esi
// 00878142  5e                   pop esi
// 00878143  59                   pop ecx
// 00878144  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
