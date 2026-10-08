// roc 2012-06 008e6c70  unit: RBX::VSelectionPointLasso::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008e6c70
//
// 008e6c70  51                   push ecx
// 008e6c71  6a18                 push 0x18
// 008e6c73  c744240400000000     mov dword ptr [esp + 4], 0
// 008e6c7b  e89ab40900           call 0x98211a
// 008e6c80  83c404               add esp, 4
// 008e6c83  85c0                 test eax, eax
// 008e6c85  7424                 je 0x8e6cab
// 008e6c87  c7002ccfbe00         mov dword ptr [eax], 0xbecf2c
// 008e6c8d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e6c91  894808               mov dword ptr [eax + 8], ecx
// 008e6c94  8b542410             mov edx, dword ptr [esp + 0x10]
// 008e6c98  89500c               mov dword ptr [eax + 0xc], edx
// 008e6c9b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e6c9f  894810               mov dword ptr [eax + 0x10], ecx
// 008e6ca2  8b542418             mov edx, dword ptr [esp + 0x18]
// 008e6ca6  895014               mov dword ptr [eax + 0x14], edx
// 008e6ca9  eb02                 jmp 0x8e6cad
// 008e6cab  33c0                 xor eax, eax
// 008e6cad  56                   push esi
// 008e6cae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008e6cb2  6a00                 push 0
// 008e6cb4  8906                 mov dword ptr [esi], eax
// 008e6cb6  e859b40900           call 0x982114
// 008e6cbb  83c404               add esp, 4
// 008e6cbe  8bc6                 mov eax, esi
// 008e6cc0  5e                   pop esi
// 008e6cc1  59                   pop ecx
// 008e6cc2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
