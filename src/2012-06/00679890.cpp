// roc 2012-06 00679890  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00679890
//
// 00679890  51                   push ecx
// 00679891  6a18                 push 0x18
// 00679893  c744240400000000     mov dword ptr [esp + 4], 0
// 0067989b  e87a883000           call 0x98211a
// 006798a0  83c404               add esp, 4
// 006798a3  85c0                 test eax, eax
// 006798a5  7424                 je 0x6798cb
// 006798a7  c70014deb800         mov dword ptr [eax], 0xb8de14
// 006798ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006798b1  894808               mov dword ptr [eax + 8], ecx
// 006798b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006798b8  89500c               mov dword ptr [eax + 0xc], edx
// 006798bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006798bf  894810               mov dword ptr [eax + 0x10], ecx
// 006798c2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006798c6  895014               mov dword ptr [eax + 0x14], edx
// 006798c9  eb02                 jmp 0x6798cd
// 006798cb  33c0                 xor eax, eax
// 006798cd  56                   push esi
// 006798ce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006798d2  6a00                 push 0
// 006798d4  8906                 mov dword ptr [esi], eax
// 006798d6  e839883000           call 0x982114
// 006798db  83c404               add esp, 4
// 006798de  8bc6                 mov eax, esi
// 006798e0  5e                   pop esi
// 006798e1  59                   pop ecx
// 006798e2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
