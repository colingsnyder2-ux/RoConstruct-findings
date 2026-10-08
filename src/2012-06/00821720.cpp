// roc 2012-06 00821720  unit: RBX::CharacterMesh  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00821720
//
// 00821720  51                   push ecx
// 00821721  6a18                 push 0x18
// 00821723  c744240400000000     mov dword ptr [esp + 4], 0
// 0082172b  e8ea091600           call 0x98211a
// 00821730  83c404               add esp, 4
// 00821733  85c0                 test eax, eax
// 00821735  7424                 je 0x82175b
// 00821737  c700c0bcbc00         mov dword ptr [eax], 0xbcbcc0
// 0082173d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00821741  894808               mov dword ptr [eax + 8], ecx
// 00821744  8b542410             mov edx, dword ptr [esp + 0x10]
// 00821748  89500c               mov dword ptr [eax + 0xc], edx
// 0082174b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0082174f  894810               mov dword ptr [eax + 0x10], ecx
// 00821752  8b542418             mov edx, dword ptr [esp + 0x18]
// 00821756  895014               mov dword ptr [eax + 0x14], edx
// 00821759  eb02                 jmp 0x82175d
// 0082175b  33c0                 xor eax, eax
// 0082175d  56                   push esi
// 0082175e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00821762  6a00                 push 0
// 00821764  8906                 mov dword ptr [esi], eax
// 00821766  e8a9091600           call 0x982114
// 0082176b  83c404               add esp, 4
// 0082176e  8bc6                 mov eax, esi
// 00821770  5e                   pop esi
// 00821771  59                   pop ecx
// 00821772  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
