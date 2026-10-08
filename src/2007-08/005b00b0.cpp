// roc 2007-08 005b00b0  unit: RBX::Network::P8Player::?$GetSetImpl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b00b0
//
// 005b00b0  51                   push ecx
// 005b00b1  6a18                 push 0x18
// 005b00b3  c744240400000000     mov dword ptr [esp + 4], 0
// 005b00bb  e836fe0700           call 0x62fef6
// 005b00c0  83c404               add esp, 4
// 005b00c3  85c0                 test eax, eax
// 005b00c5  7424                 je 0x5b00eb
// 005b00c7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b00cb  8b542410             mov edx, dword ptr [esp + 0x10]
// 005b00cf  894808               mov dword ptr [eax + 8], ecx
// 005b00d2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005b00d6  89500c               mov dword ptr [eax + 0xc], edx
// 005b00d9  8b542418             mov edx, dword ptr [esp + 0x18]
// 005b00dd  c70014607b00         mov dword ptr [eax], 0x7b6014
// 005b00e3  894810               mov dword ptr [eax + 0x10], ecx
// 005b00e6  895014               mov dword ptr [eax + 0x14], edx
// 005b00e9  eb02                 jmp 0x5b00ed
// 005b00eb  33c0                 xor eax, eax
// 005b00ed  56                   push esi
// 005b00ee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005b00f2  6a00                 push 0
// 005b00f4  c744240800000000     mov dword ptr [esp + 8], 0
// 005b00fc  8906                 mov dword ptr [esi], eax
// 005b00fe  e85ffb0700           call 0x62fc62
// 005b0103  83c404               add esp, 4
// 005b0106  8bc6                 mov eax, esi
// 005b0108  5e                   pop esi
// 005b0109  59                   pop ecx
// 005b010a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
