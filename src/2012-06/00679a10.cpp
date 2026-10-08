// roc 2012-06 00679a10  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00679a10
//
// 00679a10  51                   push ecx
// 00679a11  6a18                 push 0x18
// 00679a13  c744240400000000     mov dword ptr [esp + 4], 0
// 00679a1b  e8fa863000           call 0x98211a
// 00679a20  83c404               add esp, 4
// 00679a23  85c0                 test eax, eax
// 00679a25  7424                 je 0x679a4b
// 00679a27  c70064deb800         mov dword ptr [eax], 0xb8de64
// 00679a2d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00679a31  894808               mov dword ptr [eax + 8], ecx
// 00679a34  8b542410             mov edx, dword ptr [esp + 0x10]
// 00679a38  89500c               mov dword ptr [eax + 0xc], edx
// 00679a3b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00679a3f  894810               mov dword ptr [eax + 0x10], ecx
// 00679a42  8b542418             mov edx, dword ptr [esp + 0x18]
// 00679a46  895014               mov dword ptr [eax + 0x14], edx
// 00679a49  eb02                 jmp 0x679a4d
// 00679a4b  33c0                 xor eax, eax
// 00679a4d  56                   push esi
// 00679a4e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00679a52  6a00                 push 0
// 00679a54  8906                 mov dword ptr [esi], eax
// 00679a56  e8b9863000           call 0x982114
// 00679a5b  83c404               add esp, 4
// 00679a5e  8bc6                 mov eax, esi
// 00679a60  5e                   pop esi
// 00679a61  59                   pop ecx
// 00679a62  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
