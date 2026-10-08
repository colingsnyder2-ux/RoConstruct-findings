// roc 2012-06 008c9fb0  unit: RBX::VDialogChoice::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008c9fb0
//
// 008c9fb0  51                   push ecx
// 008c9fb1  6a18                 push 0x18
// 008c9fb3  c744240400000000     mov dword ptr [esp + 4], 0
// 008c9fbb  e85a810b00           call 0x98211a
// 008c9fc0  83c404               add esp, 4
// 008c9fc3  85c0                 test eax, eax
// 008c9fc5  7424                 je 0x8c9feb
// 008c9fc7  c7005c6dbe00         mov dword ptr [eax], 0xbe6d5c
// 008c9fcd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008c9fd1  894808               mov dword ptr [eax + 8], ecx
// 008c9fd4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008c9fd8  89500c               mov dword ptr [eax + 0xc], edx
// 008c9fdb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c9fdf  894810               mov dword ptr [eax + 0x10], ecx
// 008c9fe2  8b542418             mov edx, dword ptr [esp + 0x18]
// 008c9fe6  895014               mov dword ptr [eax + 0x14], edx
// 008c9fe9  eb02                 jmp 0x8c9fed
// 008c9feb  33c0                 xor eax, eax
// 008c9fed  56                   push esi
// 008c9fee  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008c9ff2  6a00                 push 0
// 008c9ff4  8906                 mov dword ptr [esi], eax
// 008c9ff6  e819810b00           call 0x982114
// 008c9ffb  83c404               add esp, 4
// 008c9ffe  8bc6                 mov eax, esi
// 008ca000  5e                   pop esi
// 008ca001  59                   pop ecx
// 008ca002  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
