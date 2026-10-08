// roc 2010-06 0058eb50  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058eb50
//
// 0058eb50  51                   push ecx
// 0058eb51  6a18                 push 0x18
// 0058eb53  c744240400000000     mov dword ptr [esp + 4], 0
// 0058eb5b  e8408e2100           call 0x7a79a0
// 0058eb60  83c404               add esp, 4
// 0058eb63  85c0                 test eax, eax
// 0058eb65  7424                 je 0x58eb8b
// 0058eb67  c700848ca200         mov dword ptr [eax], 0xa28c84
// 0058eb6d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058eb71  894808               mov dword ptr [eax + 8], ecx
// 0058eb74  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058eb78  89500c               mov dword ptr [eax + 0xc], edx
// 0058eb7b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0058eb7f  894810               mov dword ptr [eax + 0x10], ecx
// 0058eb82  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058eb86  895014               mov dword ptr [eax + 0x14], edx
// 0058eb89  eb02                 jmp 0x58eb8d
// 0058eb8b  33c0                 xor eax, eax
// 0058eb8d  56                   push esi
// 0058eb8e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0058eb92  6a00                 push 0
// 0058eb94  8906                 mov dword ptr [esi], eax
// 0058eb96  e8ff8d2100           call 0x7a799a
// 0058eb9b  83c404               add esp, 4
// 0058eb9e  8bc6                 mov eax, esi
// 0058eba0  5e                   pop esi
// 0058eba1  59                   pop ecx
// 0058eba2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
