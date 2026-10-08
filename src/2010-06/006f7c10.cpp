// roc 2010-06 006f7c10  unit: RBX::VFrame::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f7c10
//
// 006f7c10  51                   push ecx
// 006f7c11  6a18                 push 0x18
// 006f7c13  c744240400000000     mov dword ptr [esp + 4], 0
// 006f7c1b  e880fd0a00           call 0x7a79a0
// 006f7c20  83c404               add esp, 4
// 006f7c23  85c0                 test eax, eax
// 006f7c25  7424                 je 0x6f7c4b
// 006f7c27  c7009caaa400         mov dword ptr [eax], 0xa4aa9c
// 006f7c2d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f7c31  894808               mov dword ptr [eax + 8], ecx
// 006f7c34  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f7c38  89500c               mov dword ptr [eax + 0xc], edx
// 006f7c3b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006f7c3f  894810               mov dword ptr [eax + 0x10], ecx
// 006f7c42  8b542418             mov edx, dword ptr [esp + 0x18]
// 006f7c46  895014               mov dword ptr [eax + 0x14], edx
// 006f7c49  eb02                 jmp 0x6f7c4d
// 006f7c4b  33c0                 xor eax, eax
// 006f7c4d  56                   push esi
// 006f7c4e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f7c52  6a00                 push 0
// 006f7c54  8906                 mov dword ptr [esi], eax
// 006f7c56  e83ffd0a00           call 0x7a799a
// 006f7c5b  83c404               add esp, 4
// 006f7c5e  8bc6                 mov eax, esi
// 006f7c60  5e                   pop esi
// 006f7c61  59                   pop ecx
// 006f7c62  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
