// roc 2009-12 006b4060  unit: RBX::Soundscape::VSoundService::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006b4060
//
// 006b4060  51                   push ecx
// 006b4061  6a18                 push 0x18
// 006b4063  c744240400000000     mov dword ptr [esp + 4], 0
// 006b406b  e8f0f71300           call 0x7f3860
// 006b4070  83c404               add esp, 4
// 006b4073  85c0                 test eax, eax
// 006b4075  7424                 je 0x6b409b
// 006b4077  c7002c5c9d00         mov dword ptr [eax], 0x9d5c2c
// 006b407d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006b4081  894808               mov dword ptr [eax + 8], ecx
// 006b4084  8b542410             mov edx, dword ptr [esp + 0x10]
// 006b4088  89500c               mov dword ptr [eax + 0xc], edx
// 006b408b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006b408f  894810               mov dword ptr [eax + 0x10], ecx
// 006b4092  8b542418             mov edx, dword ptr [esp + 0x18]
// 006b4096  895014               mov dword ptr [eax + 0x14], edx
// 006b4099  eb02                 jmp 0x6b409d
// 006b409b  33c0                 xor eax, eax
// 006b409d  56                   push esi
// 006b409e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006b40a2  6a00                 push 0
// 006b40a4  8906                 mov dword ptr [esi], eax
// 006b40a6  e8aff71300           call 0x7f385a
// 006b40ab  83c404               add esp, 4
// 006b40ae  8bc6                 mov eax, esi
// 006b40b0  5e                   pop esi
// 006b40b1  59                   pop ecx
// 006b40b2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
