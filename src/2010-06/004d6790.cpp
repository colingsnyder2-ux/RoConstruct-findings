// roc 2010-06 004d6790  unit: VAuthoringSettings::?$BoundPropGetSet  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004d6790
//
// 004d6790  51                   push ecx
// 004d6791  6a18                 push 0x18
// 004d6793  c744240400000000     mov dword ptr [esp + 4], 0
// 004d679b  e800122d00           call 0x7a79a0
// 004d67a0  83c404               add esp, 4
// 004d67a3  85c0                 test eax, eax
// 004d67a5  7424                 je 0x4d67cb
// 004d67a7  c700049ea100         mov dword ptr [eax], 0xa19e04
// 004d67ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d67b1  894808               mov dword ptr [eax + 8], ecx
// 004d67b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 004d67b8  89500c               mov dword ptr [eax + 0xc], edx
// 004d67bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004d67bf  894810               mov dword ptr [eax + 0x10], ecx
// 004d67c2  8b542418             mov edx, dword ptr [esp + 0x18]
// 004d67c6  895014               mov dword ptr [eax + 0x14], edx
// 004d67c9  eb02                 jmp 0x4d67cd
// 004d67cb  33c0                 xor eax, eax
// 004d67cd  56                   push esi
// 004d67ce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004d67d2  6a00                 push 0
// 004d67d4  8906                 mov dword ptr [esi], eax
// 004d67d6  e8bf112d00           call 0x7a799a
// 004d67db  83c404               add esp, 4
// 004d67de  8bc6                 mov eax, esi
// 004d67e0  5e                   pop esi
// 004d67e1  59                   pop ecx
// 004d67e2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
