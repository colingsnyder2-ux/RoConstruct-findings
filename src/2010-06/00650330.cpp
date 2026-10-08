// roc 2010-06 00650330  unit: RBX::VPlayerCamera::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00650330
//
// 00650330  51                   push ecx
// 00650331  6a18                 push 0x18
// 00650333  c744240400000000     mov dword ptr [esp + 4], 0
// 0065033b  e860761500           call 0x7a79a0
// 00650340  83c404               add esp, 4
// 00650343  85c0                 test eax, eax
// 00650345  7424                 je 0x65036b
// 00650347  c7001c92a300         mov dword ptr [eax], 0xa3921c
// 0065034d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00650351  894808               mov dword ptr [eax + 8], ecx
// 00650354  8b542410             mov edx, dword ptr [esp + 0x10]
// 00650358  89500c               mov dword ptr [eax + 0xc], edx
// 0065035b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065035f  894810               mov dword ptr [eax + 0x10], ecx
// 00650362  8b542418             mov edx, dword ptr [esp + 0x18]
// 00650366  895014               mov dword ptr [eax + 0x14], edx
// 00650369  eb02                 jmp 0x65036d
// 0065036b  33c0                 xor eax, eax
// 0065036d  56                   push esi
// 0065036e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00650372  6a00                 push 0
// 00650374  8906                 mov dword ptr [esi], eax
// 00650376  e81f761500           call 0x7a799a
// 0065037b  83c404               add esp, 4
// 0065037e  8bc6                 mov eax, esi
// 00650380  5e                   pop esi
// 00650381  59                   pop ecx
// 00650382  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
