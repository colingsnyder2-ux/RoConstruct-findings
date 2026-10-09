// roc 2009-12 004f7de0  unit: RBX::VBrickColor::?$holder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f7de0
//
// 004f7de0  51                   push ecx
// 004f7de1  6a18                 push 0x18
// 004f7de3  c744240400000000     mov dword ptr [esp + 4], 0
// 004f7deb  e870ba2f00           call 0x7f3860
// 004f7df0  83c404               add esp, 4
// 004f7df3  85c0                 test eax, eax
// 004f7df5  7424                 je 0x4f7e1b
// 004f7df7  c700aca09b00         mov dword ptr [eax], 0x9ba0ac
// 004f7dfd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004f7e01  894808               mov dword ptr [eax + 8], ecx
// 004f7e04  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f7e08  89500c               mov dword ptr [eax + 0xc], edx
// 004f7e0b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004f7e0f  894810               mov dword ptr [eax + 0x10], ecx
// 004f7e12  8b542418             mov edx, dword ptr [esp + 0x18]
// 004f7e16  895014               mov dword ptr [eax + 0x14], edx
// 004f7e19  eb02                 jmp 0x4f7e1d
// 004f7e1b  33c0                 xor eax, eax
// 004f7e1d  56                   push esi
// 004f7e1e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004f7e22  6a00                 push 0
// 004f7e24  8906                 mov dword ptr [esi], eax
// 004f7e26  e82fba2f00           call 0x7f385a
// 004f7e2b  83c404               add esp, 4
// 004f7e2e  8bc6                 mov eax, esi
// 004f7e30  5e                   pop esi
// 004f7e31  59                   pop ecx
// 004f7e32  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
