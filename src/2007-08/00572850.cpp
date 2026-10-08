// roc 2007-08 00572850  unit: RBX::VDecal::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00572850
//
// 00572850  51                   push ecx
// 00572851  6a18                 push 0x18
// 00572853  c744240400000000     mov dword ptr [esp + 4], 0
// 0057285b  e896d60b00           call 0x62fef6
// 00572860  83c404               add esp, 4
// 00572863  85c0                 test eax, eax
// 00572865  7424                 je 0x57288b
// 00572867  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057286b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057286f  894808               mov dword ptr [eax + 8], ecx
// 00572872  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00572876  89500c               mov dword ptr [eax + 0xc], edx
// 00572879  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057287d  c70084a27a00         mov dword ptr [eax], 0x7aa284
// 00572883  894810               mov dword ptr [eax + 0x10], ecx
// 00572886  895014               mov dword ptr [eax + 0x14], edx
// 00572889  eb02                 jmp 0x57288d
// 0057288b  33c0                 xor eax, eax
// 0057288d  56                   push esi
// 0057288e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00572892  6a00                 push 0
// 00572894  c744240800000000     mov dword ptr [esp + 8], 0
// 0057289c  8906                 mov dword ptr [esi], eax
// 0057289e  e8bfd30b00           call 0x62fc62
// 005728a3  83c404               add esp, 4
// 005728a6  8bc6                 mov eax, esi
// 005728a8  5e                   pop esi
// 005728a9  59                   pop ecx
// 005728aa  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
