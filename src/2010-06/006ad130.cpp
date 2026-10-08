// roc 2010-06 006ad130  unit: RBX::VNetworkSettings::?$BoundPropGetSet  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006ad130
//
// 006ad130  51                   push ecx
// 006ad131  6a18                 push 0x18
// 006ad133  c744240400000000     mov dword ptr [esp + 4], 0
// 006ad13b  e860a80f00           call 0x7a79a0
// 006ad140  83c404               add esp, 4
// 006ad143  85c0                 test eax, eax
// 006ad145  7424                 je 0x6ad16b
// 006ad147  c700bc13a400         mov dword ptr [eax], 0xa413bc
// 006ad14d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ad151  894808               mov dword ptr [eax + 8], ecx
// 006ad154  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ad158  89500c               mov dword ptr [eax + 0xc], edx
// 006ad15b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ad15f  894810               mov dword ptr [eax + 0x10], ecx
// 006ad162  8b542418             mov edx, dword ptr [esp + 0x18]
// 006ad166  895014               mov dword ptr [eax + 0x14], edx
// 006ad169  eb02                 jmp 0x6ad16d
// 006ad16b  33c0                 xor eax, eax
// 006ad16d  56                   push esi
// 006ad16e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ad172  6a00                 push 0
// 006ad174  8906                 mov dword ptr [esi], eax
// 006ad176  e81fa80f00           call 0x7a799a
// 006ad17b  83c404               add esp, 4
// 006ad17e  8bc6                 mov eax, esi
// 006ad180  5e                   pop esi
// 006ad181  59                   pop ecx
// 006ad182  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
