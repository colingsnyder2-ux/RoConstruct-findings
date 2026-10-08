// roc 2010-06 00622630  unit: RBX::VStockSound::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00622630
//
// 00622630  51                   push ecx
// 00622631  6a18                 push 0x18
// 00622633  c744240400000000     mov dword ptr [esp + 4], 0
// 0062263b  e860531800           call 0x7a79a0
// 00622640  83c404               add esp, 4
// 00622643  85c0                 test eax, eax
// 00622645  7424                 je 0x62266b
// 00622647  c7002447a300         mov dword ptr [eax], 0xa34724
// 0062264d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00622651  894808               mov dword ptr [eax + 8], ecx
// 00622654  8b542410             mov edx, dword ptr [esp + 0x10]
// 00622658  89500c               mov dword ptr [eax + 0xc], edx
// 0062265b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0062265f  894810               mov dword ptr [eax + 0x10], ecx
// 00622662  8b542418             mov edx, dword ptr [esp + 0x18]
// 00622666  895014               mov dword ptr [eax + 0x14], edx
// 00622669  eb02                 jmp 0x62266d
// 0062266b  33c0                 xor eax, eax
// 0062266d  56                   push esi
// 0062266e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00622672  6a00                 push 0
// 00622674  8906                 mov dword ptr [esi], eax
// 00622676  e81f531800           call 0x7a799a
// 0062267b  83c404               add esp, 4
// 0062267e  8bc6                 mov eax, esi
// 00622680  5e                   pop esi
// 00622681  59                   pop ecx
// 00622682  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
