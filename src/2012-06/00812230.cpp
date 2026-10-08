// roc 2012-06 00812230  unit: RBX::VGlue::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00812230
//
// 00812230  51                   push ecx
// 00812231  6a18                 push 0x18
// 00812233  c744240400000000     mov dword ptr [esp + 4], 0
// 0081223b  e8dafe1600           call 0x98211a
// 00812240  83c404               add esp, 4
// 00812243  85c0                 test eax, eax
// 00812245  7424                 je 0x81226b
// 00812247  c7001461bc00         mov dword ptr [eax], 0xbc6114
// 0081224d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00812251  894808               mov dword ptr [eax + 8], ecx
// 00812254  8b542410             mov edx, dword ptr [esp + 0x10]
// 00812258  89500c               mov dword ptr [eax + 0xc], edx
// 0081225b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081225f  894810               mov dword ptr [eax + 0x10], ecx
// 00812262  8b542418             mov edx, dword ptr [esp + 0x18]
// 00812266  895014               mov dword ptr [eax + 0x14], edx
// 00812269  eb02                 jmp 0x81226d
// 0081226b  33c0                 xor eax, eax
// 0081226d  56                   push esi
// 0081226e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00812272  6a00                 push 0
// 00812274  8906                 mov dword ptr [esi], eax
// 00812276  e899fe1600           call 0x982114
// 0081227b  83c404               add esp, 4
// 0081227e  8bc6                 mov eax, esi
// 00812280  5e                   pop esi
// 00812281  59                   pop ecx
// 00812282  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
