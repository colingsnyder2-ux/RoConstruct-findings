// roc 2007-08 005dabd0  unit: RBX::VHole::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dabd0
//
// 005dabd0  51                   push ecx
// 005dabd1  6a18                 push 0x18
// 005dabd3  c744240400000000     mov dword ptr [esp + 4], 0
// 005dabdb  e816530500           call 0x62fef6
// 005dabe0  83c404               add esp, 4
// 005dabe3  85c0                 test eax, eax
// 005dabe5  7424                 je 0x5dac0b
// 005dabe7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005dabeb  8b542410             mov edx, dword ptr [esp + 0x10]
// 005dabef  894808               mov dword ptr [eax + 8], ecx
// 005dabf2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005dabf6  89500c               mov dword ptr [eax + 0xc], edx
// 005dabf9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005dabfd  c700ecc07b00         mov dword ptr [eax], 0x7bc0ec
// 005dac03  894810               mov dword ptr [eax + 0x10], ecx
// 005dac06  895014               mov dword ptr [eax + 0x14], edx
// 005dac09  eb02                 jmp 0x5dac0d
// 005dac0b  33c0                 xor eax, eax
// 005dac0d  56                   push esi
// 005dac0e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005dac12  6a00                 push 0
// 005dac14  c744240800000000     mov dword ptr [esp + 8], 0
// 005dac1c  8906                 mov dword ptr [esi], eax
// 005dac1e  e83f500500           call 0x62fc62
// 005dac23  83c404               add esp, 4
// 005dac26  8bc6                 mov eax, esi
// 005dac28  5e                   pop esi
// 005dac29  59                   pop ecx
// 005dac2a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
