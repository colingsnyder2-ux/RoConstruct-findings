// roc 2010-06 00695bf0  unit: RBX::VMotor::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00695bf0
//
// 00695bf0  51                   push ecx
// 00695bf1  6a18                 push 0x18
// 00695bf3  c744240400000000     mov dword ptr [esp + 4], 0
// 00695bfb  e8a01d1100           call 0x7a79a0
// 00695c00  83c404               add esp, 4
// 00695c03  85c0                 test eax, eax
// 00695c05  7424                 je 0x695c2b
// 00695c07  c700b4e4a300         mov dword ptr [eax], 0xa3e4b4
// 00695c0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00695c11  894808               mov dword ptr [eax + 8], ecx
// 00695c14  8b542410             mov edx, dword ptr [esp + 0x10]
// 00695c18  89500c               mov dword ptr [eax + 0xc], edx
// 00695c1b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00695c1f  894810               mov dword ptr [eax + 0x10], ecx
// 00695c22  8b542418             mov edx, dword ptr [esp + 0x18]
// 00695c26  895014               mov dword ptr [eax + 0x14], edx
// 00695c29  eb02                 jmp 0x695c2d
// 00695c2b  33c0                 xor eax, eax
// 00695c2d  56                   push esi
// 00695c2e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00695c32  6a00                 push 0
// 00695c34  8906                 mov dword ptr [esi], eax
// 00695c36  e85f1d1100           call 0x7a799a
// 00695c3b  83c404               add esp, 4
// 00695c3e  8bc6                 mov eax, esi
// 00695c40  5e                   pop esi
// 00695c41  59                   pop ecx
// 00695c42  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
