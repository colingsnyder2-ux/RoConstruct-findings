// roc 2012-06 007b7350  unit: RBX::Fire  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007b7350
//
// 007b7350  51                   push ecx
// 007b7351  6a18                 push 0x18
// 007b7353  c744240400000000     mov dword ptr [esp + 4], 0
// 007b735b  e8baad1c00           call 0x98211a
// 007b7360  83c404               add esp, 4
// 007b7363  85c0                 test eax, eax
// 007b7365  7424                 je 0x7b738b
// 007b7367  c7002c99bb00         mov dword ptr [eax], 0xbb992c
// 007b736d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007b7371  894808               mov dword ptr [eax + 8], ecx
// 007b7374  8b542410             mov edx, dword ptr [esp + 0x10]
// 007b7378  89500c               mov dword ptr [eax + 0xc], edx
// 007b737b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007b737f  894810               mov dword ptr [eax + 0x10], ecx
// 007b7382  8b542418             mov edx, dword ptr [esp + 0x18]
// 007b7386  895014               mov dword ptr [eax + 0x14], edx
// 007b7389  eb02                 jmp 0x7b738d
// 007b738b  33c0                 xor eax, eax
// 007b738d  56                   push esi
// 007b738e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007b7392  6a00                 push 0
// 007b7394  8906                 mov dword ptr [esi], eax
// 007b7396  e879ad1c00           call 0x982114
// 007b739b  83c404               add esp, 4
// 007b739e  8bc6                 mov eax, esi
// 007b73a0  5e                   pop esi
// 007b73a1  59                   pop ecx
// 007b73a2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
