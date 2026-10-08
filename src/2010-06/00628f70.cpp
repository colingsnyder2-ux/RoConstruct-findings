// roc 2010-06 00628f70  unit: RBX::VDecal::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00628f70
//
// 00628f70  51                   push ecx
// 00628f71  6a18                 push 0x18
// 00628f73  c744240400000000     mov dword ptr [esp + 4], 0
// 00628f7b  e820ea1700           call 0x7a79a0
// 00628f80  83c404               add esp, 4
// 00628f83  85c0                 test eax, eax
// 00628f85  7424                 je 0x628fab
// 00628f87  c7008452a300         mov dword ptr [eax], 0xa35284
// 00628f8d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00628f91  894808               mov dword ptr [eax + 8], ecx
// 00628f94  8b542410             mov edx, dword ptr [esp + 0x10]
// 00628f98  89500c               mov dword ptr [eax + 0xc], edx
// 00628f9b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00628f9f  894810               mov dword ptr [eax + 0x10], ecx
// 00628fa2  8b542418             mov edx, dword ptr [esp + 0x18]
// 00628fa6  895014               mov dword ptr [eax + 0x14], edx
// 00628fa9  eb02                 jmp 0x628fad
// 00628fab  33c0                 xor eax, eax
// 00628fad  56                   push esi
// 00628fae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00628fb2  6a00                 push 0
// 00628fb4  8906                 mov dword ptr [esi], eax
// 00628fb6  e8dfe91700           call 0x7a799a
// 00628fbb  83c404               add esp, 4
// 00628fbe  8bc6                 mov eax, esi
// 00628fc0  5e                   pop esi
// 00628fc1  59                   pop ecx
// 00628fc2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
