// roc 2009-06 005c9940  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c9940
//
// 005c9940  51                   push ecx
// 005c9941  6a18                 push 0x18
// 005c9943  c744240400000000     mov dword ptr [esp + 4], 0
// 005c994b  e8e8f01400           call 0x718a38
// 005c9950  83c404               add esp, 4
// 005c9953  85c0                 test eax, eax
// 005c9955  7424                 je 0x5c997b
// 005c9957  c70000438d00         mov dword ptr [eax], 0x8d4300
// 005c995d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c9961  894808               mov dword ptr [eax + 8], ecx
// 005c9964  8b542410             mov edx, dword ptr [esp + 0x10]
// 005c9968  89500c               mov dword ptr [eax + 0xc], edx
// 005c996b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005c996f  894810               mov dword ptr [eax + 0x10], ecx
// 005c9972  8b542418             mov edx, dword ptr [esp + 0x18]
// 005c9976  895014               mov dword ptr [eax + 0x14], edx
// 005c9979  eb02                 jmp 0x5c997d
// 005c997b  33c0                 xor eax, eax
// 005c997d  56                   push esi
// 005c997e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005c9982  6a00                 push 0
// 005c9984  8906                 mov dword ptr [esi], eax
// 005c9986  e8a7f01400           call 0x718a32
// 005c998b  83c404               add esp, 4
// 005c998e  8bc6                 mov eax, esi
// 005c9990  5e                   pop esi
// 005c9991  59                   pop ecx
// 005c9992  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
