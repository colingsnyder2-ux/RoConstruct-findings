// roc 2010-06 006225d0  unit: RBX::VStockSound::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006225d0
//
// 006225d0  51                   push ecx
// 006225d1  6a18                 push 0x18
// 006225d3  c744240400000000     mov dword ptr [esp + 4], 0
// 006225db  e8c0531800           call 0x7a79a0
// 006225e0  83c404               add esp, 4
// 006225e3  85c0                 test eax, eax
// 006225e5  7424                 je 0x62260b
// 006225e7  c7001448a300         mov dword ptr [eax], 0xa34814
// 006225ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006225f1  894808               mov dword ptr [eax + 8], ecx
// 006225f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006225f8  89500c               mov dword ptr [eax + 0xc], edx
// 006225fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006225ff  894810               mov dword ptr [eax + 0x10], ecx
// 00622602  8b542418             mov edx, dword ptr [esp + 0x18]
// 00622606  895014               mov dword ptr [eax + 0x14], edx
// 00622609  eb02                 jmp 0x62260d
// 0062260b  33c0                 xor eax, eax
// 0062260d  56                   push esi
// 0062260e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00622612  6a00                 push 0
// 00622614  8906                 mov dword ptr [esi], eax
// 00622616  e87f531800           call 0x7a799a
// 0062261b  83c404               add esp, 4
// 0062261e  8bc6                 mov eax, esi
// 00622620  5e                   pop esi
// 00622621  59                   pop ecx
// 00622622  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
