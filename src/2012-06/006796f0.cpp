// roc 2012-06 006796f0  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006796f0
//
// 006796f0  51                   push ecx
// 006796f1  6a10                 push 0x10
// 006796f3  c744240400000000     mov dword ptr [esp + 4], 0
// 006796fb  e81a8a3000           call 0x98211a
// 00679700  83c404               add esp, 4
// 00679703  85c0                 test eax, eax
// 00679705  7416                 je 0x67971d
// 00679707  c700b0ddb800         mov dword ptr [eax], 0xb8ddb0
// 0067970d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00679711  894808               mov dword ptr [eax + 8], ecx
// 00679714  8b542410             mov edx, dword ptr [esp + 0x10]
// 00679718  89500c               mov dword ptr [eax + 0xc], edx
// 0067971b  eb02                 jmp 0x67971f
// 0067971d  33c0                 xor eax, eax
// 0067971f  56                   push esi
// 00679720  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00679724  6a00                 push 0
// 00679726  8906                 mov dword ptr [esi], eax
// 00679728  e8e7893000           call 0x982114
// 0067972d  83c404               add esp, 4
// 00679730  8bc6                 mov eax, esi
// 00679732  5e                   pop esi
// 00679733  59                   pop ecx
// 00679734  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
