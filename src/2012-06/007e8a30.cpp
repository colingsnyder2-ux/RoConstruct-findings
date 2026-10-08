// roc 2012-06 007e8a30  unit: RBX::VGuiTextButton::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007e8a30
//
// 007e8a30  51                   push ecx
// 007e8a31  6a18                 push 0x18
// 007e8a33  c744240400000000     mov dword ptr [esp + 4], 0
// 007e8a3b  e8da961900           call 0x98211a
// 007e8a40  83c404               add esp, 4
// 007e8a43  85c0                 test eax, eax
// 007e8a45  7424                 je 0x7e8a6b
// 007e8a47  c7001427bc00         mov dword ptr [eax], 0xbc2714
// 007e8a4d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007e8a51  894808               mov dword ptr [eax + 8], ecx
// 007e8a54  8b542410             mov edx, dword ptr [esp + 0x10]
// 007e8a58  89500c               mov dword ptr [eax + 0xc], edx
// 007e8a5b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007e8a5f  894810               mov dword ptr [eax + 0x10], ecx
// 007e8a62  8b542418             mov edx, dword ptr [esp + 0x18]
// 007e8a66  895014               mov dword ptr [eax + 0x14], edx
// 007e8a69  eb02                 jmp 0x7e8a6d
// 007e8a6b  33c0                 xor eax, eax
// 007e8a6d  56                   push esi
// 007e8a6e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007e8a72  6a00                 push 0
// 007e8a74  8906                 mov dword ptr [esi], eax
// 007e8a76  e899961900           call 0x982114
// 007e8a7b  83c404               add esp, 4
// 007e8a7e  8bc6                 mov eax, esi
// 007e8a80  5e                   pop esi
// 007e8a81  59                   pop ecx
// 007e8a82  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
