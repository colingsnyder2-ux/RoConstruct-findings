// roc 2012-06 00679600  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00679600
//
// 00679600  51                   push ecx
// 00679601  6a10                 push 0x10
// 00679603  c744240400000000     mov dword ptr [esp + 4], 0
// 0067960b  e80a8b3000           call 0x98211a
// 00679610  83c404               add esp, 4
// 00679613  85c0                 test eax, eax
// 00679615  7416                 je 0x67962d
// 00679617  c70074ddb800         mov dword ptr [eax], 0xb8dd74
// 0067961d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00679621  894808               mov dword ptr [eax + 8], ecx
// 00679624  8b542410             mov edx, dword ptr [esp + 0x10]
// 00679628  89500c               mov dword ptr [eax + 0xc], edx
// 0067962b  eb02                 jmp 0x67962f
// 0067962d  33c0                 xor eax, eax
// 0067962f  56                   push esi
// 00679630  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00679634  6a00                 push 0
// 00679636  8906                 mov dword ptr [esi], eax
// 00679638  e8d78a3000           call 0x982114
// 0067963d  83c404               add esp, 4
// 00679640  8bc6                 mov eax, esi
// 00679642  5e                   pop esi
// 00679643  59                   pop ecx
// 00679644  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
