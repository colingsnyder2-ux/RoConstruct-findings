// roc 2010-06 00631b30  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00631b30
//
// 00631b30  51                   push ecx
// 00631b31  6a18                 push 0x18
// 00631b33  c744240400000000     mov dword ptr [esp + 4], 0
// 00631b3b  e8605e1700           call 0x7a79a0
// 00631b40  83c404               add esp, 4
// 00631b43  85c0                 test eax, eax
// 00631b45  7424                 je 0x631b6b
// 00631b47  c7002c5ba300         mov dword ptr [eax], 0xa35b2c
// 00631b4d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00631b51  894808               mov dword ptr [eax + 8], ecx
// 00631b54  8b542410             mov edx, dword ptr [esp + 0x10]
// 00631b58  89500c               mov dword ptr [eax + 0xc], edx
// 00631b5b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00631b5f  894810               mov dword ptr [eax + 0x10], ecx
// 00631b62  8b542418             mov edx, dword ptr [esp + 0x18]
// 00631b66  895014               mov dword ptr [eax + 0x14], edx
// 00631b69  eb02                 jmp 0x631b6d
// 00631b6b  33c0                 xor eax, eax
// 00631b6d  56                   push esi
// 00631b6e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00631b72  6a00                 push 0
// 00631b74  8906                 mov dword ptr [esi], eax
// 00631b76  e81f5e1700           call 0x7a799a
// 00631b7b  83c404               add esp, 4
// 00631b7e  8bc6                 mov eax, esi
// 00631b80  5e                   pop esi
// 00631b81  59                   pop ecx
// 00631b82  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
