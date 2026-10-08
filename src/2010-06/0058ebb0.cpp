// roc 2010-06 0058ebb0  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058ebb0
//
// 0058ebb0  51                   push ecx
// 0058ebb1  6a18                 push 0x18
// 0058ebb3  c744240400000000     mov dword ptr [esp + 4], 0
// 0058ebbb  e8e08d2100           call 0x7a79a0
// 0058ebc0  83c404               add esp, 4
// 0058ebc3  85c0                 test eax, eax
// 0058ebc5  7424                 je 0x58ebeb
// 0058ebc7  c7009c8ca200         mov dword ptr [eax], 0xa28c9c
// 0058ebcd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058ebd1  894808               mov dword ptr [eax + 8], ecx
// 0058ebd4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058ebd8  89500c               mov dword ptr [eax + 0xc], edx
// 0058ebdb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0058ebdf  894810               mov dword ptr [eax + 0x10], ecx
// 0058ebe2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058ebe6  895014               mov dword ptr [eax + 0x14], edx
// 0058ebe9  eb02                 jmp 0x58ebed
// 0058ebeb  33c0                 xor eax, eax
// 0058ebed  56                   push esi
// 0058ebee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0058ebf2  6a00                 push 0
// 0058ebf4  8906                 mov dword ptr [esi], eax
// 0058ebf6  e89f8d2100           call 0x7a799a
// 0058ebfb  83c404               add esp, 4
// 0058ebfe  8bc6                 mov eax, esi
// 0058ec00  5e                   pop esi
// 0058ec01  59                   pop ecx
// 0058ec02  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
