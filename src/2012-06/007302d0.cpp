// roc 2012-06 007302d0  unit: RBX::VGameBasicSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007302d0
//
// 007302d0  51                   push ecx
// 007302d1  6a18                 push 0x18
// 007302d3  c744240400000000     mov dword ptr [esp + 4], 0
// 007302db  e83a1e2500           call 0x98211a
// 007302e0  83c404               add esp, 4
// 007302e3  85c0                 test eax, eax
// 007302e5  7424                 je 0x73030b
// 007302e7  c700e470ba00         mov dword ptr [eax], 0xba70e4
// 007302ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007302f1  894808               mov dword ptr [eax + 8], ecx
// 007302f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007302f8  89500c               mov dword ptr [eax + 0xc], edx
// 007302fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007302ff  894810               mov dword ptr [eax + 0x10], ecx
// 00730302  8b542418             mov edx, dword ptr [esp + 0x18]
// 00730306  895014               mov dword ptr [eax + 0x14], edx
// 00730309  eb02                 jmp 0x73030d
// 0073030b  33c0                 xor eax, eax
// 0073030d  56                   push esi
// 0073030e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00730312  6a00                 push 0
// 00730314  8906                 mov dword ptr [esi], eax
// 00730316  e8f91d2500           call 0x982114
// 0073031b  83c404               add esp, 4
// 0073031e  8bc6                 mov eax, esi
// 00730320  5e                   pop esi
// 00730321  59                   pop ecx
// 00730322  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
