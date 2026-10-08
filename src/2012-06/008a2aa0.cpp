// roc 2012-06 008a2aa0  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a2aa0
//
// 008a2aa0  51                   push ecx
// 008a2aa1  6a18                 push 0x18
// 008a2aa3  c744240400000000     mov dword ptr [esp + 4], 0
// 008a2aab  e86af60d00           call 0x98211a
// 008a2ab0  83c404               add esp, 4
// 008a2ab3  85c0                 test eax, eax
// 008a2ab5  7424                 je 0x8a2adb
// 008a2ab7  c70034e5bd00         mov dword ptr [eax], 0xbde534
// 008a2abd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a2ac1  894808               mov dword ptr [eax + 8], ecx
// 008a2ac4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008a2ac8  89500c               mov dword ptr [eax + 0xc], edx
// 008a2acb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008a2acf  894810               mov dword ptr [eax + 0x10], ecx
// 008a2ad2  8b542418             mov edx, dword ptr [esp + 0x18]
// 008a2ad6  895014               mov dword ptr [eax + 0x14], edx
// 008a2ad9  eb02                 jmp 0x8a2add
// 008a2adb  33c0                 xor eax, eax
// 008a2add  56                   push esi
// 008a2ade  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008a2ae2  6a00                 push 0
// 008a2ae4  8906                 mov dword ptr [esi], eax
// 008a2ae6  e829f60d00           call 0x982114
// 008a2aeb  83c404               add esp, 4
// 008a2aee  8bc6                 mov eax, esi
// 008a2af0  5e                   pop esi
// 008a2af1  59                   pop ecx
// 008a2af2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
