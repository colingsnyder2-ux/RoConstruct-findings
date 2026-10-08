// roc 2009-06 005c99a0  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c99a0
//
// 005c99a0  51                   push ecx
// 005c99a1  6a18                 push 0x18
// 005c99a3  c744240400000000     mov dword ptr [esp + 4], 0
// 005c99ab  e888f01400           call 0x718a38
// 005c99b0  83c404               add esp, 4
// 005c99b3  85c0                 test eax, eax
// 005c99b5  7424                 je 0x5c99db
// 005c99b7  c70014438d00         mov dword ptr [eax], 0x8d4314
// 005c99bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c99c1  894808               mov dword ptr [eax + 8], ecx
// 005c99c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005c99c8  89500c               mov dword ptr [eax + 0xc], edx
// 005c99cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005c99cf  894810               mov dword ptr [eax + 0x10], ecx
// 005c99d2  8b542418             mov edx, dword ptr [esp + 0x18]
// 005c99d6  895014               mov dword ptr [eax + 0x14], edx
// 005c99d9  eb02                 jmp 0x5c99dd
// 005c99db  33c0                 xor eax, eax
// 005c99dd  56                   push esi
// 005c99de  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005c99e2  6a00                 push 0
// 005c99e4  8906                 mov dword ptr [esi], eax
// 005c99e6  e847f01400           call 0x718a32
// 005c99eb  83c404               add esp, 4
// 005c99ee  8bc6                 mov eax, esi
// 005c99f0  5e                   pop esi
// 005c99f1  59                   pop ecx
// 005c99f2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
