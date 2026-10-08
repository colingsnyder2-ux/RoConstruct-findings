// roc 2007-03 005a34f0  unit: seg_005a0000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a34f0
//
// 005a34f0  51                   push ecx
// 005a34f1  6a18                 push 0x18
// 005a34f3  c744240400000000     mov dword ptr [esp + 4], 0
// 005a34fb  e808ac0700           call 0x61e108
// 005a3500  83c404               add esp, 4
// 005a3503  85c0                 test eax, eax
// 005a3505  7424                 je 0x5a352b
// 005a3507  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a350b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005a350f  894808               mov dword ptr [eax + 8], ecx
// 005a3512  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a3516  89500c               mov dword ptr [eax + 0xc], edx
// 005a3519  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a351d  c70068547b00         mov dword ptr [eax], 0x7b5468
// 005a3523  894810               mov dword ptr [eax + 0x10], ecx
// 005a3526  895014               mov dword ptr [eax + 0x14], edx
// 005a3529  eb02                 jmp 0x5a352d
// 005a352b  33c0                 xor eax, eax
// 005a352d  56                   push esi
// 005a352e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a3532  6a00                 push 0
// 005a3534  c744240800000000     mov dword ptr [esp + 8], 0
// 005a353c  8906                 mov dword ptr [esi], eax
// 005a353e  e8adab0700           call 0x61e0f0
// 005a3543  83c404               add esp, 4
// 005a3546  8bc6                 mov eax, esi
// 005a3548  5e                   pop esi
// 005a3549  59                   pop ecx
// 005a354a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
