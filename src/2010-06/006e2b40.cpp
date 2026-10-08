// roc 2010-06 006e2b40  unit: RBX::TextBox  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006e2b40
//
// 006e2b40  51                   push ecx
// 006e2b41  6a18                 push 0x18
// 006e2b43  c744240400000000     mov dword ptr [esp + 4], 0
// 006e2b4b  e8504e0c00           call 0x7a79a0
// 006e2b50  83c404               add esp, 4
// 006e2b53  85c0                 test eax, eax
// 006e2b55  7424                 je 0x6e2b7b
// 006e2b57  c700348ca400         mov dword ptr [eax], 0xa48c34
// 006e2b5d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e2b61  894808               mov dword ptr [eax + 8], ecx
// 006e2b64  8b542410             mov edx, dword ptr [esp + 0x10]
// 006e2b68  89500c               mov dword ptr [eax + 0xc], edx
// 006e2b6b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006e2b6f  894810               mov dword ptr [eax + 0x10], ecx
// 006e2b72  8b542418             mov edx, dword ptr [esp + 0x18]
// 006e2b76  895014               mov dword ptr [eax + 0x14], edx
// 006e2b79  eb02                 jmp 0x6e2b7d
// 006e2b7b  33c0                 xor eax, eax
// 006e2b7d  56                   push esi
// 006e2b7e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e2b82  6a00                 push 0
// 006e2b84  8906                 mov dword ptr [esi], eax
// 006e2b86  e80f4e0c00           call 0x7a799a
// 006e2b8b  83c404               add esp, 4
// 006e2b8e  8bc6                 mov eax, esi
// 006e2b90  5e                   pop esi
// 006e2b91  59                   pop ecx
// 006e2b92  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
