// roc 2012-06 007e8a90  unit: RBX::VGuiTextButton::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007e8a90
//
// 007e8a90  51                   push ecx
// 007e8a91  6a18                 push 0x18
// 007e8a93  c744240400000000     mov dword ptr [esp + 4], 0
// 007e8a9b  e87a961900           call 0x98211a
// 007e8aa0  83c404               add esp, 4
// 007e8aa3  85c0                 test eax, eax
// 007e8aa5  7424                 je 0x7e8acb
// 007e8aa7  c7002827bc00         mov dword ptr [eax], 0xbc2728
// 007e8aad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007e8ab1  894808               mov dword ptr [eax + 8], ecx
// 007e8ab4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007e8ab8  89500c               mov dword ptr [eax + 0xc], edx
// 007e8abb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007e8abf  894810               mov dword ptr [eax + 0x10], ecx
// 007e8ac2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007e8ac6  895014               mov dword ptr [eax + 0x14], edx
// 007e8ac9  eb02                 jmp 0x7e8acd
// 007e8acb  33c0                 xor eax, eax
// 007e8acd  56                   push esi
// 007e8ace  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007e8ad2  6a00                 push 0
// 007e8ad4  8906                 mov dword ptr [esi], eax
// 007e8ad6  e839961900           call 0x982114
// 007e8adb  83c404               add esp, 4
// 007e8ade  8bc6                 mov eax, esi
// 007e8ae0  5e                   pop esi
// 007e8ae1  59                   pop ecx
// 007e8ae2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
