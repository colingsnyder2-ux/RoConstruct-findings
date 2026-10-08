// roc 2012-06 006799b0  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006799b0
//
// 006799b0  51                   push ecx
// 006799b1  6a18                 push 0x18
// 006799b3  c744240400000000     mov dword ptr [esp + 4], 0
// 006799bb  e85a873000           call 0x98211a
// 006799c0  83c404               add esp, 4
// 006799c3  85c0                 test eax, eax
// 006799c5  7424                 je 0x6799eb
// 006799c7  c70050deb800         mov dword ptr [eax], 0xb8de50
// 006799cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006799d1  894808               mov dword ptr [eax + 8], ecx
// 006799d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006799d8  89500c               mov dword ptr [eax + 0xc], edx
// 006799db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006799df  894810               mov dword ptr [eax + 0x10], ecx
// 006799e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006799e6  895014               mov dword ptr [eax + 0x14], edx
// 006799e9  eb02                 jmp 0x6799ed
// 006799eb  33c0                 xor eax, eax
// 006799ed  56                   push esi
// 006799ee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006799f2  6a00                 push 0
// 006799f4  8906                 mov dword ptr [esi], eax
// 006799f6  e819873000           call 0x982114
// 006799fb  83c404               add esp, 4
// 006799fe  8bc6                 mov eax, esi
// 00679a00  5e                   pop esi
// 00679a01  59                   pop ecx
// 00679a02  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
