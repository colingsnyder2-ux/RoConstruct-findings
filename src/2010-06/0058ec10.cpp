// roc 2010-06 0058ec10  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058ec10
//
// 0058ec10  51                   push ecx
// 0058ec11  6a18                 push 0x18
// 0058ec13  c744240400000000     mov dword ptr [esp + 4], 0
// 0058ec1b  e8808d2100           call 0x7a79a0
// 0058ec20  83c404               add esp, 4
// 0058ec23  85c0                 test eax, eax
// 0058ec25  7424                 je 0x58ec4b
// 0058ec27  c700b48ca200         mov dword ptr [eax], 0xa28cb4
// 0058ec2d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058ec31  894808               mov dword ptr [eax + 8], ecx
// 0058ec34  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058ec38  89500c               mov dword ptr [eax + 0xc], edx
// 0058ec3b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0058ec3f  894810               mov dword ptr [eax + 0x10], ecx
// 0058ec42  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058ec46  895014               mov dword ptr [eax + 0x14], edx
// 0058ec49  eb02                 jmp 0x58ec4d
// 0058ec4b  33c0                 xor eax, eax
// 0058ec4d  56                   push esi
// 0058ec4e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0058ec52  6a00                 push 0
// 0058ec54  8906                 mov dword ptr [esi], eax
// 0058ec56  e83f8d2100           call 0x7a799a
// 0058ec5b  83c404               add esp, 4
// 0058ec5e  8bc6                 mov eax, esi
// 0058ec60  5e                   pop esi
// 0058ec61  59                   pop ecx
// 0058ec62  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
