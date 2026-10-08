// roc 2012-06 008121d0  unit: RBX::VGlue::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008121d0
//
// 008121d0  51                   push ecx
// 008121d1  6a18                 push 0x18
// 008121d3  c744240400000000     mov dword ptr [esp + 4], 0
// 008121db  e83aff1600           call 0x98211a
// 008121e0  83c404               add esp, 4
// 008121e3  85c0                 test eax, eax
// 008121e5  7424                 je 0x81220b
// 008121e7  c7000061bc00         mov dword ptr [eax], 0xbc6100
// 008121ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008121f1  894808               mov dword ptr [eax + 8], ecx
// 008121f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008121f8  89500c               mov dword ptr [eax + 0xc], edx
// 008121fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008121ff  894810               mov dword ptr [eax + 0x10], ecx
// 00812202  8b542418             mov edx, dword ptr [esp + 0x18]
// 00812206  895014               mov dword ptr [eax + 0x14], edx
// 00812209  eb02                 jmp 0x81220d
// 0081220b  33c0                 xor eax, eax
// 0081220d  56                   push esi
// 0081220e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00812212  6a00                 push 0
// 00812214  8906                 mov dword ptr [esi], eax
// 00812216  e8f9fe1600           call 0x982114
// 0081221b  83c404               add esp, 4
// 0081221e  8bc6                 mov eax, esi
// 00812220  5e                   pop esi
// 00812221  59                   pop ecx
// 00812222  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
