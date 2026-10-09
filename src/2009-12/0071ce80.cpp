// roc 2009-12 0071ce80  unit: RBX::Sky  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0071ce80
//
// 0071ce80  51                   push ecx
// 0071ce81  6a18                 push 0x18
// 0071ce83  c744240400000000     mov dword ptr [esp + 4], 0
// 0071ce8b  e8d0690d00           call 0x7f3860
// 0071ce90  83c404               add esp, 4
// 0071ce93  85c0                 test eax, eax
// 0071ce95  7424                 je 0x71cebb
// 0071ce97  c70054f99d00         mov dword ptr [eax], 0x9df954
// 0071ce9d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071cea1  894808               mov dword ptr [eax + 8], ecx
// 0071cea4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0071cea8  89500c               mov dword ptr [eax + 0xc], edx
// 0071ceab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0071ceaf  894810               mov dword ptr [eax + 0x10], ecx
// 0071ceb2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0071ceb6  895014               mov dword ptr [eax + 0x14], edx
// 0071ceb9  eb02                 jmp 0x71cebd
// 0071cebb  33c0                 xor eax, eax
// 0071cebd  56                   push esi
// 0071cebe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0071cec2  6a00                 push 0
// 0071cec4  8906                 mov dword ptr [esi], eax
// 0071cec6  e88f690d00           call 0x7f385a
// 0071cecb  83c404               add esp, 4
// 0071cece  8bc6                 mov eax, esi
// 0071ced0  5e                   pop esi
// 0071ced1  59                   pop ecx
// 0071ced2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
