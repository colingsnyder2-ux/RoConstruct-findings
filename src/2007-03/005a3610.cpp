// roc 2007-03 005a3610  unit: seg_005a0000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a3610
//
// 005a3610  51                   push ecx
// 005a3611  6a18                 push 0x18
// 005a3613  c744240400000000     mov dword ptr [esp + 4], 0
// 005a361b  e8e8aa0700           call 0x61e108
// 005a3620  83c404               add esp, 4
// 005a3623  85c0                 test eax, eax
// 005a3625  7424                 je 0x5a364b
// 005a3627  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a362b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005a362f  894808               mov dword ptr [eax + 8], ecx
// 005a3632  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a3636  89500c               mov dword ptr [eax + 0xc], edx
// 005a3639  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a363d  c70088547b00         mov dword ptr [eax], 0x7b5488
// 005a3643  894810               mov dword ptr [eax + 0x10], ecx
// 005a3646  895014               mov dword ptr [eax + 0x14], edx
// 005a3649  eb02                 jmp 0x5a364d
// 005a364b  33c0                 xor eax, eax
// 005a364d  56                   push esi
// 005a364e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a3652  6a00                 push 0
// 005a3654  c744240800000000     mov dword ptr [esp + 8], 0
// 005a365c  8906                 mov dword ptr [esi], eax
// 005a365e  e88daa0700           call 0x61e0f0
// 005a3663  83c404               add esp, 4
// 005a3666  8bc6                 mov eax, esi
// 005a3668  5e                   pop esi
// 005a3669  59                   pop ecx
// 005a366a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
