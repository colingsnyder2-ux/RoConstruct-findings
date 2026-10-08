// roc 2010-06 00695c50  unit: RBX::VMotor::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00695c50
//
// 00695c50  51                   push ecx
// 00695c51  6a18                 push 0x18
// 00695c53  c744240400000000     mov dword ptr [esp + 4], 0
// 00695c5b  e8401d1100           call 0x7a79a0
// 00695c60  83c404               add esp, 4
// 00695c63  85c0                 test eax, eax
// 00695c65  7424                 je 0x695c8b
// 00695c67  c700cce4a300         mov dword ptr [eax], 0xa3e4cc
// 00695c6d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00695c71  894808               mov dword ptr [eax + 8], ecx
// 00695c74  8b542410             mov edx, dword ptr [esp + 0x10]
// 00695c78  89500c               mov dword ptr [eax + 0xc], edx
// 00695c7b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00695c7f  894810               mov dword ptr [eax + 0x10], ecx
// 00695c82  8b542418             mov edx, dword ptr [esp + 0x18]
// 00695c86  895014               mov dword ptr [eax + 0x14], edx
// 00695c89  eb02                 jmp 0x695c8d
// 00695c8b  33c0                 xor eax, eax
// 00695c8d  56                   push esi
// 00695c8e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00695c92  6a00                 push 0
// 00695c94  8906                 mov dword ptr [esi], eax
// 00695c96  e8ff1c1100           call 0x7a799a
// 00695c9b  83c404               add esp, 4
// 00695c9e  8bc6                 mov eax, esi
// 00695ca0  5e                   pop esi
// 00695ca1  59                   pop ecx
// 00695ca2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
