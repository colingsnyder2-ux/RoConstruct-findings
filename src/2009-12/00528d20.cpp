// roc 2009-12 00528d20  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00528d20
//
// 00528d20  51                   push ecx
// 00528d21  6a18                 push 0x18
// 00528d23  c744240400000000     mov dword ptr [esp + 4], 0
// 00528d2b  e830ab2c00           call 0x7f3860
// 00528d30  83c404               add esp, 4
// 00528d33  85c0                 test eax, eax
// 00528d35  7424                 je 0x528d5b
// 00528d37  c70084bf9b00         mov dword ptr [eax], 0x9bbf84
// 00528d3d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00528d41  894808               mov dword ptr [eax + 8], ecx
// 00528d44  8b542410             mov edx, dword ptr [esp + 0x10]
// 00528d48  89500c               mov dword ptr [eax + 0xc], edx
// 00528d4b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00528d4f  894810               mov dword ptr [eax + 0x10], ecx
// 00528d52  8b542418             mov edx, dword ptr [esp + 0x18]
// 00528d56  895014               mov dword ptr [eax + 0x14], edx
// 00528d59  eb02                 jmp 0x528d5d
// 00528d5b  33c0                 xor eax, eax
// 00528d5d  56                   push esi
// 00528d5e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00528d62  6a00                 push 0
// 00528d64  8906                 mov dword ptr [esi], eax
// 00528d66  e8efaa2c00           call 0x7f385a
// 00528d6b  83c404               add esp, 4
// 00528d6e  8bc6                 mov eax, esi
// 00528d70  5e                   pop esi
// 00528d71  59                   pop ecx
// 00528d72  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
