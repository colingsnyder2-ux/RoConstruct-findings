// roc 2012-06 008c1510  unit: RBX::BillboardGui  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008c1510
//
// 008c1510  51                   push ecx
// 008c1511  6a18                 push 0x18
// 008c1513  c744240400000000     mov dword ptr [esp + 4], 0
// 008c151b  e8fa0b0c00           call 0x98211a
// 008c1520  83c404               add esp, 4
// 008c1523  85c0                 test eax, eax
// 008c1525  7424                 je 0x8c154b
// 008c1527  c700a85dbe00         mov dword ptr [eax], 0xbe5da8
// 008c152d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008c1531  894808               mov dword ptr [eax + 8], ecx
// 008c1534  8b542410             mov edx, dword ptr [esp + 0x10]
// 008c1538  89500c               mov dword ptr [eax + 0xc], edx
// 008c153b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c153f  894810               mov dword ptr [eax + 0x10], ecx
// 008c1542  8b542418             mov edx, dword ptr [esp + 0x18]
// 008c1546  895014               mov dword ptr [eax + 0x14], edx
// 008c1549  eb02                 jmp 0x8c154d
// 008c154b  33c0                 xor eax, eax
// 008c154d  56                   push esi
// 008c154e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008c1552  6a00                 push 0
// 008c1554  8906                 mov dword ptr [esi], eax
// 008c1556  e8b90b0c00           call 0x982114
// 008c155b  83c404               add esp, 4
// 008c155e  8bc6                 mov eax, esi
// 008c1560  5e                   pop esi
// 008c1561  59                   pop ecx
// 008c1562  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
