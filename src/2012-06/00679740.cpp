// roc 2012-06 00679740  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00679740
//
// 00679740  51                   push ecx
// 00679741  6a10                 push 0x10
// 00679743  c744240400000000     mov dword ptr [esp + 4], 0
// 0067974b  e8ca893000           call 0x98211a
// 00679750  83c404               add esp, 4
// 00679753  85c0                 test eax, eax
// 00679755  7416                 je 0x67976d
// 00679757  c700c4ddb800         mov dword ptr [eax], 0xb8ddc4
// 0067975d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00679761  894808               mov dword ptr [eax + 8], ecx
// 00679764  8b542410             mov edx, dword ptr [esp + 0x10]
// 00679768  89500c               mov dword ptr [eax + 0xc], edx
// 0067976b  eb02                 jmp 0x67976f
// 0067976d  33c0                 xor eax, eax
// 0067976f  56                   push esi
// 00679770  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00679774  6a00                 push 0
// 00679776  8906                 mov dword ptr [esi], eax
// 00679778  e897893000           call 0x982114
// 0067977d  83c404               add esp, 4
// 00679780  8bc6                 mov eax, esi
// 00679782  5e                   pop esi
// 00679783  59                   pop ecx
// 00679784  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
