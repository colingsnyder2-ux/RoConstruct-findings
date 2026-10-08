// roc 2012-06 00687b50  unit: RBX::VCamera::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00687b50
//
// 00687b50  51                   push ecx
// 00687b51  6a18                 push 0x18
// 00687b53  c744240400000000     mov dword ptr [esp + 4], 0
// 00687b5b  e8baa52f00           call 0x98211a
// 00687b60  83c404               add esp, 4
// 00687b63  85c0                 test eax, eax
// 00687b65  7424                 je 0x687b8b
// 00687b67  c70030f9b800         mov dword ptr [eax], 0xb8f930
// 00687b6d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00687b71  894808               mov dword ptr [eax + 8], ecx
// 00687b74  8b542410             mov edx, dword ptr [esp + 0x10]
// 00687b78  89500c               mov dword ptr [eax + 0xc], edx
// 00687b7b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00687b7f  894810               mov dword ptr [eax + 0x10], ecx
// 00687b82  8b542418             mov edx, dword ptr [esp + 0x18]
// 00687b86  895014               mov dword ptr [eax + 0x14], edx
// 00687b89  eb02                 jmp 0x687b8d
// 00687b8b  33c0                 xor eax, eax
// 00687b8d  56                   push esi
// 00687b8e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00687b92  6a00                 push 0
// 00687b94  8906                 mov dword ptr [esi], eax
// 00687b96  e879a52f00           call 0x982114
// 00687b9b  83c404               add esp, 4
// 00687b9e  8bc6                 mov eax, esi
// 00687ba0  5e                   pop esi
// 00687ba1  59                   pop ecx
// 00687ba2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
