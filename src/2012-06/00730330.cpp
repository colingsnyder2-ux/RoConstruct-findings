// roc 2012-06 00730330  unit: RBX::VGameBasicSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00730330
//
// 00730330  51                   push ecx
// 00730331  6a18                 push 0x18
// 00730333  c744240400000000     mov dword ptr [esp + 4], 0
// 0073033b  e8da1d2500           call 0x98211a
// 00730340  83c404               add esp, 4
// 00730343  85c0                 test eax, eax
// 00730345  7424                 je 0x73036b
// 00730347  c700f870ba00         mov dword ptr [eax], 0xba70f8
// 0073034d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00730351  894808               mov dword ptr [eax + 8], ecx
// 00730354  8b542410             mov edx, dword ptr [esp + 0x10]
// 00730358  89500c               mov dword ptr [eax + 0xc], edx
// 0073035b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0073035f  894810               mov dword ptr [eax + 0x10], ecx
// 00730362  8b542418             mov edx, dword ptr [esp + 0x18]
// 00730366  895014               mov dword ptr [eax + 0x14], edx
// 00730369  eb02                 jmp 0x73036d
// 0073036b  33c0                 xor eax, eax
// 0073036d  56                   push esi
// 0073036e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00730372  6a00                 push 0
// 00730374  8906                 mov dword ptr [esi], eax
// 00730376  e8991d2500           call 0x982114
// 0073037b  83c404               add esp, 4
// 0073037e  8bc6                 mov eax, esi
// 00730380  5e                   pop esi
// 00730381  59                   pop ecx
// 00730382  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
