// roc 2012-06 0069a110  unit: RBX::VTeam::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0069a110
//
// 0069a110  51                   push ecx
// 0069a111  6a18                 push 0x18
// 0069a113  c744240400000000     mov dword ptr [esp + 4], 0
// 0069a11b  e8fa7f2e00           call 0x98211a
// 0069a120  83c404               add esp, 4
// 0069a123  85c0                 test eax, eax
// 0069a125  7424                 je 0x69a14b
// 0069a127  c700703bb900         mov dword ptr [eax], 0xb93b70
// 0069a12d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0069a131  894808               mov dword ptr [eax + 8], ecx
// 0069a134  8b542410             mov edx, dword ptr [esp + 0x10]
// 0069a138  89500c               mov dword ptr [eax + 0xc], edx
// 0069a13b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069a13f  894810               mov dword ptr [eax + 0x10], ecx
// 0069a142  8b542418             mov edx, dword ptr [esp + 0x18]
// 0069a146  895014               mov dword ptr [eax + 0x14], edx
// 0069a149  eb02                 jmp 0x69a14d
// 0069a14b  33c0                 xor eax, eax
// 0069a14d  56                   push esi
// 0069a14e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0069a152  6a00                 push 0
// 0069a154  8906                 mov dword ptr [esi], eax
// 0069a156  e8b97f2e00           call 0x982114
// 0069a15b  83c404               add esp, 4
// 0069a15e  8bc6                 mov eax, esi
// 0069a160  5e                   pop esi
// 0069a161  59                   pop ecx
// 0069a162  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
