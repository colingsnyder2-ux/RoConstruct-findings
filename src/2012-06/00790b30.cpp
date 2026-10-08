// roc 2012-06 00790b30  unit: RBX::VAnimation::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00790b30
//
// 00790b30  51                   push ecx
// 00790b31  6a18                 push 0x18
// 00790b33  c744240400000000     mov dword ptr [esp + 4], 0
// 00790b3b  e8da151f00           call 0x98211a
// 00790b40  83c404               add esp, 4
// 00790b43  85c0                 test eax, eax
// 00790b45  7424                 je 0x790b6b
// 00790b47  c7002422bb00         mov dword ptr [eax], 0xbb2224
// 00790b4d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00790b51  894808               mov dword ptr [eax + 8], ecx
// 00790b54  8b542410             mov edx, dword ptr [esp + 0x10]
// 00790b58  89500c               mov dword ptr [eax + 0xc], edx
// 00790b5b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00790b5f  894810               mov dword ptr [eax + 0x10], ecx
// 00790b62  8b542418             mov edx, dword ptr [esp + 0x18]
// 00790b66  895014               mov dword ptr [eax + 0x14], edx
// 00790b69  eb02                 jmp 0x790b6d
// 00790b6b  33c0                 xor eax, eax
// 00790b6d  56                   push esi
// 00790b6e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00790b72  6a00                 push 0
// 00790b74  8906                 mov dword ptr [esi], eax
// 00790b76  e899151f00           call 0x982114
// 00790b7b  83c404               add esp, 4
// 00790b7e  8bc6                 mov eax, esi
// 00790b80  5e                   pop esi
// 00790b81  59                   pop ecx
// 00790b82  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
