// roc 2010-06 0058ea90  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058ea90
//
// 0058ea90  51                   push ecx
// 0058ea91  6a18                 push 0x18
// 0058ea93  c744240400000000     mov dword ptr [esp + 4], 0
// 0058ea9b  e8008f2100           call 0x7a79a0
// 0058eaa0  83c404               add esp, 4
// 0058eaa3  85c0                 test eax, eax
// 0058eaa5  7424                 je 0x58eacb
// 0058eaa7  c700548ca200         mov dword ptr [eax], 0xa28c54
// 0058eaad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058eab1  894808               mov dword ptr [eax + 8], ecx
// 0058eab4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058eab8  89500c               mov dword ptr [eax + 0xc], edx
// 0058eabb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0058eabf  894810               mov dword ptr [eax + 0x10], ecx
// 0058eac2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058eac6  895014               mov dword ptr [eax + 0x14], edx
// 0058eac9  eb02                 jmp 0x58eacd
// 0058eacb  33c0                 xor eax, eax
// 0058eacd  56                   push esi
// 0058eace  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0058ead2  6a00                 push 0
// 0058ead4  8906                 mov dword ptr [esi], eax
// 0058ead6  e8bf8e2100           call 0x7a799a
// 0058eadb  83c404               add esp, 4
// 0058eade  8bc6                 mov eax, esi
// 0058eae0  5e                   pop esi
// 0058eae1  59                   pop ecx
// 0058eae2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
