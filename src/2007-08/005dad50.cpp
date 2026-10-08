// roc 2007-08 005dad50  unit: RBX::VHole::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dad50
//
// 005dad50  51                   push ecx
// 005dad51  6a18                 push 0x18
// 005dad53  c744240400000000     mov dword ptr [esp + 4], 0
// 005dad5b  e896510500           call 0x62fef6
// 005dad60  83c404               add esp, 4
// 005dad63  85c0                 test eax, eax
// 005dad65  7424                 je 0x5dad8b
// 005dad67  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005dad6b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005dad6f  894808               mov dword ptr [eax + 8], ecx
// 005dad72  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005dad76  89500c               mov dword ptr [eax + 0xc], edx
// 005dad79  8b542418             mov edx, dword ptr [esp + 0x18]
// 005dad7d  c7002cc17b00         mov dword ptr [eax], 0x7bc12c
// 005dad83  894810               mov dword ptr [eax + 0x10], ecx
// 005dad86  895014               mov dword ptr [eax + 0x14], edx
// 005dad89  eb02                 jmp 0x5dad8d
// 005dad8b  33c0                 xor eax, eax
// 005dad8d  56                   push esi
// 005dad8e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005dad92  6a00                 push 0
// 005dad94  c744240800000000     mov dword ptr [esp + 8], 0
// 005dad9c  8906                 mov dword ptr [esi], eax
// 005dad9e  e8bf4e0500           call 0x62fc62
// 005dada3  83c404               add esp, 4
// 005dada6  8bc6                 mov eax, esi
// 005dada8  5e                   pop esi
// 005dada9  59                   pop ecx
// 005dadaa  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
