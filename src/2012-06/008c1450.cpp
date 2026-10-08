// roc 2012-06 008c1450  unit: RBX::BillboardGui  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008c1450
//
// 008c1450  51                   push ecx
// 008c1451  6a18                 push 0x18
// 008c1453  c744240400000000     mov dword ptr [esp + 4], 0
// 008c145b  e8ba0c0c00           call 0x98211a
// 008c1460  83c404               add esp, 4
// 008c1463  85c0                 test eax, eax
// 008c1465  7424                 je 0x8c148b
// 008c1467  c700805dbe00         mov dword ptr [eax], 0xbe5d80
// 008c146d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008c1471  894808               mov dword ptr [eax + 8], ecx
// 008c1474  8b542410             mov edx, dword ptr [esp + 0x10]
// 008c1478  89500c               mov dword ptr [eax + 0xc], edx
// 008c147b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c147f  894810               mov dword ptr [eax + 0x10], ecx
// 008c1482  8b542418             mov edx, dword ptr [esp + 0x18]
// 008c1486  895014               mov dword ptr [eax + 0x14], edx
// 008c1489  eb02                 jmp 0x8c148d
// 008c148b  33c0                 xor eax, eax
// 008c148d  56                   push esi
// 008c148e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008c1492  6a00                 push 0
// 008c1494  8906                 mov dword ptr [esi], eax
// 008c1496  e8790c0c00           call 0x982114
// 008c149b  83c404               add esp, 4
// 008c149e  8bc6                 mov eax, esi
// 008c14a0  5e                   pop esi
// 008c14a1  59                   pop ecx
// 008c14a2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
