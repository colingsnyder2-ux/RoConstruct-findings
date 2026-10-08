// roc 2010-06 006d8c50  unit: RBX::Smoke  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d8c50
//
// 006d8c50  51                   push ecx
// 006d8c51  6a18                 push 0x18
// 006d8c53  c744240400000000     mov dword ptr [esp + 4], 0
// 006d8c5b  e840ed0c00           call 0x7a79a0
// 006d8c60  83c404               add esp, 4
// 006d8c63  85c0                 test eax, eax
// 006d8c65  7424                 je 0x6d8c8b
// 006d8c67  c7001c63a400         mov dword ptr [eax], 0xa4631c
// 006d8c6d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d8c71  894808               mov dword ptr [eax + 8], ecx
// 006d8c74  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d8c78  89500c               mov dword ptr [eax + 0xc], edx
// 006d8c7b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006d8c7f  894810               mov dword ptr [eax + 0x10], ecx
// 006d8c82  8b542418             mov edx, dword ptr [esp + 0x18]
// 006d8c86  895014               mov dword ptr [eax + 0x14], edx
// 006d8c89  eb02                 jmp 0x6d8c8d
// 006d8c8b  33c0                 xor eax, eax
// 006d8c8d  56                   push esi
// 006d8c8e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006d8c92  6a00                 push 0
// 006d8c94  8906                 mov dword ptr [esi], eax
// 006d8c96  e8ffec0c00           call 0x7a799a
// 006d8c9b  83c404               add esp, 4
// 006d8c9e  8bc6                 mov eax, esi
// 006d8ca0  5e                   pop esi
// 006d8ca1  59                   pop ecx
// 006d8ca2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
