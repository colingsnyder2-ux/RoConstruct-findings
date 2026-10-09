// roc 2009-12 00528de0  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00528de0
//
// 00528de0  51                   push ecx
// 00528de1  6a18                 push 0x18
// 00528de3  c744240400000000     mov dword ptr [esp + 4], 0
// 00528deb  e870aa2c00           call 0x7f3860
// 00528df0  83c404               add esp, 4
// 00528df3  85c0                 test eax, eax
// 00528df5  7424                 je 0x528e1b
// 00528df7  c70044c09b00         mov dword ptr [eax], 0x9bc044
// 00528dfd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00528e01  894808               mov dword ptr [eax + 8], ecx
// 00528e04  8b542410             mov edx, dword ptr [esp + 0x10]
// 00528e08  89500c               mov dword ptr [eax + 0xc], edx
// 00528e0b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00528e0f  894810               mov dword ptr [eax + 0x10], ecx
// 00528e12  8b542418             mov edx, dword ptr [esp + 0x18]
// 00528e16  895014               mov dword ptr [eax + 0x14], edx
// 00528e19  eb02                 jmp 0x528e1d
// 00528e1b  33c0                 xor eax, eax
// 00528e1d  56                   push esi
// 00528e1e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00528e22  6a00                 push 0
// 00528e24  8906                 mov dword ptr [esi], eax
// 00528e26  e82faa2c00           call 0x7f385a
// 00528e2b  83c404               add esp, 4
// 00528e2e  8bc6                 mov eax, esi
// 00528e30  5e                   pop esi
// 00528e31  59                   pop ecx
// 00528e32  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
