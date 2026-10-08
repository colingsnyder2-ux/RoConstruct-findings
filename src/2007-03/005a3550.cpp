// roc 2007-03 005a3550  unit: seg_005a0000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a3550
//
// 005a3550  51                   push ecx
// 005a3551  6a18                 push 0x18
// 005a3553  c744240400000000     mov dword ptr [esp + 4], 0
// 005a355b  e8a8ab0700           call 0x61e108
// 005a3560  83c404               add esp, 4
// 005a3563  85c0                 test eax, eax
// 005a3565  7424                 je 0x5a358b
// 005a3567  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a356b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005a356f  894808               mov dword ptr [eax + 8], ecx
// 005a3572  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a3576  89500c               mov dword ptr [eax + 0xc], edx
// 005a3579  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a357d  c70048547b00         mov dword ptr [eax], 0x7b5448
// 005a3583  894810               mov dword ptr [eax + 0x10], ecx
// 005a3586  895014               mov dword ptr [eax + 0x14], edx
// 005a3589  eb02                 jmp 0x5a358d
// 005a358b  33c0                 xor eax, eax
// 005a358d  56                   push esi
// 005a358e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a3592  6a00                 push 0
// 005a3594  c744240800000000     mov dword ptr [esp + 8], 0
// 005a359c  8906                 mov dword ptr [esi], eax
// 005a359e  e84dab0700           call 0x61e0f0
// 005a35a3  83c404               add esp, 4
// 005a35a6  8bc6                 mov eax, esi
// 005a35a8  5e                   pop esi
// 005a35a9  59                   pop ecx
// 005a35aa  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
