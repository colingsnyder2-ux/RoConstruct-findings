// roc 2012-06 00679950  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00679950
//
// 00679950  51                   push ecx
// 00679951  6a18                 push 0x18
// 00679953  c744240400000000     mov dword ptr [esp + 4], 0
// 0067995b  e8ba873000           call 0x98211a
// 00679960  83c404               add esp, 4
// 00679963  85c0                 test eax, eax
// 00679965  7424                 je 0x67998b
// 00679967  c7003cdeb800         mov dword ptr [eax], 0xb8de3c
// 0067996d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00679971  894808               mov dword ptr [eax + 8], ecx
// 00679974  8b542410             mov edx, dword ptr [esp + 0x10]
// 00679978  89500c               mov dword ptr [eax + 0xc], edx
// 0067997b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0067997f  894810               mov dword ptr [eax + 0x10], ecx
// 00679982  8b542418             mov edx, dword ptr [esp + 0x18]
// 00679986  895014               mov dword ptr [eax + 0x14], edx
// 00679989  eb02                 jmp 0x67998d
// 0067998b  33c0                 xor eax, eax
// 0067998d  56                   push esi
// 0067998e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00679992  6a00                 push 0
// 00679994  8906                 mov dword ptr [esi], eax
// 00679996  e879873000           call 0x982114
// 0067999b  83c404               add esp, 4
// 0067999e  8bc6                 mov eax, esi
// 006799a0  5e                   pop esi
// 006799a1  59                   pop ecx
// 006799a2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
