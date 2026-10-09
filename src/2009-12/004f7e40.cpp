// roc 2009-12 004f7e40  unit: RBX::VBrickColor::?$holder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f7e40
//
// 004f7e40  51                   push ecx
// 004f7e41  6a18                 push 0x18
// 004f7e43  c744240400000000     mov dword ptr [esp + 4], 0
// 004f7e4b  e810ba2f00           call 0x7f3860
// 004f7e50  83c404               add esp, 4
// 004f7e53  85c0                 test eax, eax
// 004f7e55  7424                 je 0x4f7e7b
// 004f7e57  c7009ca19b00         mov dword ptr [eax], 0x9ba19c
// 004f7e5d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004f7e61  894808               mov dword ptr [eax + 8], ecx
// 004f7e64  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f7e68  89500c               mov dword ptr [eax + 0xc], edx
// 004f7e6b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004f7e6f  894810               mov dword ptr [eax + 0x10], ecx
// 004f7e72  8b542418             mov edx, dword ptr [esp + 0x18]
// 004f7e76  895014               mov dword ptr [eax + 0x14], edx
// 004f7e79  eb02                 jmp 0x4f7e7d
// 004f7e7b  33c0                 xor eax, eax
// 004f7e7d  56                   push esi
// 004f7e7e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004f7e82  6a00                 push 0
// 004f7e84  8906                 mov dword ptr [esi], eax
// 004f7e86  e8cfb92f00           call 0x7f385a
// 004f7e8b  83c404               add esp, 4
// 004f7e8e  8bc6                 mov eax, esi
// 004f7e90  5e                   pop esi
// 004f7e91  59                   pop ecx
// 004f7e92  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
