// roc 2010-06 004d6a90  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004d6a90
//
// 004d6a90  51                   push ecx
// 004d6a91  6a18                 push 0x18
// 004d6a93  c744240400000000     mov dword ptr [esp + 4], 0
// 004d6a9b  e8000f2d00           call 0x7a79a0
// 004d6aa0  83c404               add esp, 4
// 004d6aa3  85c0                 test eax, eax
// 004d6aa5  7424                 je 0x4d6acb
// 004d6aa7  c700c49ea100         mov dword ptr [eax], 0xa19ec4
// 004d6aad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d6ab1  894808               mov dword ptr [eax + 8], ecx
// 004d6ab4  8b542410             mov edx, dword ptr [esp + 0x10]
// 004d6ab8  89500c               mov dword ptr [eax + 0xc], edx
// 004d6abb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004d6abf  894810               mov dword ptr [eax + 0x10], ecx
// 004d6ac2  8b542418             mov edx, dword ptr [esp + 0x18]
// 004d6ac6  895014               mov dword ptr [eax + 0x14], edx
// 004d6ac9  eb02                 jmp 0x4d6acd
// 004d6acb  33c0                 xor eax, eax
// 004d6acd  56                   push esi
// 004d6ace  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004d6ad2  6a00                 push 0
// 004d6ad4  8906                 mov dword ptr [esi], eax
// 004d6ad6  e8bf0e2d00           call 0x7a799a
// 004d6adb  83c404               add esp, 4
// 004d6ade  8bc6                 mov eax, esi
// 004d6ae0  5e                   pop esi
// 004d6ae1  59                   pop ecx
// 004d6ae2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
