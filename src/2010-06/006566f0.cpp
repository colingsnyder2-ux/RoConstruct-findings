// roc 2010-06 006566f0  unit: RBX::VKeyframe::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006566f0
//
// 006566f0  51                   push ecx
// 006566f1  6a18                 push 0x18
// 006566f3  c744240400000000     mov dword ptr [esp + 4], 0
// 006566fb  e8a0121500           call 0x7a79a0
// 00656700  83c404               add esp, 4
// 00656703  85c0                 test eax, eax
// 00656705  7424                 je 0x65672b
// 00656707  c700949ea300         mov dword ptr [eax], 0xa39e94
// 0065670d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00656711  894808               mov dword ptr [eax + 8], ecx
// 00656714  8b542410             mov edx, dword ptr [esp + 0x10]
// 00656718  89500c               mov dword ptr [eax + 0xc], edx
// 0065671b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065671f  894810               mov dword ptr [eax + 0x10], ecx
// 00656722  8b542418             mov edx, dword ptr [esp + 0x18]
// 00656726  895014               mov dword ptr [eax + 0x14], edx
// 00656729  eb02                 jmp 0x65672d
// 0065672b  33c0                 xor eax, eax
// 0065672d  56                   push esi
// 0065672e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00656732  6a00                 push 0
// 00656734  8906                 mov dword ptr [esi], eax
// 00656736  e85f121500           call 0x7a799a
// 0065673b  83c404               add esp, 4
// 0065673e  8bc6                 mov eax, esi
// 00656740  5e                   pop esi
// 00656741  59                   pop ecx
// 00656742  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
