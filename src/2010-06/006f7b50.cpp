// roc 2010-06 006f7b50  unit: RBX::VFrame::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f7b50
//
// 006f7b50  51                   push ecx
// 006f7b51  6a18                 push 0x18
// 006f7b53  c744240400000000     mov dword ptr [esp + 4], 0
// 006f7b5b  e840fe0a00           call 0x7a79a0
// 006f7b60  83c404               add esp, 4
// 006f7b63  85c0                 test eax, eax
// 006f7b65  7424                 je 0x6f7b8b
// 006f7b67  c70024aaa400         mov dword ptr [eax], 0xa4aa24
// 006f7b6d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f7b71  894808               mov dword ptr [eax + 8], ecx
// 006f7b74  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f7b78  89500c               mov dword ptr [eax + 0xc], edx
// 006f7b7b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006f7b7f  894810               mov dword ptr [eax + 0x10], ecx
// 006f7b82  8b542418             mov edx, dword ptr [esp + 0x18]
// 006f7b86  895014               mov dword ptr [eax + 0x14], edx
// 006f7b89  eb02                 jmp 0x6f7b8d
// 006f7b8b  33c0                 xor eax, eax
// 006f7b8d  56                   push esi
// 006f7b8e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f7b92  6a00                 push 0
// 006f7b94  8906                 mov dword ptr [esi], eax
// 006f7b96  e8fffd0a00           call 0x7a799a
// 006f7b9b  83c404               add esp, 4
// 006f7b9e  8bc6                 mov eax, esi
// 006f7ba0  5e                   pop esi
// 006f7ba1  59                   pop ecx
// 006f7ba2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
