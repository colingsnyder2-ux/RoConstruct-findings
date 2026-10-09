// roc 2009-12 0062cce0  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062cce0
//
// 0062cce0  51                   push ecx
// 0062cce1  6a18                 push 0x18
// 0062cce3  c744240400000000     mov dword ptr [esp + 4], 0
// 0062cceb  e8706b1c00           call 0x7f3860
// 0062ccf0  83c404               add esp, 4
// 0062ccf3  85c0                 test eax, eax
// 0062ccf5  7424                 je 0x62cd1b
// 0062ccf7  c700b4ae9c00         mov dword ptr [eax], 0x9caeb4
// 0062ccfd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062cd01  894808               mov dword ptr [eax + 8], ecx
// 0062cd04  8b542410             mov edx, dword ptr [esp + 0x10]
// 0062cd08  89500c               mov dword ptr [eax + 0xc], edx
// 0062cd0b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0062cd0f  894810               mov dword ptr [eax + 0x10], ecx
// 0062cd12  8b542418             mov edx, dword ptr [esp + 0x18]
// 0062cd16  895014               mov dword ptr [eax + 0x14], edx
// 0062cd19  eb02                 jmp 0x62cd1d
// 0062cd1b  33c0                 xor eax, eax
// 0062cd1d  56                   push esi
// 0062cd1e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062cd22  6a00                 push 0
// 0062cd24  8906                 mov dword ptr [esi], eax
// 0062cd26  e82f6b1c00           call 0x7f385a
// 0062cd2b  83c404               add esp, 4
// 0062cd2e  8bc6                 mov eax, esi
// 0062cd30  5e                   pop esi
// 0062cd31  59                   pop ecx
// 0062cd32  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
