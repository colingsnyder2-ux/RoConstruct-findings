// roc 2007-08 005b0050  unit: RBX::Network::P8Player::?$GetSetImpl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b0050
//
// 005b0050  51                   push ecx
// 005b0051  6a18                 push 0x18
// 005b0053  c744240400000000     mov dword ptr [esp + 4], 0
// 005b005b  e896fe0700           call 0x62fef6
// 005b0060  83c404               add esp, 4
// 005b0063  85c0                 test eax, eax
// 005b0065  7424                 je 0x5b008b
// 005b0067  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b006b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005b006f  894808               mov dword ptr [eax + 8], ecx
// 005b0072  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005b0076  89500c               mov dword ptr [eax + 0xc], edx
// 005b0079  8b542418             mov edx, dword ptr [esp + 0x18]
// 005b007d  c70004607b00         mov dword ptr [eax], 0x7b6004
// 005b0083  894810               mov dword ptr [eax + 0x10], ecx
// 005b0086  895014               mov dword ptr [eax + 0x14], edx
// 005b0089  eb02                 jmp 0x5b008d
// 005b008b  33c0                 xor eax, eax
// 005b008d  56                   push esi
// 005b008e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005b0092  6a00                 push 0
// 005b0094  c744240800000000     mov dword ptr [esp + 8], 0
// 005b009c  8906                 mov dword ptr [esi], eax
// 005b009e  e8bffb0700           call 0x62fc62
// 005b00a3  83c404               add esp, 4
// 005b00a6  8bc6                 mov eax, esi
// 005b00a8  5e                   pop esi
// 005b00a9  59                   pop ecx
// 005b00aa  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
