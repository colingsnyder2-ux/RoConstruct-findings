// roc 2012-06 008c13f0  unit: RBX::BillboardGui  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008c13f0
//
// 008c13f0  51                   push ecx
// 008c13f1  6a18                 push 0x18
// 008c13f3  c744240400000000     mov dword ptr [esp + 4], 0
// 008c13fb  e81a0d0c00           call 0x98211a
// 008c1400  83c404               add esp, 4
// 008c1403  85c0                 test eax, eax
// 008c1405  7424                 je 0x8c142b
// 008c1407  c7006c5dbe00         mov dword ptr [eax], 0xbe5d6c
// 008c140d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008c1411  894808               mov dword ptr [eax + 8], ecx
// 008c1414  8b542410             mov edx, dword ptr [esp + 0x10]
// 008c1418  89500c               mov dword ptr [eax + 0xc], edx
// 008c141b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c141f  894810               mov dword ptr [eax + 0x10], ecx
// 008c1422  8b542418             mov edx, dword ptr [esp + 0x18]
// 008c1426  895014               mov dword ptr [eax + 0x14], edx
// 008c1429  eb02                 jmp 0x8c142d
// 008c142b  33c0                 xor eax, eax
// 008c142d  56                   push esi
// 008c142e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008c1432  6a00                 push 0
// 008c1434  8906                 mov dword ptr [esi], eax
// 008c1436  e8d90c0c00           call 0x982114
// 008c143b  83c404               add esp, 4
// 008c143e  8bc6                 mov eax, esi
// 008c1440  5e                   pop esi
// 008c1441  59                   pop ecx
// 008c1442  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
