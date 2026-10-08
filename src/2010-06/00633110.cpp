// roc 2010-06 00633110  unit: RBX::IStepped  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00633110
//
// 00633110  51                   push ecx
// 00633111  6a18                 push 0x18
// 00633113  c744240400000000     mov dword ptr [esp + 4], 0
// 0063311b  e880481700           call 0x7a79a0
// 00633120  83c404               add esp, 4
// 00633123  85c0                 test eax, eax
// 00633125  7424                 je 0x63314b
// 00633127  c7002c61a300         mov dword ptr [eax], 0xa3612c
// 0063312d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00633131  894808               mov dword ptr [eax + 8], ecx
// 00633134  8b542410             mov edx, dword ptr [esp + 0x10]
// 00633138  89500c               mov dword ptr [eax + 0xc], edx
// 0063313b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0063313f  894810               mov dword ptr [eax + 0x10], ecx
// 00633142  8b542418             mov edx, dword ptr [esp + 0x18]
// 00633146  895014               mov dword ptr [eax + 0x14], edx
// 00633149  eb02                 jmp 0x63314d
// 0063314b  33c0                 xor eax, eax
// 0063314d  56                   push esi
// 0063314e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00633152  6a00                 push 0
// 00633154  8906                 mov dword ptr [esi], eax
// 00633156  e83f481700           call 0x7a799a
// 0063315b  83c404               add esp, 4
// 0063315e  8bc6                 mov eax, esi
// 00633160  5e                   pop esi
// 00633161  59                   pop ecx
// 00633162  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
