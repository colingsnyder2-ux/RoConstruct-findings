// roc 2007-08 005dac30  unit: RBX::VHole::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dac30
//
// 005dac30  51                   push ecx
// 005dac31  6a18                 push 0x18
// 005dac33  c744240400000000     mov dword ptr [esp + 4], 0
// 005dac3b  e8b6520500           call 0x62fef6
// 005dac40  83c404               add esp, 4
// 005dac43  85c0                 test eax, eax
// 005dac45  7424                 je 0x5dac6b
// 005dac47  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005dac4b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005dac4f  894808               mov dword ptr [eax + 8], ecx
// 005dac52  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005dac56  89500c               mov dword ptr [eax + 0xc], edx
// 005dac59  8b542418             mov edx, dword ptr [esp + 0x18]
// 005dac5d  c700fcc07b00         mov dword ptr [eax], 0x7bc0fc
// 005dac63  894810               mov dword ptr [eax + 0x10], ecx
// 005dac66  895014               mov dword ptr [eax + 0x14], edx
// 005dac69  eb02                 jmp 0x5dac6d
// 005dac6b  33c0                 xor eax, eax
// 005dac6d  56                   push esi
// 005dac6e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005dac72  6a00                 push 0
// 005dac74  c744240800000000     mov dword ptr [esp + 8], 0
// 005dac7c  8906                 mov dword ptr [esi], eax
// 005dac7e  e8df4f0500           call 0x62fc62
// 005dac83  83c404               add esp, 4
// 005dac86  8bc6                 mov eax, esi
// 005dac88  5e                   pop esi
// 005dac89  59                   pop ecx
// 005dac8a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
