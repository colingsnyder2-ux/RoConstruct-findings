// roc 2007-03 00543170  unit: seg_00540000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00543170
//
// 00543170  51                   push ecx
// 00543171  6a18                 push 0x18
// 00543173  c744240400000000     mov dword ptr [esp + 4], 0
// 0054317b  e888af0d00           call 0x61e108
// 00543180  83c404               add esp, 4
// 00543183  85c0                 test eax, eax
// 00543185  7424                 je 0x5431ab
// 00543187  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054318b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0054318f  894808               mov dword ptr [eax + 8], ecx
// 00543192  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00543196  89500c               mov dword ptr [eax + 0xc], edx
// 00543199  8b542418             mov edx, dword ptr [esp + 0x18]
// 0054319d  c700bc687a00         mov dword ptr [eax], 0x7a68bc
// 005431a3  894810               mov dword ptr [eax + 0x10], ecx
// 005431a6  895014               mov dword ptr [eax + 0x14], edx
// 005431a9  eb02                 jmp 0x5431ad
// 005431ab  33c0                 xor eax, eax
// 005431ad  56                   push esi
// 005431ae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005431b2  6a00                 push 0
// 005431b4  c744240800000000     mov dword ptr [esp + 8], 0
// 005431bc  8906                 mov dword ptr [esi], eax
// 005431be  e82daf0d00           call 0x61e0f0
// 005431c3  83c404               add esp, 4
// 005431c6  8bc6                 mov eax, esi
// 005431c8  5e                   pop esi
// 005431c9  59                   pop ecx
// 005431ca  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
