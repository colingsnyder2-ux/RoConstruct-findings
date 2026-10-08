// roc 2012-06 00687af0  unit: RBX::VCamera::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00687af0
//
// 00687af0  51                   push ecx
// 00687af1  6a18                 push 0x18
// 00687af3  c744240400000000     mov dword ptr [esp + 4], 0
// 00687afb  e81aa62f00           call 0x98211a
// 00687b00  83c404               add esp, 4
// 00687b03  85c0                 test eax, eax
// 00687b05  7424                 je 0x687b2b
// 00687b07  c7001cf9b800         mov dword ptr [eax], 0xb8f91c
// 00687b0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00687b11  894808               mov dword ptr [eax + 8], ecx
// 00687b14  8b542410             mov edx, dword ptr [esp + 0x10]
// 00687b18  89500c               mov dword ptr [eax + 0xc], edx
// 00687b1b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00687b1f  894810               mov dword ptr [eax + 0x10], ecx
// 00687b22  8b542418             mov edx, dword ptr [esp + 0x18]
// 00687b26  895014               mov dword ptr [eax + 0x14], edx
// 00687b29  eb02                 jmp 0x687b2d
// 00687b2b  33c0                 xor eax, eax
// 00687b2d  56                   push esi
// 00687b2e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00687b32  6a00                 push 0
// 00687b34  8906                 mov dword ptr [esi], eax
// 00687b36  e8d9a52f00           call 0x982114
// 00687b3b  83c404               add esp, 4
// 00687b3e  8bc6                 mov eax, esi
// 00687b40  5e                   pop esi
// 00687b41  59                   pop ecx
// 00687b42  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
