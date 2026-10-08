// roc 2007-08 005dac90  unit: RBX::VHole::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dac90
//
// 005dac90  51                   push ecx
// 005dac91  6a18                 push 0x18
// 005dac93  c744240400000000     mov dword ptr [esp + 4], 0
// 005dac9b  e856520500           call 0x62fef6
// 005daca0  83c404               add esp, 4
// 005daca3  85c0                 test eax, eax
// 005daca5  7424                 je 0x5daccb
// 005daca7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005dacab  8b542410             mov edx, dword ptr [esp + 0x10]
// 005dacaf  894808               mov dword ptr [eax + 8], ecx
// 005dacb2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005dacb6  89500c               mov dword ptr [eax + 0xc], edx
// 005dacb9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005dacbd  c7000cc17b00         mov dword ptr [eax], 0x7bc10c
// 005dacc3  894810               mov dword ptr [eax + 0x10], ecx
// 005dacc6  895014               mov dword ptr [eax + 0x14], edx
// 005dacc9  eb02                 jmp 0x5daccd
// 005daccb  33c0                 xor eax, eax
// 005daccd  56                   push esi
// 005dacce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005dacd2  6a00                 push 0
// 005dacd4  c744240800000000     mov dword ptr [esp + 8], 0
// 005dacdc  8906                 mov dword ptr [esi], eax
// 005dacde  e87f4f0500           call 0x62fc62
// 005dace3  83c404               add esp, 4
// 005dace6  8bc6                 mov eax, esi
// 005dace8  5e                   pop esi
// 005dace9  59                   pop ecx
// 005dacea  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
