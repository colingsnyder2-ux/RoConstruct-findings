// roc 2012-06 008e1c20  unit: RBX::SkateboardController  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008e1c20
//
// 008e1c20  51                   push ecx
// 008e1c21  6a18                 push 0x18
// 008e1c23  c744240400000000     mov dword ptr [esp + 4], 0
// 008e1c2b  e8ea040a00           call 0x98211a
// 008e1c30  83c404               add esp, 4
// 008e1c33  85c0                 test eax, eax
// 008e1c35  7424                 je 0x8e1c5b
// 008e1c37  c700f0b9be00         mov dword ptr [eax], 0xbeb9f0
// 008e1c3d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e1c41  894808               mov dword ptr [eax + 8], ecx
// 008e1c44  8b542410             mov edx, dword ptr [esp + 0x10]
// 008e1c48  89500c               mov dword ptr [eax + 0xc], edx
// 008e1c4b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e1c4f  894810               mov dword ptr [eax + 0x10], ecx
// 008e1c52  8b542418             mov edx, dword ptr [esp + 0x18]
// 008e1c56  895014               mov dword ptr [eax + 0x14], edx
// 008e1c59  eb02                 jmp 0x8e1c5d
// 008e1c5b  33c0                 xor eax, eax
// 008e1c5d  56                   push esi
// 008e1c5e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008e1c62  6a00                 push 0
// 008e1c64  8906                 mov dword ptr [esi], eax
// 008e1c66  e8a9040a00           call 0x982114
// 008e1c6b  83c404               add esp, 4
// 008e1c6e  8bc6                 mov eax, esi
// 008e1c70  5e                   pop esi
// 008e1c71  59                   pop ecx
// 008e1c72  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
