// roc 2009-12 0062cc80  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062cc80
//
// 0062cc80  51                   push ecx
// 0062cc81  6a18                 push 0x18
// 0062cc83  c744240400000000     mov dword ptr [esp + 4], 0
// 0062cc8b  e8d06b1c00           call 0x7f3860
// 0062cc90  83c404               add esp, 4
// 0062cc93  85c0                 test eax, eax
// 0062cc95  7424                 je 0x62ccbb
// 0062cc97  c7009cae9c00         mov dword ptr [eax], 0x9cae9c
// 0062cc9d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062cca1  894808               mov dword ptr [eax + 8], ecx
// 0062cca4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0062cca8  89500c               mov dword ptr [eax + 0xc], edx
// 0062ccab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0062ccaf  894810               mov dword ptr [eax + 0x10], ecx
// 0062ccb2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0062ccb6  895014               mov dword ptr [eax + 0x14], edx
// 0062ccb9  eb02                 jmp 0x62ccbd
// 0062ccbb  33c0                 xor eax, eax
// 0062ccbd  56                   push esi
// 0062ccbe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062ccc2  6a00                 push 0
// 0062ccc4  8906                 mov dword ptr [esi], eax
// 0062ccc6  e88f6b1c00           call 0x7f385a
// 0062cccb  83c404               add esp, 4
// 0062ccce  8bc6                 mov eax, esi
// 0062ccd0  5e                   pop esi
// 0062ccd1  59                   pop ecx
// 0062ccd2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
