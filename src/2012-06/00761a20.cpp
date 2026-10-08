// roc 2012-06 00761a20  unit: RBX::Explosion  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00761a20
//
// 00761a20  51                   push ecx
// 00761a21  6a18                 push 0x18
// 00761a23  c744240400000000     mov dword ptr [esp + 4], 0
// 00761a2b  e8ea062200           call 0x98211a
// 00761a30  83c404               add esp, 4
// 00761a33  85c0                 test eax, eax
// 00761a35  7424                 je 0x761a5b
// 00761a37  c70080ecba00         mov dword ptr [eax], 0xbaec80
// 00761a3d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00761a41  894808               mov dword ptr [eax + 8], ecx
// 00761a44  8b542410             mov edx, dword ptr [esp + 0x10]
// 00761a48  89500c               mov dword ptr [eax + 0xc], edx
// 00761a4b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00761a4f  894810               mov dword ptr [eax + 0x10], ecx
// 00761a52  8b542418             mov edx, dword ptr [esp + 0x18]
// 00761a56  895014               mov dword ptr [eax + 0x14], edx
// 00761a59  eb02                 jmp 0x761a5d
// 00761a5b  33c0                 xor eax, eax
// 00761a5d  56                   push esi
// 00761a5e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00761a62  6a00                 push 0
// 00761a64  8906                 mov dword ptr [esi], eax
// 00761a66  e8a9062200           call 0x982114
// 00761a6b  83c404               add esp, 4
// 00761a6e  8bc6                 mov eax, esi
// 00761a70  5e                   pop esi
// 00761a71  59                   pop ecx
// 00761a72  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
