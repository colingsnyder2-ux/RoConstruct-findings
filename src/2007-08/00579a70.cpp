// roc 2007-08 00579a70  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00579a70
//
// 00579a70  51                   push ecx
// 00579a71  6a18                 push 0x18
// 00579a73  c744240400000000     mov dword ptr [esp + 4], 0
// 00579a7b  e876640b00           call 0x62fef6
// 00579a80  83c404               add esp, 4
// 00579a83  85c0                 test eax, eax
// 00579a85  7424                 je 0x579aab
// 00579a87  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00579a8b  8b542410             mov edx, dword ptr [esp + 0x10]
// 00579a8f  894808               mov dword ptr [eax + 8], ecx
// 00579a92  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00579a96  89500c               mov dword ptr [eax + 0xc], edx
// 00579a99  8b542418             mov edx, dword ptr [esp + 0x18]
// 00579a9d  c700c4b17a00         mov dword ptr [eax], 0x7ab1c4
// 00579aa3  894810               mov dword ptr [eax + 0x10], ecx
// 00579aa6  895014               mov dword ptr [eax + 0x14], edx
// 00579aa9  eb02                 jmp 0x579aad
// 00579aab  33c0                 xor eax, eax
// 00579aad  56                   push esi
// 00579aae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00579ab2  6a00                 push 0
// 00579ab4  c744240800000000     mov dword ptr [esp + 8], 0
// 00579abc  8906                 mov dword ptr [esi], eax
// 00579abe  e89f610b00           call 0x62fc62
// 00579ac3  83c404               add esp, 4
// 00579ac6  8bc6                 mov eax, esi
// 00579ac8  5e                   pop esi
// 00579ac9  59                   pop ecx
// 00579aca  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
