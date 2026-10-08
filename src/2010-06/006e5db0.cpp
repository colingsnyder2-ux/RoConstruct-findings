// roc 2010-06 006e5db0  unit: RBX::VLuaDragger::?$BoundFuncDesc  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006e5db0
//
// 006e5db0  51                   push ecx
// 006e5db1  6a18                 push 0x18
// 006e5db3  c744240400000000     mov dword ptr [esp + 4], 0
// 006e5dbb  e8e01b0c00           call 0x7a79a0
// 006e5dc0  83c404               add esp, 4
// 006e5dc3  85c0                 test eax, eax
// 006e5dc5  7424                 je 0x6e5deb
// 006e5dc7  c7002496a400         mov dword ptr [eax], 0xa49624
// 006e5dcd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e5dd1  894808               mov dword ptr [eax + 8], ecx
// 006e5dd4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006e5dd8  89500c               mov dword ptr [eax + 0xc], edx
// 006e5ddb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006e5ddf  894810               mov dword ptr [eax + 0x10], ecx
// 006e5de2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006e5de6  895014               mov dword ptr [eax + 0x14], edx
// 006e5de9  eb02                 jmp 0x6e5ded
// 006e5deb  33c0                 xor eax, eax
// 006e5ded  56                   push esi
// 006e5dee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e5df2  6a00                 push 0
// 006e5df4  8906                 mov dword ptr [esi], eax
// 006e5df6  e89f1b0c00           call 0x7a799a
// 006e5dfb  83c404               add esp, 4
// 006e5dfe  8bc6                 mov eax, esi
// 006e5e00  5e                   pop esi
// 006e5e01  59                   pop ecx
// 006e5e02  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
