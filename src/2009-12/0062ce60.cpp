// roc 2009-12 0062ce60  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062ce60
//
// 0062ce60  51                   push ecx
// 0062ce61  6a18                 push 0x18
// 0062ce63  c744240400000000     mov dword ptr [esp + 4], 0
// 0062ce6b  e8f0691c00           call 0x7f3860
// 0062ce70  83c404               add esp, 4
// 0062ce73  85c0                 test eax, eax
// 0062ce75  7424                 je 0x62ce9b
// 0062ce77  c70014af9c00         mov dword ptr [eax], 0x9caf14
// 0062ce7d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062ce81  894808               mov dword ptr [eax + 8], ecx
// 0062ce84  8b542410             mov edx, dword ptr [esp + 0x10]
// 0062ce88  89500c               mov dword ptr [eax + 0xc], edx
// 0062ce8b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0062ce8f  894810               mov dword ptr [eax + 0x10], ecx
// 0062ce92  8b542418             mov edx, dword ptr [esp + 0x18]
// 0062ce96  895014               mov dword ptr [eax + 0x14], edx
// 0062ce99  eb02                 jmp 0x62ce9d
// 0062ce9b  33c0                 xor eax, eax
// 0062ce9d  56                   push esi
// 0062ce9e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062cea2  6a00                 push 0
// 0062cea4  8906                 mov dword ptr [esi], eax
// 0062cea6  e8af691c00           call 0x7f385a
// 0062ceab  83c404               add esp, 4
// 0062ceae  8bc6                 mov eax, esi
// 0062ceb0  5e                   pop esi
// 0062ceb1  59                   pop ecx
// 0062ceb2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
