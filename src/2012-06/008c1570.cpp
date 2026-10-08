// roc 2012-06 008c1570  unit: RBX::BillboardGui  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008c1570
//
// 008c1570  51                   push ecx
// 008c1571  6a18                 push 0x18
// 008c1573  c744240400000000     mov dword ptr [esp + 4], 0
// 008c157b  e89a0b0c00           call 0x98211a
// 008c1580  83c404               add esp, 4
// 008c1583  85c0                 test eax, eax
// 008c1585  7424                 je 0x8c15ab
// 008c1587  c700bc5dbe00         mov dword ptr [eax], 0xbe5dbc
// 008c158d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008c1591  894808               mov dword ptr [eax + 8], ecx
// 008c1594  8b542410             mov edx, dword ptr [esp + 0x10]
// 008c1598  89500c               mov dword ptr [eax + 0xc], edx
// 008c159b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c159f  894810               mov dword ptr [eax + 0x10], ecx
// 008c15a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 008c15a6  895014               mov dword ptr [eax + 0x14], edx
// 008c15a9  eb02                 jmp 0x8c15ad
// 008c15ab  33c0                 xor eax, eax
// 008c15ad  56                   push esi
// 008c15ae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008c15b2  6a00                 push 0
// 008c15b4  8906                 mov dword ptr [esi], eax
// 008c15b6  e8590b0c00           call 0x982114
// 008c15bb  83c404               add esp, 4
// 008c15be  8bc6                 mov eax, esi
// 008c15c0  5e                   pop esi
// 008c15c1  59                   pop ecx
// 008c15c2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
