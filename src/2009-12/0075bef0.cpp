// roc 2009-12 0075bef0  unit: RBX::TextBox  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0075bef0
//
// 0075bef0  51                   push ecx
// 0075bef1  6a18                 push 0x18
// 0075bef3  c744240400000000     mov dword ptr [esp + 4], 0
// 0075befb  e860790900           call 0x7f3860
// 0075bf00  83c404               add esp, 4
// 0075bf03  85c0                 test eax, eax
// 0075bf05  7424                 je 0x75bf2b
// 0075bf07  c7009c689e00         mov dword ptr [eax], 0x9e689c
// 0075bf0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0075bf11  894808               mov dword ptr [eax + 8], ecx
// 0075bf14  8b542410             mov edx, dword ptr [esp + 0x10]
// 0075bf18  89500c               mov dword ptr [eax + 0xc], edx
// 0075bf1b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0075bf1f  894810               mov dword ptr [eax + 0x10], ecx
// 0075bf22  8b542418             mov edx, dword ptr [esp + 0x18]
// 0075bf26  895014               mov dword ptr [eax + 0x14], edx
// 0075bf29  eb02                 jmp 0x75bf2d
// 0075bf2b  33c0                 xor eax, eax
// 0075bf2d  56                   push esi
// 0075bf2e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0075bf32  6a00                 push 0
// 0075bf34  8906                 mov dword ptr [esi], eax
// 0075bf36  e81f790900           call 0x7f385a
// 0075bf3b  83c404               add esp, 4
// 0075bf3e  8bc6                 mov eax, esi
// 0075bf40  5e                   pop esi
// 0075bf41  59                   pop ecx
// 0075bf42  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
