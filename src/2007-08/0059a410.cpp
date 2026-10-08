// roc 2007-08 0059a410  unit: RBX::VCamera::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059a410
//
// 0059a410  51                   push ecx
// 0059a411  6a18                 push 0x18
// 0059a413  c744240400000000     mov dword ptr [esp + 4], 0
// 0059a41b  e8d65a0900           call 0x62fef6
// 0059a420  83c404               add esp, 4
// 0059a423  85c0                 test eax, eax
// 0059a425  7424                 je 0x59a44b
// 0059a427  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059a42b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059a42f  894808               mov dword ptr [eax + 8], ecx
// 0059a432  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059a436  89500c               mov dword ptr [eax + 0xc], edx
// 0059a439  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059a43d  c70020167b00         mov dword ptr [eax], 0x7b1620
// 0059a443  894810               mov dword ptr [eax + 0x10], ecx
// 0059a446  895014               mov dword ptr [eax + 0x14], edx
// 0059a449  eb02                 jmp 0x59a44d
// 0059a44b  33c0                 xor eax, eax
// 0059a44d  56                   push esi
// 0059a44e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0059a452  6a00                 push 0
// 0059a454  c744240800000000     mov dword ptr [esp + 8], 0
// 0059a45c  8906                 mov dword ptr [esi], eax
// 0059a45e  e8ff570900           call 0x62fc62
// 0059a463  83c404               add esp, 4
// 0059a466  8bc6                 mov eax, esi
// 0059a468  5e                   pop esi
// 0059a469  59                   pop ecx
// 0059a46a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
