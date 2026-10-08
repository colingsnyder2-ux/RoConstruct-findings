// roc 2010-06 0058ea30  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058ea30
//
// 0058ea30  51                   push ecx
// 0058ea31  6a18                 push 0x18
// 0058ea33  c744240400000000     mov dword ptr [esp + 4], 0
// 0058ea3b  e8608f2100           call 0x7a79a0
// 0058ea40  83c404               add esp, 4
// 0058ea43  85c0                 test eax, eax
// 0058ea45  7424                 je 0x58ea6b
// 0058ea47  c7003c8ca200         mov dword ptr [eax], 0xa28c3c
// 0058ea4d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058ea51  894808               mov dword ptr [eax + 8], ecx
// 0058ea54  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058ea58  89500c               mov dword ptr [eax + 0xc], edx
// 0058ea5b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0058ea5f  894810               mov dword ptr [eax + 0x10], ecx
// 0058ea62  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058ea66  895014               mov dword ptr [eax + 0x14], edx
// 0058ea69  eb02                 jmp 0x58ea6d
// 0058ea6b  33c0                 xor eax, eax
// 0058ea6d  56                   push esi
// 0058ea6e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0058ea72  6a00                 push 0
// 0058ea74  8906                 mov dword ptr [esi], eax
// 0058ea76  e81f8f2100           call 0x7a799a
// 0058ea7b  83c404               add esp, 4
// 0058ea7e  8bc6                 mov eax, esi
// 0058ea80  5e                   pop esi
// 0058ea81  59                   pop ecx
// 0058ea82  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
