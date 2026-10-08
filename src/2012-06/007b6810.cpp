// roc 2012-06 007b6810  unit: RBX::Smoke  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007b6810
//
// 007b6810  51                   push ecx
// 007b6811  6a18                 push 0x18
// 007b6813  c744240400000000     mov dword ptr [esp + 4], 0
// 007b681b  e8fab81c00           call 0x98211a
// 007b6820  83c404               add esp, 4
// 007b6823  85c0                 test eax, eax
// 007b6825  7424                 je 0x7b684b
// 007b6827  c700bc96bb00         mov dword ptr [eax], 0xbb96bc
// 007b682d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007b6831  894808               mov dword ptr [eax + 8], ecx
// 007b6834  8b542410             mov edx, dword ptr [esp + 0x10]
// 007b6838  89500c               mov dword ptr [eax + 0xc], edx
// 007b683b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007b683f  894810               mov dword ptr [eax + 0x10], ecx
// 007b6842  8b542418             mov edx, dword ptr [esp + 0x18]
// 007b6846  895014               mov dword ptr [eax + 0x14], edx
// 007b6849  eb02                 jmp 0x7b684d
// 007b684b  33c0                 xor eax, eax
// 007b684d  56                   push esi
// 007b684e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007b6852  6a00                 push 0
// 007b6854  8906                 mov dword ptr [esi], eax
// 007b6856  e8b9b81c00           call 0x982114
// 007b685b  83c404               add esp, 4
// 007b685e  8bc6                 mov eax, esi
// 007b6860  5e                   pop esi
// 007b6861  59                   pop ecx
// 007b6862  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
