// roc 2012-06 00687a90  unit: RBX::VCamera::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00687a90
//
// 00687a90  51                   push ecx
// 00687a91  6a18                 push 0x18
// 00687a93  c744240400000000     mov dword ptr [esp + 4], 0
// 00687a9b  e87aa62f00           call 0x98211a
// 00687aa0  83c404               add esp, 4
// 00687aa3  85c0                 test eax, eax
// 00687aa5  7424                 je 0x687acb
// 00687aa7  c70008f9b800         mov dword ptr [eax], 0xb8f908
// 00687aad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00687ab1  894808               mov dword ptr [eax + 8], ecx
// 00687ab4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00687ab8  89500c               mov dword ptr [eax + 0xc], edx
// 00687abb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00687abf  894810               mov dword ptr [eax + 0x10], ecx
// 00687ac2  8b542418             mov edx, dword ptr [esp + 0x18]
// 00687ac6  895014               mov dword ptr [eax + 0x14], edx
// 00687ac9  eb02                 jmp 0x687acd
// 00687acb  33c0                 xor eax, eax
// 00687acd  56                   push esi
// 00687ace  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00687ad2  6a00                 push 0
// 00687ad4  8906                 mov dword ptr [esi], eax
// 00687ad6  e839a62f00           call 0x982114
// 00687adb  83c404               add esp, 4
// 00687ade  8bc6                 mov eax, esi
// 00687ae0  5e                   pop esi
// 00687ae1  59                   pop ecx
// 00687ae2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
