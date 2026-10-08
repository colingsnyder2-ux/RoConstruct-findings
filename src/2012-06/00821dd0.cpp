// roc 2012-06 00821dd0  unit: RBX::VCharacterMesh::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00821dd0
//
// 00821dd0  51                   push ecx
// 00821dd1  6a18                 push 0x18
// 00821dd3  c744240400000000     mov dword ptr [esp + 4], 0
// 00821ddb  e83a031600           call 0x98211a
// 00821de0  83c404               add esp, 4
// 00821de3  85c0                 test eax, eax
// 00821de5  7424                 je 0x821e0b
// 00821de7  c70088bebc00         mov dword ptr [eax], 0xbcbe88
// 00821ded  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00821df1  894808               mov dword ptr [eax + 8], ecx
// 00821df4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00821df8  89500c               mov dword ptr [eax + 0xc], edx
// 00821dfb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00821dff  894810               mov dword ptr [eax + 0x10], ecx
// 00821e02  8b542418             mov edx, dword ptr [esp + 0x18]
// 00821e06  895014               mov dword ptr [eax + 0x14], edx
// 00821e09  eb02                 jmp 0x821e0d
// 00821e0b  33c0                 xor eax, eax
// 00821e0d  56                   push esi
// 00821e0e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00821e12  6a00                 push 0
// 00821e14  8906                 mov dword ptr [esi], eax
// 00821e16  e8f9021600           call 0x982114
// 00821e1b  83c404               add esp, 4
// 00821e1e  8bc6                 mov eax, esi
// 00821e20  5e                   pop esi
// 00821e21  59                   pop ecx
// 00821e22  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
