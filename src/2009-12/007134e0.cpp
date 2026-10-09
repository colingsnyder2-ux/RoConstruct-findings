// roc 2009-12 007134e0  unit: RBX::P8Smoke::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007134e0
//
// 007134e0  51                   push ecx
// 007134e1  6a18                 push 0x18
// 007134e3  c744240400000000     mov dword ptr [esp + 4], 0
// 007134eb  e870030e00           call 0x7f3860
// 007134f0  83c404               add esp, 4
// 007134f3  85c0                 test eax, eax
// 007134f5  7424                 je 0x71351b
// 007134f7  c7001ce59d00         mov dword ptr [eax], 0x9de51c
// 007134fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00713501  894808               mov dword ptr [eax + 8], ecx
// 00713504  8b542410             mov edx, dword ptr [esp + 0x10]
// 00713508  89500c               mov dword ptr [eax + 0xc], edx
// 0071350b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0071350f  894810               mov dword ptr [eax + 0x10], ecx
// 00713512  8b542418             mov edx, dword ptr [esp + 0x18]
// 00713516  895014               mov dword ptr [eax + 0x14], edx
// 00713519  eb02                 jmp 0x71351d
// 0071351b  33c0                 xor eax, eax
// 0071351d  56                   push esi
// 0071351e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00713522  6a00                 push 0
// 00713524  8906                 mov dword ptr [esi], eax
// 00713526  e82f030e00           call 0x7f385a
// 0071352b  83c404               add esp, 4
// 0071352e  8bc6                 mov eax, esi
// 00713530  5e                   pop esi
// 00713531  59                   pop ecx
// 00713532  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
