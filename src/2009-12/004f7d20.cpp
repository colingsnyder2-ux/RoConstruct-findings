// roc 2009-12 004f7d20  unit: RBX::VBrickColor::?$holder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f7d20
//
// 004f7d20  51                   push ecx
// 004f7d21  6a18                 push 0x18
// 004f7d23  c744240400000000     mov dword ptr [esp + 4], 0
// 004f7d2b  e830bb2f00           call 0x7f3860
// 004f7d30  83c404               add esp, 4
// 004f7d33  85c0                 test eax, eax
// 004f7d35  7424                 je 0x4f7d5b
// 004f7d37  c7006ca19b00         mov dword ptr [eax], 0x9ba16c
// 004f7d3d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004f7d41  894808               mov dword ptr [eax + 8], ecx
// 004f7d44  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f7d48  89500c               mov dword ptr [eax + 0xc], edx
// 004f7d4b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004f7d4f  894810               mov dword ptr [eax + 0x10], ecx
// 004f7d52  8b542418             mov edx, dword ptr [esp + 0x18]
// 004f7d56  895014               mov dword ptr [eax + 0x14], edx
// 004f7d59  eb02                 jmp 0x4f7d5d
// 004f7d5b  33c0                 xor eax, eax
// 004f7d5d  56                   push esi
// 004f7d5e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004f7d62  6a00                 push 0
// 004f7d64  8906                 mov dword ptr [esi], eax
// 004f7d66  e8efba2f00           call 0x7f385a
// 004f7d6b  83c404               add esp, 4
// 004f7d6e  8bc6                 mov eax, esi
// 004f7d70  5e                   pop esi
// 004f7d71  59                   pop ecx
// 004f7d72  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
