// roc 2009-06 005c9a00  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c9a00
//
// 005c9a00  51                   push ecx
// 005c9a01  6a18                 push 0x18
// 005c9a03  c744240400000000     mov dword ptr [esp + 4], 0
// 005c9a0b  e828f01400           call 0x718a38
// 005c9a10  83c404               add esp, 4
// 005c9a13  85c0                 test eax, eax
// 005c9a15  7424                 je 0x5c9a3b
// 005c9a17  c70028438d00         mov dword ptr [eax], 0x8d4328
// 005c9a1d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c9a21  894808               mov dword ptr [eax + 8], ecx
// 005c9a24  8b542410             mov edx, dword ptr [esp + 0x10]
// 005c9a28  89500c               mov dword ptr [eax + 0xc], edx
// 005c9a2b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005c9a2f  894810               mov dword ptr [eax + 0x10], ecx
// 005c9a32  8b542418             mov edx, dword ptr [esp + 0x18]
// 005c9a36  895014               mov dword ptr [eax + 0x14], edx
// 005c9a39  eb02                 jmp 0x5c9a3d
// 005c9a3b  33c0                 xor eax, eax
// 005c9a3d  56                   push esi
// 005c9a3e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005c9a42  6a00                 push 0
// 005c9a44  8906                 mov dword ptr [esi], eax
// 005c9a46  e8e7ef1400           call 0x718a32
// 005c9a4b  83c404               add esp, 4
// 005c9a4e  8bc6                 mov eax, esi
// 005c9a50  5e                   pop esi
// 005c9a51  59                   pop ecx
// 005c9a52  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
