// roc 2012-06 008a2b00  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a2b00
//
// 008a2b00  51                   push ecx
// 008a2b01  6a18                 push 0x18
// 008a2b03  c744240400000000     mov dword ptr [esp + 4], 0
// 008a2b0b  e80af60d00           call 0x98211a
// 008a2b10  83c404               add esp, 4
// 008a2b13  85c0                 test eax, eax
// 008a2b15  7424                 je 0x8a2b3b
// 008a2b17  c70048e5bd00         mov dword ptr [eax], 0xbde548
// 008a2b1d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a2b21  894808               mov dword ptr [eax + 8], ecx
// 008a2b24  8b542410             mov edx, dword ptr [esp + 0x10]
// 008a2b28  89500c               mov dword ptr [eax + 0xc], edx
// 008a2b2b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008a2b2f  894810               mov dword ptr [eax + 0x10], ecx
// 008a2b32  8b542418             mov edx, dword ptr [esp + 0x18]
// 008a2b36  895014               mov dword ptr [eax + 0x14], edx
// 008a2b39  eb02                 jmp 0x8a2b3d
// 008a2b3b  33c0                 xor eax, eax
// 008a2b3d  56                   push esi
// 008a2b3e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008a2b42  6a00                 push 0
// 008a2b44  8906                 mov dword ptr [esi], eax
// 008a2b46  e8c9f50d00           call 0x982114
// 008a2b4b  83c404               add esp, 4
// 008a2b4e  8bc6                 mov eax, esi
// 008a2b50  5e                   pop esi
// 008a2b51  59                   pop ecx
// 008a2b52  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
