// roc 2012-06 00878150  unit: DummyJob  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00878150
//
// 00878150  51                   push ecx
// 00878151  6a18                 push 0x18
// 00878153  c744240400000000     mov dword ptr [esp + 4], 0
// 0087815b  e8ba9f1000           call 0x98211a
// 00878160  83c404               add esp, 4
// 00878163  85c0                 test eax, eax
// 00878165  7424                 je 0x87818b
// 00878167  c7003c7dbd00         mov dword ptr [eax], 0xbd7d3c
// 0087816d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00878171  894808               mov dword ptr [eax + 8], ecx
// 00878174  8b542410             mov edx, dword ptr [esp + 0x10]
// 00878178  89500c               mov dword ptr [eax + 0xc], edx
// 0087817b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0087817f  894810               mov dword ptr [eax + 0x10], ecx
// 00878182  8b542418             mov edx, dword ptr [esp + 0x18]
// 00878186  895014               mov dword ptr [eax + 0x14], edx
// 00878189  eb02                 jmp 0x87818d
// 0087818b  33c0                 xor eax, eax
// 0087818d  56                   push esi
// 0087818e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00878192  6a00                 push 0
// 00878194  8906                 mov dword ptr [esi], eax
// 00878196  e8799f1000           call 0x982114
// 0087819b  83c404               add esp, 4
// 0087819e  8bc6                 mov eax, esi
// 008781a0  5e                   pop esi
// 008781a1  59                   pop ecx
// 008781a2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
