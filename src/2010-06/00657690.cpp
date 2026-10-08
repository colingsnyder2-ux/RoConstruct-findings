// roc 2010-06 00657690  unit: RBX::Network::P8Player::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00657690
//
// 00657690  51                   push ecx
// 00657691  6a18                 push 0x18
// 00657693  c744240400000000     mov dword ptr [esp + 4], 0
// 0065769b  e800031500           call 0x7a79a0
// 006576a0  83c404               add esp, 4
// 006576a3  85c0                 test eax, eax
// 006576a5  7424                 je 0x6576cb
// 006576a7  c70084a0a300         mov dword ptr [eax], 0xa3a084
// 006576ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006576b1  894808               mov dword ptr [eax + 8], ecx
// 006576b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006576b8  89500c               mov dword ptr [eax + 0xc], edx
// 006576bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006576bf  894810               mov dword ptr [eax + 0x10], ecx
// 006576c2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006576c6  895014               mov dword ptr [eax + 0x14], edx
// 006576c9  eb02                 jmp 0x6576cd
// 006576cb  33c0                 xor eax, eax
// 006576cd  56                   push esi
// 006576ce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006576d2  6a00                 push 0
// 006576d4  8906                 mov dword ptr [esi], eax
// 006576d6  e8bf021500           call 0x7a799a
// 006576db  83c404               add esp, 4
// 006576de  8bc6                 mov eax, esi
// 006576e0  5e                   pop esi
// 006576e1  59                   pop ecx
// 006576e2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
