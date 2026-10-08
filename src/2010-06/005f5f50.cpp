// roc 2010-06 005f5f50  unit: RBX::VTextureId::?$holder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f5f50
//
// 005f5f50  51                   push ecx
// 005f5f51  6a18                 push 0x18
// 005f5f53  c744240400000000     mov dword ptr [esp + 4], 0
// 005f5f5b  e8401a1b00           call 0x7a79a0
// 005f5f60  83c404               add esp, 4
// 005f5f63  85c0                 test eax, eax
// 005f5f65  7424                 je 0x5f5f8b
// 005f5f67  c70008f7a200         mov dword ptr [eax], 0xa2f708
// 005f5f6d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f5f71  894808               mov dword ptr [eax + 8], ecx
// 005f5f74  8b542410             mov edx, dword ptr [esp + 0x10]
// 005f5f78  89500c               mov dword ptr [eax + 0xc], edx
// 005f5f7b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005f5f7f  894810               mov dword ptr [eax + 0x10], ecx
// 005f5f82  8b542418             mov edx, dword ptr [esp + 0x18]
// 005f5f86  895014               mov dword ptr [eax + 0x14], edx
// 005f5f89  eb02                 jmp 0x5f5f8d
// 005f5f8b  33c0                 xor eax, eax
// 005f5f8d  56                   push esi
// 005f5f8e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005f5f92  6a00                 push 0
// 005f5f94  8906                 mov dword ptr [esi], eax
// 005f5f96  e8ff191b00           call 0x7a799a
// 005f5f9b  83c404               add esp, 4
// 005f5f9e  8bc6                 mov eax, esi
// 005f5fa0  5e                   pop esi
// 005f5fa1  59                   pop ecx
// 005f5fa2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
