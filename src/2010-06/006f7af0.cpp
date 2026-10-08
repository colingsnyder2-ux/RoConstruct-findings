// roc 2010-06 006f7af0  unit: RBX::VFrame::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f7af0
//
// 006f7af0  51                   push ecx
// 006f7af1  6a18                 push 0x18
// 006f7af3  c744240400000000     mov dword ptr [esp + 4], 0
// 006f7afb  e8a0fe0a00           call 0x7a79a0
// 006f7b00  83c404               add esp, 4
// 006f7b03  85c0                 test eax, eax
// 006f7b05  7424                 je 0x6f7b2b
// 006f7b07  c7006caaa400         mov dword ptr [eax], 0xa4aa6c
// 006f7b0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f7b11  894808               mov dword ptr [eax + 8], ecx
// 006f7b14  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f7b18  89500c               mov dword ptr [eax + 0xc], edx
// 006f7b1b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006f7b1f  894810               mov dword ptr [eax + 0x10], ecx
// 006f7b22  8b542418             mov edx, dword ptr [esp + 0x18]
// 006f7b26  895014               mov dword ptr [eax + 0x14], edx
// 006f7b29  eb02                 jmp 0x6f7b2d
// 006f7b2b  33c0                 xor eax, eax
// 006f7b2d  56                   push esi
// 006f7b2e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f7b32  6a00                 push 0
// 006f7b34  8906                 mov dword ptr [esi], eax
// 006f7b36  e85ffe0a00           call 0x7a799a
// 006f7b3b  83c404               add esp, 4
// 006f7b3e  8bc6                 mov eax, esi
// 006f7b40  5e                   pop esi
// 006f7b41  59                   pop ecx
// 006f7b42  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
