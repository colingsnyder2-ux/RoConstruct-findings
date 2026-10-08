// roc 2009-06 004d50f0  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d50f0
//
// 004d50f0  51                   push ecx
// 004d50f1  6a18                 push 0x18
// 004d50f3  c744240400000000     mov dword ptr [esp + 4], 0
// 004d50fb  e838392400           call 0x718a38
// 004d5100  83c404               add esp, 4
// 004d5103  85c0                 test eax, eax
// 004d5105  7424                 je 0x4d512b
// 004d5107  c700745a8c00         mov dword ptr [eax], 0x8c5a74
// 004d510d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d5111  894808               mov dword ptr [eax + 8], ecx
// 004d5114  8b542410             mov edx, dword ptr [esp + 0x10]
// 004d5118  89500c               mov dword ptr [eax + 0xc], edx
// 004d511b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004d511f  894810               mov dword ptr [eax + 0x10], ecx
// 004d5122  8b542418             mov edx, dword ptr [esp + 0x18]
// 004d5126  895014               mov dword ptr [eax + 0x14], edx
// 004d5129  eb02                 jmp 0x4d512d
// 004d512b  33c0                 xor eax, eax
// 004d512d  56                   push esi
// 004d512e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004d5132  6a00                 push 0
// 004d5134  8906                 mov dword ptr [esi], eax
// 004d5136  e8f7382400           call 0x718a32
// 004d513b  83c404               add esp, 4
// 004d513e  8bc6                 mov eax, esi
// 004d5140  5e                   pop esi
// 004d5141  59                   pop ecx
// 004d5142  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
