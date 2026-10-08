// roc 2010-06 004c1990  unit: RBX::Network::Players::W4ChatOption::?$holder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c1990
//
// 004c1990  51                   push ecx
// 004c1991  6a18                 push 0x18
// 004c1993  c744240400000000     mov dword ptr [esp + 4], 0
// 004c199b  e800602e00           call 0x7a79a0
// 004c19a0  83c404               add esp, 4
// 004c19a3  85c0                 test eax, eax
// 004c19a5  7424                 je 0x4c19cb
// 004c19a7  c7004091a100         mov dword ptr [eax], 0xa19140
// 004c19ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c19b1  894808               mov dword ptr [eax + 8], ecx
// 004c19b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 004c19b8  89500c               mov dword ptr [eax + 0xc], edx
// 004c19bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004c19bf  894810               mov dword ptr [eax + 0x10], ecx
// 004c19c2  8b542418             mov edx, dword ptr [esp + 0x18]
// 004c19c6  895014               mov dword ptr [eax + 0x14], edx
// 004c19c9  eb02                 jmp 0x4c19cd
// 004c19cb  33c0                 xor eax, eax
// 004c19cd  56                   push esi
// 004c19ce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004c19d2  6a00                 push 0
// 004c19d4  8906                 mov dword ptr [esi], eax
// 004c19d6  e8bf5f2e00           call 0x7a799a
// 004c19db  83c404               add esp, 4
// 004c19de  8bc6                 mov eax, esi
// 004c19e0  5e                   pop esi
// 004c19e1  59                   pop ecx
// 004c19e2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
