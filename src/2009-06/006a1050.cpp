// roc 2009-06 006a1050  unit: RBX::TouchTransmitter  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a1050
//
// 006a1050  51                   push ecx
// 006a1051  6a18                 push 0x18
// 006a1053  c744240400000000     mov dword ptr [esp + 4], 0
// 006a105b  e8d8790700           call 0x718a38
// 006a1060  83c404               add esp, 4
// 006a1063  85c0                 test eax, eax
// 006a1065  7424                 je 0x6a108b
// 006a1067  c7004c948e00         mov dword ptr [eax], 0x8e944c
// 006a106d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a1071  894808               mov dword ptr [eax + 8], ecx
// 006a1074  8b542410             mov edx, dword ptr [esp + 0x10]
// 006a1078  89500c               mov dword ptr [eax + 0xc], edx
// 006a107b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006a107f  894810               mov dword ptr [eax + 0x10], ecx
// 006a1082  8b542418             mov edx, dword ptr [esp + 0x18]
// 006a1086  895014               mov dword ptr [eax + 0x14], edx
// 006a1089  eb02                 jmp 0x6a108d
// 006a108b  33c0                 xor eax, eax
// 006a108d  56                   push esi
// 006a108e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006a1092  6a00                 push 0
// 006a1094  8906                 mov dword ptr [esi], eax
// 006a1096  e897790700           call 0x718a32
// 006a109b  83c404               add esp, 4
// 006a109e  8bc6                 mov eax, esi
// 006a10a0  5e                   pop esi
// 006a10a1  59                   pop ecx
// 006a10a2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
