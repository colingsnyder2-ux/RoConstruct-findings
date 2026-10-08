// roc 2009-06 004b4730  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b4730
//
// 004b4730  51                   push ecx
// 004b4731  6a18                 push 0x18
// 004b4733  c744240400000000     mov dword ptr [esp + 4], 0
// 004b473b  e8f8422600           call 0x718a38
// 004b4740  83c404               add esp, 4
// 004b4743  85c0                 test eax, eax
// 004b4745  7424                 je 0x4b476b
// 004b4747  c7005c448c00         mov dword ptr [eax], 0x8c445c
// 004b474d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b4751  894808               mov dword ptr [eax + 8], ecx
// 004b4754  8b542410             mov edx, dword ptr [esp + 0x10]
// 004b4758  89500c               mov dword ptr [eax + 0xc], edx
// 004b475b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004b475f  894810               mov dword ptr [eax + 0x10], ecx
// 004b4762  8b542418             mov edx, dword ptr [esp + 0x18]
// 004b4766  895014               mov dword ptr [eax + 0x14], edx
// 004b4769  eb02                 jmp 0x4b476d
// 004b476b  33c0                 xor eax, eax
// 004b476d  56                   push esi
// 004b476e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004b4772  6a00                 push 0
// 004b4774  8906                 mov dword ptr [esi], eax
// 004b4776  e8b7422600           call 0x718a32
// 004b477b  83c404               add esp, 4
// 004b477e  8bc6                 mov eax, esi
// 004b4780  5e                   pop esi
// 004b4781  59                   pop ecx
// 004b4782  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
