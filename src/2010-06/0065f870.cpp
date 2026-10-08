// roc 2010-06 0065f870  unit: RBX::VPlayerMouse::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0065f870
//
// 0065f870  51                   push ecx
// 0065f871  6a18                 push 0x18
// 0065f873  c744240400000000     mov dword ptr [esp + 4], 0
// 0065f87b  e820811400           call 0x7a79a0
// 0065f880  83c404               add esp, 4
// 0065f883  85c0                 test eax, eax
// 0065f885  7424                 je 0x65f8ab
// 0065f887  c700dca6a300         mov dword ptr [eax], 0xa3a6dc
// 0065f88d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065f891  894808               mov dword ptr [eax + 8], ecx
// 0065f894  8b542410             mov edx, dword ptr [esp + 0x10]
// 0065f898  89500c               mov dword ptr [eax + 0xc], edx
// 0065f89b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065f89f  894810               mov dword ptr [eax + 0x10], ecx
// 0065f8a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0065f8a6  895014               mov dword ptr [eax + 0x14], edx
// 0065f8a9  eb02                 jmp 0x65f8ad
// 0065f8ab  33c0                 xor eax, eax
// 0065f8ad  56                   push esi
// 0065f8ae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0065f8b2  6a00                 push 0
// 0065f8b4  8906                 mov dword ptr [esi], eax
// 0065f8b6  e8df801400           call 0x7a799a
// 0065f8bb  83c404               add esp, 4
// 0065f8be  8bc6                 mov eax, esi
// 0065f8c0  5e                   pop esi
// 0065f8c1  59                   pop ecx
// 0065f8c2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
