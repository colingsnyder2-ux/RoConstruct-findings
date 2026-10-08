// roc 2007-03 0059d670  unit: seg_00590000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059d670
//
// 0059d670  51                   push ecx
// 0059d671  6a18                 push 0x18
// 0059d673  c744240400000000     mov dword ptr [esp + 4], 0
// 0059d67b  e8880a0800           call 0x61e108
// 0059d680  83c404               add esp, 4
// 0059d683  85c0                 test eax, eax
// 0059d685  7424                 je 0x59d6ab
// 0059d687  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059d68b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059d68f  894808               mov dword ptr [eax + 8], ecx
// 0059d692  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059d696  89500c               mov dword ptr [eax + 0xc], edx
// 0059d699  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059d69d  c70060237b00         mov dword ptr [eax], 0x7b2360
// 0059d6a3  894810               mov dword ptr [eax + 0x10], ecx
// 0059d6a6  895014               mov dword ptr [eax + 0x14], edx
// 0059d6a9  eb02                 jmp 0x59d6ad
// 0059d6ab  33c0                 xor eax, eax
// 0059d6ad  56                   push esi
// 0059d6ae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0059d6b2  6a00                 push 0
// 0059d6b4  c744240800000000     mov dword ptr [esp + 8], 0
// 0059d6bc  8906                 mov dword ptr [esi], eax
// 0059d6be  e82d0a0800           call 0x61e0f0
// 0059d6c3  83c404               add esp, 4
// 0059d6c6  8bc6                 mov eax, esi
// 0059d6c8  5e                   pop esi
// 0059d6c9  59                   pop ecx
// 0059d6ca  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
