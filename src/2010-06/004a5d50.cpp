// roc 2010-06 004a5d50  unit: RBX::VBrickColor::?$holder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a5d50
//
// 004a5d50  51                   push ecx
// 004a5d51  6a18                 push 0x18
// 004a5d53  c744240400000000     mov dword ptr [esp + 4], 0
// 004a5d5b  e8401c3000           call 0x7a79a0
// 004a5d60  83c404               add esp, 4
// 004a5d63  85c0                 test eax, eax
// 004a5d65  7424                 je 0x4a5d8b
// 004a5d67  c700347ea100         mov dword ptr [eax], 0xa17e34
// 004a5d6d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a5d71  894808               mov dword ptr [eax + 8], ecx
// 004a5d74  8b542410             mov edx, dword ptr [esp + 0x10]
// 004a5d78  89500c               mov dword ptr [eax + 0xc], edx
// 004a5d7b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004a5d7f  894810               mov dword ptr [eax + 0x10], ecx
// 004a5d82  8b542418             mov edx, dword ptr [esp + 0x18]
// 004a5d86  895014               mov dword ptr [eax + 0x14], edx
// 004a5d89  eb02                 jmp 0x4a5d8d
// 004a5d8b  33c0                 xor eax, eax
// 004a5d8d  56                   push esi
// 004a5d8e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004a5d92  6a00                 push 0
// 004a5d94  8906                 mov dword ptr [esi], eax
// 004a5d96  e8ff1b3000           call 0x7a799a
// 004a5d9b  83c404               add esp, 4
// 004a5d9e  8bc6                 mov eax, esi
// 004a5da0  5e                   pop esi
// 004a5da1  59                   pop ecx
// 004a5da2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
