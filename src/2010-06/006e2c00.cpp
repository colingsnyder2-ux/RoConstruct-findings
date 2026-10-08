// roc 2010-06 006e2c00  unit: RBX::TextBox  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006e2c00
//
// 006e2c00  51                   push ecx
// 006e2c01  6a18                 push 0x18
// 006e2c03  c744240400000000     mov dword ptr [esp + 4], 0
// 006e2c0b  e8904d0c00           call 0x7a79a0
// 006e2c10  83c404               add esp, 4
// 006e2c13  85c0                 test eax, eax
// 006e2c15  7424                 je 0x6e2c3b
// 006e2c17  c700648ca400         mov dword ptr [eax], 0xa48c64
// 006e2c1d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e2c21  894808               mov dword ptr [eax + 8], ecx
// 006e2c24  8b542410             mov edx, dword ptr [esp + 0x10]
// 006e2c28  89500c               mov dword ptr [eax + 0xc], edx
// 006e2c2b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006e2c2f  894810               mov dword ptr [eax + 0x10], ecx
// 006e2c32  8b542418             mov edx, dword ptr [esp + 0x18]
// 006e2c36  895014               mov dword ptr [eax + 0x14], edx
// 006e2c39  eb02                 jmp 0x6e2c3d
// 006e2c3b  33c0                 xor eax, eax
// 006e2c3d  56                   push esi
// 006e2c3e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e2c42  6a00                 push 0
// 006e2c44  8906                 mov dword ptr [esi], eax
// 006e2c46  e84f4d0c00           call 0x7a799a
// 006e2c4b  83c404               add esp, 4
// 006e2c4e  8bc6                 mov eax, esi
// 006e2c50  5e                   pop esi
// 006e2c51  59                   pop ecx
// 006e2c52  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
