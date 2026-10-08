// roc 2009-06 0067b720  unit: RBX::VRotate::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067b720
//
// 0067b720  51                   push ecx
// 0067b721  6a18                 push 0x18
// 0067b723  c744240400000000     mov dword ptr [esp + 4], 0
// 0067b72b  e808d30900           call 0x718a38
// 0067b730  83c404               add esp, 4
// 0067b733  85c0                 test eax, eax
// 0067b735  7424                 je 0x67b75b
// 0067b737  c700504e8e00         mov dword ptr [eax], 0x8e4e50
// 0067b73d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067b741  894808               mov dword ptr [eax + 8], ecx
// 0067b744  8b542410             mov edx, dword ptr [esp + 0x10]
// 0067b748  89500c               mov dword ptr [eax + 0xc], edx
// 0067b74b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0067b74f  894810               mov dword ptr [eax + 0x10], ecx
// 0067b752  8b542418             mov edx, dword ptr [esp + 0x18]
// 0067b756  895014               mov dword ptr [eax + 0x14], edx
// 0067b759  eb02                 jmp 0x67b75d
// 0067b75b  33c0                 xor eax, eax
// 0067b75d  56                   push esi
// 0067b75e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0067b762  6a00                 push 0
// 0067b764  8906                 mov dword ptr [esi], eax
// 0067b766  e8c7d20900           call 0x718a32
// 0067b76b  83c404               add esp, 4
// 0067b76e  8bc6                 mov eax, esi
// 0067b770  5e                   pop esi
// 0067b771  59                   pop ecx
// 0067b772  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
