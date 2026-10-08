// roc 2010-06 006e2ba0  unit: RBX::TextBox  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006e2ba0
//
// 006e2ba0  51                   push ecx
// 006e2ba1  6a18                 push 0x18
// 006e2ba3  c744240400000000     mov dword ptr [esp + 4], 0
// 006e2bab  e8f04d0c00           call 0x7a79a0
// 006e2bb0  83c404               add esp, 4
// 006e2bb3  85c0                 test eax, eax
// 006e2bb5  7424                 je 0x6e2bdb
// 006e2bb7  c7004c8ca400         mov dword ptr [eax], 0xa48c4c
// 006e2bbd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e2bc1  894808               mov dword ptr [eax + 8], ecx
// 006e2bc4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006e2bc8  89500c               mov dword ptr [eax + 0xc], edx
// 006e2bcb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006e2bcf  894810               mov dword ptr [eax + 0x10], ecx
// 006e2bd2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006e2bd6  895014               mov dword ptr [eax + 0x14], edx
// 006e2bd9  eb02                 jmp 0x6e2bdd
// 006e2bdb  33c0                 xor eax, eax
// 006e2bdd  56                   push esi
// 006e2bde  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e2be2  6a00                 push 0
// 006e2be4  8906                 mov dword ptr [esi], eax
// 006e2be6  e8af4d0c00           call 0x7a799a
// 006e2beb  83c404               add esp, 4
// 006e2bee  8bc6                 mov eax, esi
// 006e2bf0  5e                   pop esi
// 006e2bf1  59                   pop ecx
// 006e2bf2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
