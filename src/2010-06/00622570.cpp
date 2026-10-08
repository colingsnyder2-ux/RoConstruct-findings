// roc 2010-06 00622570  unit: RBX::VStockSound::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00622570
//
// 00622570  51                   push ecx
// 00622571  6a18                 push 0x18
// 00622573  c744240400000000     mov dword ptr [esp + 4], 0
// 0062257b  e820541800           call 0x7a79a0
// 00622580  83c404               add esp, 4
// 00622583  85c0                 test eax, eax
// 00622585  7424                 je 0x6225ab
// 00622587  c700fc47a300         mov dword ptr [eax], 0xa347fc
// 0062258d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00622591  894808               mov dword ptr [eax + 8], ecx
// 00622594  8b542410             mov edx, dword ptr [esp + 0x10]
// 00622598  89500c               mov dword ptr [eax + 0xc], edx
// 0062259b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0062259f  894810               mov dword ptr [eax + 0x10], ecx
// 006225a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006225a6  895014               mov dword ptr [eax + 0x14], edx
// 006225a9  eb02                 jmp 0x6225ad
// 006225ab  33c0                 xor eax, eax
// 006225ad  56                   push esi
// 006225ae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006225b2  6a00                 push 0
// 006225b4  8906                 mov dword ptr [esi], eax
// 006225b6  e8df531800           call 0x7a799a
// 006225bb  83c404               add esp, 4
// 006225be  8bc6                 mov eax, esi
// 006225c0  5e                   pop esi
// 006225c1  59                   pop ecx
// 006225c2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
