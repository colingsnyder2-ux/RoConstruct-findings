// roc 2012-06 008d6e20  unit: RBX::ArcHandles  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008d6e20
//
// 008d6e20  51                   push ecx
// 008d6e21  6a18                 push 0x18
// 008d6e23  c744240400000000     mov dword ptr [esp + 4], 0
// 008d6e2b  e8eab20a00           call 0x98211a
// 008d6e30  83c404               add esp, 4
// 008d6e33  85c0                 test eax, eax
// 008d6e35  7424                 je 0x8d6e5b
// 008d6e37  c7008c9ebe00         mov dword ptr [eax], 0xbe9e8c
// 008d6e3d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008d6e41  894808               mov dword ptr [eax + 8], ecx
// 008d6e44  8b542410             mov edx, dword ptr [esp + 0x10]
// 008d6e48  89500c               mov dword ptr [eax + 0xc], edx
// 008d6e4b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d6e4f  894810               mov dword ptr [eax + 0x10], ecx
// 008d6e52  8b542418             mov edx, dword ptr [esp + 0x18]
// 008d6e56  895014               mov dword ptr [eax + 0x14], edx
// 008d6e59  eb02                 jmp 0x8d6e5d
// 008d6e5b  33c0                 xor eax, eax
// 008d6e5d  56                   push esi
// 008d6e5e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008d6e62  6a00                 push 0
// 008d6e64  8906                 mov dword ptr [esi], eax
// 008d6e66  e8a9b20a00           call 0x982114
// 008d6e6b  83c404               add esp, 4
// 008d6e6e  8bc6                 mov eax, esi
// 008d6e70  5e                   pop esi
// 008d6e71  59                   pop ecx
// 008d6e72  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
