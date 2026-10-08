// roc 2012-06 008d2ef0  unit: RBX::Handles  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008d2ef0
//
// 008d2ef0  51                   push ecx
// 008d2ef1  6a18                 push 0x18
// 008d2ef3  c744240400000000     mov dword ptr [esp + 4], 0
// 008d2efb  e81af20a00           call 0x98211a
// 008d2f00  83c404               add esp, 4
// 008d2f03  85c0                 test eax, eax
// 008d2f05  7424                 je 0x8d2f2b
// 008d2f07  c700489abe00         mov dword ptr [eax], 0xbe9a48
// 008d2f0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008d2f11  894808               mov dword ptr [eax + 8], ecx
// 008d2f14  8b542410             mov edx, dword ptr [esp + 0x10]
// 008d2f18  89500c               mov dword ptr [eax + 0xc], edx
// 008d2f1b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d2f1f  894810               mov dword ptr [eax + 0x10], ecx
// 008d2f22  8b542418             mov edx, dword ptr [esp + 0x18]
// 008d2f26  895014               mov dword ptr [eax + 0x14], edx
// 008d2f29  eb02                 jmp 0x8d2f2d
// 008d2f2b  33c0                 xor eax, eax
// 008d2f2d  56                   push esi
// 008d2f2e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008d2f32  6a00                 push 0
// 008d2f34  8906                 mov dword ptr [esi], eax
// 008d2f36  e8d9f10a00           call 0x982114
// 008d2f3b  83c404               add esp, 4
// 008d2f3e  8bc6                 mov eax, esi
// 008d2f40  5e                   pop esi
// 008d2f41  59                   pop ecx
// 008d2f42  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
