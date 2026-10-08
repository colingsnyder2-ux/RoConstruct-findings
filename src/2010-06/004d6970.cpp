// roc 2010-06 004d6970  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004d6970
//
// 004d6970  51                   push ecx
// 004d6971  6a18                 push 0x18
// 004d6973  c744240400000000     mov dword ptr [esp + 4], 0
// 004d697b  e820102d00           call 0x7a79a0
// 004d6980  83c404               add esp, 4
// 004d6983  85c0                 test eax, eax
// 004d6985  7424                 je 0x4d69ab
// 004d6987  c700ec9da100         mov dword ptr [eax], 0xa19dec
// 004d698d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d6991  894808               mov dword ptr [eax + 8], ecx
// 004d6994  8b542410             mov edx, dword ptr [esp + 0x10]
// 004d6998  89500c               mov dword ptr [eax + 0xc], edx
// 004d699b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004d699f  894810               mov dword ptr [eax + 0x10], ecx
// 004d69a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 004d69a6  895014               mov dword ptr [eax + 0x14], edx
// 004d69a9  eb02                 jmp 0x4d69ad
// 004d69ab  33c0                 xor eax, eax
// 004d69ad  56                   push esi
// 004d69ae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004d69b2  6a00                 push 0
// 004d69b4  8906                 mov dword ptr [esi], eax
// 004d69b6  e8df0f2d00           call 0x7a799a
// 004d69bb  83c404               add esp, 4
// 004d69be  8bc6                 mov eax, esi
// 004d69c0  5e                   pop esi
// 004d69c1  59                   pop ecx
// 004d69c2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
