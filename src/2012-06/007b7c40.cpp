// roc 2012-06 007b7c40  unit: RBX::VSparkles::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007b7c40
//
// 007b7c40  51                   push ecx
// 007b7c41  6a18                 push 0x18
// 007b7c43  c744240400000000     mov dword ptr [esp + 4], 0
// 007b7c4b  e8caa41c00           call 0x98211a
// 007b7c50  83c404               add esp, 4
// 007b7c53  85c0                 test eax, eax
// 007b7c55  7424                 je 0x7b7c7b
// 007b7c57  c700709bbb00         mov dword ptr [eax], 0xbb9b70
// 007b7c5d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007b7c61  894808               mov dword ptr [eax + 8], ecx
// 007b7c64  8b542410             mov edx, dword ptr [esp + 0x10]
// 007b7c68  89500c               mov dword ptr [eax + 0xc], edx
// 007b7c6b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007b7c6f  894810               mov dword ptr [eax + 0x10], ecx
// 007b7c72  8b542418             mov edx, dword ptr [esp + 0x18]
// 007b7c76  895014               mov dword ptr [eax + 0x14], edx
// 007b7c79  eb02                 jmp 0x7b7c7d
// 007b7c7b  33c0                 xor eax, eax
// 007b7c7d  56                   push esi
// 007b7c7e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007b7c82  6a00                 push 0
// 007b7c84  8906                 mov dword ptr [esi], eax
// 007b7c86  e889a41c00           call 0x982114
// 007b7c8b  83c404               add esp, 4
// 007b7c8e  8bc6                 mov eax, esi
// 007b7c90  5e                   pop esi
// 007b7c91  59                   pop ecx
// 007b7c92  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
