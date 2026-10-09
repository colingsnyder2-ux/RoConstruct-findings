// roc 2009-12 004f7d80  unit: RBX::VBrickColor::?$holder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f7d80
//
// 004f7d80  51                   push ecx
// 004f7d81  6a18                 push 0x18
// 004f7d83  c744240400000000     mov dword ptr [esp + 4], 0
// 004f7d8b  e8d0ba2f00           call 0x7f3860
// 004f7d90  83c404               add esp, 4
// 004f7d93  85c0                 test eax, eax
// 004f7d95  7424                 je 0x4f7dbb
// 004f7d97  c70084a19b00         mov dword ptr [eax], 0x9ba184
// 004f7d9d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004f7da1  894808               mov dword ptr [eax + 8], ecx
// 004f7da4  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f7da8  89500c               mov dword ptr [eax + 0xc], edx
// 004f7dab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004f7daf  894810               mov dword ptr [eax + 0x10], ecx
// 004f7db2  8b542418             mov edx, dword ptr [esp + 0x18]
// 004f7db6  895014               mov dword ptr [eax + 0x14], edx
// 004f7db9  eb02                 jmp 0x4f7dbd
// 004f7dbb  33c0                 xor eax, eax
// 004f7dbd  56                   push esi
// 004f7dbe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004f7dc2  6a00                 push 0
// 004f7dc4  8906                 mov dword ptr [esi], eax
// 004f7dc6  e88fba2f00           call 0x7f385a
// 004f7dcb  83c404               add esp, 4
// 004f7dce  8bc6                 mov eax, esi
// 004f7dd0  5e                   pop esi
// 004f7dd1  59                   pop ecx
// 004f7dd2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
