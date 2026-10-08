// roc 2010-06 00621c50  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00621c50
//
// 00621c50  51                   push ecx
// 00621c51  6a18                 push 0x18
// 00621c53  c744240400000000     mov dword ptr [esp + 4], 0
// 00621c5b  e8405d1800           call 0x7a79a0
// 00621c60  83c404               add esp, 4
// 00621c63  85c0                 test eax, eax
// 00621c65  7424                 je 0x621c8b
// 00621c67  c7000c47a300         mov dword ptr [eax], 0xa3470c
// 00621c6d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00621c71  894808               mov dword ptr [eax + 8], ecx
// 00621c74  8b542410             mov edx, dword ptr [esp + 0x10]
// 00621c78  89500c               mov dword ptr [eax + 0xc], edx
// 00621c7b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00621c7f  894810               mov dword ptr [eax + 0x10], ecx
// 00621c82  8b542418             mov edx, dword ptr [esp + 0x18]
// 00621c86  895014               mov dword ptr [eax + 0x14], edx
// 00621c89  eb02                 jmp 0x621c8d
// 00621c8b  33c0                 xor eax, eax
// 00621c8d  56                   push esi
// 00621c8e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00621c92  6a00                 push 0
// 00621c94  8906                 mov dword ptr [esi], eax
// 00621c96  e8ff5c1800           call 0x7a799a
// 00621c9b  83c404               add esp, 4
// 00621c9e  8bc6                 mov eax, esi
// 00621ca0  5e                   pop esi
// 00621ca1  59                   pop ecx
// 00621ca2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
