// roc 2010-06 00629030  unit: RBX::VDecal::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00629030
//
// 00629030  51                   push ecx
// 00629031  6a18                 push 0x18
// 00629033  c744240400000000     mov dword ptr [esp + 4], 0
// 0062903b  e860e91700           call 0x7a79a0
// 00629040  83c404               add esp, 4
// 00629043  85c0                 test eax, eax
// 00629045  7424                 je 0x62906b
// 00629047  c700b452a300         mov dword ptr [eax], 0xa352b4
// 0062904d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00629051  894808               mov dword ptr [eax + 8], ecx
// 00629054  8b542410             mov edx, dword ptr [esp + 0x10]
// 00629058  89500c               mov dword ptr [eax + 0xc], edx
// 0062905b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0062905f  894810               mov dword ptr [eax + 0x10], ecx
// 00629062  8b542418             mov edx, dword ptr [esp + 0x18]
// 00629066  895014               mov dword ptr [eax + 0x14], edx
// 00629069  eb02                 jmp 0x62906d
// 0062906b  33c0                 xor eax, eax
// 0062906d  56                   push esi
// 0062906e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00629072  6a00                 push 0
// 00629074  8906                 mov dword ptr [esi], eax
// 00629076  e81fe91700           call 0x7a799a
// 0062907b  83c404               add esp, 4
// 0062907e  8bc6                 mov eax, esi
// 00629080  5e                   pop esi
// 00629081  59                   pop ecx
// 00629082  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
