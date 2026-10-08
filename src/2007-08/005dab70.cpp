// roc 2007-08 005dab70  unit: RBX::VHole::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dab70
//
// 005dab70  51                   push ecx
// 005dab71  6a18                 push 0x18
// 005dab73  c744240400000000     mov dword ptr [esp + 4], 0
// 005dab7b  e876530500           call 0x62fef6
// 005dab80  83c404               add esp, 4
// 005dab83  85c0                 test eax, eax
// 005dab85  7424                 je 0x5dabab
// 005dab87  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005dab8b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005dab8f  894808               mov dword ptr [eax + 8], ecx
// 005dab92  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005dab96  89500c               mov dword ptr [eax + 0xc], edx
// 005dab99  8b542418             mov edx, dword ptr [esp + 0x18]
// 005dab9d  c700dcc07b00         mov dword ptr [eax], 0x7bc0dc
// 005daba3  894810               mov dword ptr [eax + 0x10], ecx
// 005daba6  895014               mov dword ptr [eax + 0x14], edx
// 005daba9  eb02                 jmp 0x5dabad
// 005dabab  33c0                 xor eax, eax
// 005dabad  56                   push esi
// 005dabae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005dabb2  6a00                 push 0
// 005dabb4  c744240800000000     mov dword ptr [esp + 8], 0
// 005dabbc  8906                 mov dword ptr [esi], eax
// 005dabbe  e89f500500           call 0x62fc62
// 005dabc3  83c404               add esp, 4
// 005dabc6  8bc6                 mov eax, esi
// 005dabc8  5e                   pop esi
// 005dabc9  59                   pop ecx
// 005dabca  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
