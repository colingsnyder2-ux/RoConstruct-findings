// roc 2012-06 00679ad0  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00679ad0
//
// 00679ad0  51                   push ecx
// 00679ad1  6a18                 push 0x18
// 00679ad3  c744240400000000     mov dword ptr [esp + 4], 0
// 00679adb  e83a863000           call 0x98211a
// 00679ae0  83c404               add esp, 4
// 00679ae3  85c0                 test eax, eax
// 00679ae5  7424                 je 0x679b0b
// 00679ae7  c7008cdeb800         mov dword ptr [eax], 0xb8de8c
// 00679aed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00679af1  894808               mov dword ptr [eax + 8], ecx
// 00679af4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00679af8  89500c               mov dword ptr [eax + 0xc], edx
// 00679afb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00679aff  894810               mov dword ptr [eax + 0x10], ecx
// 00679b02  8b542418             mov edx, dword ptr [esp + 0x18]
// 00679b06  895014               mov dword ptr [eax + 0x14], edx
// 00679b09  eb02                 jmp 0x679b0d
// 00679b0b  33c0                 xor eax, eax
// 00679b0d  56                   push esi
// 00679b0e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00679b12  6a00                 push 0
// 00679b14  8906                 mov dword ptr [esi], eax
// 00679b16  e8f9853000           call 0x982114
// 00679b1b  83c404               add esp, 4
// 00679b1e  8bc6                 mov eax, esi
// 00679b20  5e                   pop esi
// 00679b21  59                   pop ecx
// 00679b22  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
