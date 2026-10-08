// roc 2010-06 00666840  unit: RBX::VStarterGuiService::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00666840
//
// 00666840  51                   push ecx
// 00666841  6a18                 push 0x18
// 00666843  c744240400000000     mov dword ptr [esp + 4], 0
// 0066684b  e850111400           call 0x7a79a0
// 00666850  83c404               add esp, 4
// 00666853  85c0                 test eax, eax
// 00666855  7424                 je 0x66687b
// 00666857  c70084aca300         mov dword ptr [eax], 0xa3ac84
// 0066685d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00666861  894808               mov dword ptr [eax + 8], ecx
// 00666864  8b542410             mov edx, dword ptr [esp + 0x10]
// 00666868  89500c               mov dword ptr [eax + 0xc], edx
// 0066686b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066686f  894810               mov dword ptr [eax + 0x10], ecx
// 00666872  8b542418             mov edx, dword ptr [esp + 0x18]
// 00666876  895014               mov dword ptr [eax + 0x14], edx
// 00666879  eb02                 jmp 0x66687d
// 0066687b  33c0                 xor eax, eax
// 0066687d  56                   push esi
// 0066687e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00666882  6a00                 push 0
// 00666884  8906                 mov dword ptr [esi], eax
// 00666886  e80f111400           call 0x7a799a
// 0066688b  83c404               add esp, 4
// 0066688e  8bc6                 mov eax, esi
// 00666890  5e                   pop esi
// 00666891  59                   pop ecx
// 00666892  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
