// roc 2009-12 00528d80  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00528d80
//
// 00528d80  51                   push ecx
// 00528d81  6a18                 push 0x18
// 00528d83  c744240400000000     mov dword ptr [esp + 4], 0
// 00528d8b  e8d0aa2c00           call 0x7f3860
// 00528d90  83c404               add esp, 4
// 00528d93  85c0                 test eax, eax
// 00528d95  7424                 je 0x528dbb
// 00528d97  c7002cc09b00         mov dword ptr [eax], 0x9bc02c
// 00528d9d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00528da1  894808               mov dword ptr [eax + 8], ecx
// 00528da4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00528da8  89500c               mov dword ptr [eax + 0xc], edx
// 00528dab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00528daf  894810               mov dword ptr [eax + 0x10], ecx
// 00528db2  8b542418             mov edx, dword ptr [esp + 0x18]
// 00528db6  895014               mov dword ptr [eax + 0x14], edx
// 00528db9  eb02                 jmp 0x528dbd
// 00528dbb  33c0                 xor eax, eax
// 00528dbd  56                   push esi
// 00528dbe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00528dc2  6a00                 push 0
// 00528dc4  8906                 mov dword ptr [esi], eax
// 00528dc6  e88faa2c00           call 0x7f385a
// 00528dcb  83c404               add esp, 4
// 00528dce  8bc6                 mov eax, esi
// 00528dd0  5e                   pop esi
// 00528dd1  59                   pop ecx
// 00528dd2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
