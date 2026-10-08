// roc 2009-06 005c9780  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c9780
//
// 005c9780  51                   push ecx
// 005c9781  6a10                 push 0x10
// 005c9783  c744240400000000     mov dword ptr [esp + 4], 0
// 005c978b  e8a8f21400           call 0x718a38
// 005c9790  83c404               add esp, 4
// 005c9793  85c0                 test eax, eax
// 005c9795  7416                 je 0x5c97ad
// 005c9797  c7009c428d00         mov dword ptr [eax], 0x8d429c
// 005c979d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c97a1  894808               mov dword ptr [eax + 8], ecx
// 005c97a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005c97a8  89500c               mov dword ptr [eax + 0xc], edx
// 005c97ab  eb02                 jmp 0x5c97af
// 005c97ad  33c0                 xor eax, eax
// 005c97af  56                   push esi
// 005c97b0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005c97b4  6a00                 push 0
// 005c97b6  8906                 mov dword ptr [esi], eax
// 005c97b8  e875f21400           call 0x718a32
// 005c97bd  83c404               add esp, 4
// 005c97c0  8bc6                 mov eax, esi
// 005c97c2  5e                   pop esi
// 005c97c3  59                   pop ecx
// 005c97c4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
