// roc 2010-06 00692730  unit: RBX::Hint  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00692730
//
// 00692730  51                   push ecx
// 00692731  6a18                 push 0x18
// 00692733  c744240400000000     mov dword ptr [esp + 4], 0
// 0069273b  e860521100           call 0x7a79a0
// 00692740  83c404               add esp, 4
// 00692743  85c0                 test eax, eax
// 00692745  7424                 je 0x69276b
// 00692747  c700ecdca300         mov dword ptr [eax], 0xa3dcec
// 0069274d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00692751  894808               mov dword ptr [eax + 8], ecx
// 00692754  8b542410             mov edx, dword ptr [esp + 0x10]
// 00692758  89500c               mov dword ptr [eax + 0xc], edx
// 0069275b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069275f  894810               mov dword ptr [eax + 0x10], ecx
// 00692762  8b542418             mov edx, dword ptr [esp + 0x18]
// 00692766  895014               mov dword ptr [eax + 0x14], edx
// 00692769  eb02                 jmp 0x69276d
// 0069276b  33c0                 xor eax, eax
// 0069276d  56                   push esi
// 0069276e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00692772  6a00                 push 0
// 00692774  8906                 mov dword ptr [esi], eax
// 00692776  e81f521100           call 0x7a799a
// 0069277b  83c404               add esp, 4
// 0069277e  8bc6                 mov eax, esi
// 00692780  5e                   pop esi
// 00692781  59                   pop ecx
// 00692782  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
