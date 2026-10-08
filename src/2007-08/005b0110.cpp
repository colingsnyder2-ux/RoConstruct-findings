// roc 2007-08 005b0110  unit: RBX::Network::P8Player::?$GetSetImpl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b0110
//
// 005b0110  51                   push ecx
// 005b0111  6a18                 push 0x18
// 005b0113  c744240400000000     mov dword ptr [esp + 4], 0
// 005b011b  e8d6fd0700           call 0x62fef6
// 005b0120  83c404               add esp, 4
// 005b0123  85c0                 test eax, eax
// 005b0125  7424                 je 0x5b014b
// 005b0127  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b012b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005b012f  894808               mov dword ptr [eax + 8], ecx
// 005b0132  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005b0136  89500c               mov dword ptr [eax + 0xc], edx
// 005b0139  8b542418             mov edx, dword ptr [esp + 0x18]
// 005b013d  c70024607b00         mov dword ptr [eax], 0x7b6024
// 005b0143  894810               mov dword ptr [eax + 0x10], ecx
// 005b0146  895014               mov dword ptr [eax + 0x14], edx
// 005b0149  eb02                 jmp 0x5b014d
// 005b014b  33c0                 xor eax, eax
// 005b014d  56                   push esi
// 005b014e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005b0152  6a00                 push 0
// 005b0154  c744240800000000     mov dword ptr [esp + 8], 0
// 005b015c  8906                 mov dword ptr [esi], eax
// 005b015e  e8fffa0700           call 0x62fc62
// 005b0163  83c404               add esp, 4
// 005b0166  8bc6                 mov eax, esi
// 005b0168  5e                   pop esi
// 005b0169  59                   pop ecx
// 005b016a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
