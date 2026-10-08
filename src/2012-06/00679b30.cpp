// roc 2012-06 00679b30  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00679b30
//
// 00679b30  51                   push ecx
// 00679b31  6a18                 push 0x18
// 00679b33  c744240400000000     mov dword ptr [esp + 4], 0
// 00679b3b  e8da853000           call 0x98211a
// 00679b40  83c404               add esp, 4
// 00679b43  85c0                 test eax, eax
// 00679b45  7424                 je 0x679b6b
// 00679b47  c700a0deb800         mov dword ptr [eax], 0xb8dea0
// 00679b4d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00679b51  894808               mov dword ptr [eax + 8], ecx
// 00679b54  8b542410             mov edx, dword ptr [esp + 0x10]
// 00679b58  89500c               mov dword ptr [eax + 0xc], edx
// 00679b5b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00679b5f  894810               mov dword ptr [eax + 0x10], ecx
// 00679b62  8b542418             mov edx, dword ptr [esp + 0x18]
// 00679b66  895014               mov dword ptr [eax + 0x14], edx
// 00679b69  eb02                 jmp 0x679b6d
// 00679b6b  33c0                 xor eax, eax
// 00679b6d  56                   push esi
// 00679b6e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00679b72  6a00                 push 0
// 00679b74  8906                 mov dword ptr [esi], eax
// 00679b76  e899853000           call 0x982114
// 00679b7b  83c404               add esp, 4
// 00679b7e  8bc6                 mov eax, esi
// 00679b80  5e                   pop esi
// 00679b81  59                   pop ecx
// 00679b82  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
