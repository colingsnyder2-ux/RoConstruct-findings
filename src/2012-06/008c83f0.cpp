// roc 2012-06 008c83f0  unit: RBX::P8Tool::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008c83f0
//
// 008c83f0  51                   push ecx
// 008c83f1  6a18                 push 0x18
// 008c83f3  c744240400000000     mov dword ptr [esp + 4], 0
// 008c83fb  e81a9d0b00           call 0x98211a
// 008c8400  83c404               add esp, 4
// 008c8403  85c0                 test eax, eax
// 008c8405  7424                 je 0x8c842b
// 008c8407  c7004869be00         mov dword ptr [eax], 0xbe6948
// 008c840d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008c8411  894808               mov dword ptr [eax + 8], ecx
// 008c8414  8b542410             mov edx, dword ptr [esp + 0x10]
// 008c8418  89500c               mov dword ptr [eax + 0xc], edx
// 008c841b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c841f  894810               mov dword ptr [eax + 0x10], ecx
// 008c8422  8b542418             mov edx, dword ptr [esp + 0x18]
// 008c8426  895014               mov dword ptr [eax + 0x14], edx
// 008c8429  eb02                 jmp 0x8c842d
// 008c842b  33c0                 xor eax, eax
// 008c842d  56                   push esi
// 008c842e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008c8432  6a00                 push 0
// 008c8434  8906                 mov dword ptr [esi], eax
// 008c8436  e8d99c0b00           call 0x982114
// 008c843b  83c404               add esp, 4
// 008c843e  8bc6                 mov eax, esi
// 008c8440  5e                   pop esi
// 008c8441  59                   pop ecx
// 008c8442  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
