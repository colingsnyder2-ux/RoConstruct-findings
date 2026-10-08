// roc 2010-06 006c4490  unit: RBX::Flag  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c4490
//
// 006c4490  51                   push ecx
// 006c4491  6a18                 push 0x18
// 006c4493  c744240400000000     mov dword ptr [esp + 4], 0
// 006c449b  e800350e00           call 0x7a79a0
// 006c44a0  83c404               add esp, 4
// 006c44a3  85c0                 test eax, eax
// 006c44a5  7424                 je 0x6c44cb
// 006c44a7  c7002843a400         mov dword ptr [eax], 0xa44328
// 006c44ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c44b1  894808               mov dword ptr [eax + 8], ecx
// 006c44b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006c44b8  89500c               mov dword ptr [eax + 0xc], edx
// 006c44bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006c44bf  894810               mov dword ptr [eax + 0x10], ecx
// 006c44c2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006c44c6  895014               mov dword ptr [eax + 0x14], edx
// 006c44c9  eb02                 jmp 0x6c44cd
// 006c44cb  33c0                 xor eax, eax
// 006c44cd  56                   push esi
// 006c44ce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c44d2  6a00                 push 0
// 006c44d4  8906                 mov dword ptr [esi], eax
// 006c44d6  e8bf340e00           call 0x7a799a
// 006c44db  83c404               add esp, 4
// 006c44de  8bc6                 mov eax, esi
// 006c44e0  5e                   pop esi
// 006c44e1  59                   pop ecx
// 006c44e2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
