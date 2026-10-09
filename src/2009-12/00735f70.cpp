// roc 2009-12 00735f70  unit: RBX::Network::P8Player::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00735f70
//
// 00735f70  51                   push ecx
// 00735f71  6a18                 push 0x18
// 00735f73  c744240400000000     mov dword ptr [esp + 4], 0
// 00735f7b  e8e0d80b00           call 0x7f3860
// 00735f80  83c404               add esp, 4
// 00735f83  85c0                 test eax, eax
// 00735f85  7424                 je 0x735fab
// 00735f87  c700a0139e00         mov dword ptr [eax], 0x9e13a0
// 00735f8d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00735f91  894808               mov dword ptr [eax + 8], ecx
// 00735f94  8b542410             mov edx, dword ptr [esp + 0x10]
// 00735f98  89500c               mov dword ptr [eax + 0xc], edx
// 00735f9b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00735f9f  894810               mov dword ptr [eax + 0x10], ecx
// 00735fa2  8b542418             mov edx, dword ptr [esp + 0x18]
// 00735fa6  895014               mov dword ptr [eax + 0x14], edx
// 00735fa9  eb02                 jmp 0x735fad
// 00735fab  33c0                 xor eax, eax
// 00735fad  56                   push esi
// 00735fae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00735fb2  6a00                 push 0
// 00735fb4  8906                 mov dword ptr [esi], eax
// 00735fb6  e89fd80b00           call 0x7f385a
// 00735fbb  83c404               add esp, 4
// 00735fbe  8bc6                 mov eax, esi
// 00735fc0  5e                   pop esi
// 00735fc1  59                   pop ecx
// 00735fc2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
