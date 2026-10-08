// roc 2007-03 005de150  unit: seg_005d0000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005de150
//
// 005de150  51                   push ecx
// 005de151  6a18                 push 0x18
// 005de153  c744240400000000     mov dword ptr [esp + 4], 0
// 005de15b  e8a8ff0300           call 0x61e108
// 005de160  83c404               add esp, 4
// 005de163  85c0                 test eax, eax
// 005de165  7424                 je 0x5de18b
// 005de167  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005de16b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005de16f  894808               mov dword ptr [eax + 8], ecx
// 005de172  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005de176  89500c               mov dword ptr [eax + 0xc], edx
// 005de179  8b542418             mov edx, dword ptr [esp + 0x18]
// 005de17d  c700ecda7b00         mov dword ptr [eax], 0x7bdaec
// 005de183  894810               mov dword ptr [eax + 0x10], ecx
// 005de186  895014               mov dword ptr [eax + 0x14], edx
// 005de189  eb02                 jmp 0x5de18d
// 005de18b  33c0                 xor eax, eax
// 005de18d  56                   push esi
// 005de18e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005de192  6a00                 push 0
// 005de194  c744240800000000     mov dword ptr [esp + 8], 0
// 005de19c  8906                 mov dword ptr [esi], eax
// 005de19e  e84dff0300           call 0x61e0f0
// 005de1a3  83c404               add esp, 4
// 005de1a6  8bc6                 mov eax, esi
// 005de1a8  5e                   pop esi
// 005de1a9  59                   pop ecx
// 005de1aa  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
