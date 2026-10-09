// roc 2009-12 006f4f70  unit: RBX::VPlayerMouse::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006f4f70
//
// 006f4f70  51                   push ecx
// 006f4f71  6a18                 push 0x18
// 006f4f73  c744240400000000     mov dword ptr [esp + 4], 0
// 006f4f7b  e8e0e80f00           call 0x7f3860
// 006f4f80  83c404               add esp, 4
// 006f4f83  85c0                 test eax, eax
// 006f4f85  7424                 je 0x6f4fab
// 006f4f87  c700fcc89d00         mov dword ptr [eax], 0x9dc8fc
// 006f4f8d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f4f91  894808               mov dword ptr [eax + 8], ecx
// 006f4f94  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f4f98  89500c               mov dword ptr [eax + 0xc], edx
// 006f4f9b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006f4f9f  894810               mov dword ptr [eax + 0x10], ecx
// 006f4fa2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006f4fa6  895014               mov dword ptr [eax + 0x14], edx
// 006f4fa9  eb02                 jmp 0x6f4fad
// 006f4fab  33c0                 xor eax, eax
// 006f4fad  56                   push esi
// 006f4fae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f4fb2  6a00                 push 0
// 006f4fb4  8906                 mov dword ptr [esi], eax
// 006f4fb6  e89fe80f00           call 0x7f385a
// 006f4fbb  83c404               add esp, 4
// 006f4fbe  8bc6                 mov eax, esi
// 006f4fc0  5e                   pop esi
// 006f4fc1  59                   pop ecx
// 006f4fc2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
