// roc 2009-12 00713420  unit: RBX::P8Smoke::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00713420
//
// 00713420  51                   push ecx
// 00713421  6a18                 push 0x18
// 00713423  c744240400000000     mov dword ptr [esp + 4], 0
// 0071342b  e830040e00           call 0x7f3860
// 00713430  83c404               add esp, 4
// 00713433  85c0                 test eax, eax
// 00713435  7424                 je 0x71345b
// 00713437  c700ece49d00         mov dword ptr [eax], 0x9de4ec
// 0071343d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00713441  894808               mov dword ptr [eax + 8], ecx
// 00713444  8b542410             mov edx, dword ptr [esp + 0x10]
// 00713448  89500c               mov dword ptr [eax + 0xc], edx
// 0071344b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0071344f  894810               mov dword ptr [eax + 0x10], ecx
// 00713452  8b542418             mov edx, dword ptr [esp + 0x18]
// 00713456  895014               mov dword ptr [eax + 0x14], edx
// 00713459  eb02                 jmp 0x71345d
// 0071345b  33c0                 xor eax, eax
// 0071345d  56                   push esi
// 0071345e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00713462  6a00                 push 0
// 00713464  8906                 mov dword ptr [esi], eax
// 00713466  e8ef030e00           call 0x7f385a
// 0071346b  83c404               add esp, 4
// 0071346e  8bc6                 mov eax, esi
// 00713470  5e                   pop esi
// 00713471  59                   pop ecx
// 00713472  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
