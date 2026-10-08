// roc 2012-06 0051e530  unit: RBX::Network::P8Player::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0051e530
//
// 0051e530  51                   push ecx
// 0051e531  6a18                 push 0x18
// 0051e533  c744240400000000     mov dword ptr [esp + 4], 0
// 0051e53b  e8da3b4600           call 0x98211a
// 0051e540  83c404               add esp, 4
// 0051e543  85c0                 test eax, eax
// 0051e545  7424                 je 0x51e56b
// 0051e547  c70040f8b600         mov dword ptr [eax], 0xb6f840
// 0051e54d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051e551  894808               mov dword ptr [eax + 8], ecx
// 0051e554  8b542410             mov edx, dword ptr [esp + 0x10]
// 0051e558  89500c               mov dword ptr [eax + 0xc], edx
// 0051e55b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0051e55f  894810               mov dword ptr [eax + 0x10], ecx
// 0051e562  8b542418             mov edx, dword ptr [esp + 0x18]
// 0051e566  895014               mov dword ptr [eax + 0x14], edx
// 0051e569  eb02                 jmp 0x51e56d
// 0051e56b  33c0                 xor eax, eax
// 0051e56d  56                   push esi
// 0051e56e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0051e572  6a00                 push 0
// 0051e574  8906                 mov dword ptr [esi], eax
// 0051e576  e8993b4600           call 0x982114
// 0051e57b  83c404               add esp, 4
// 0051e57e  8bc6                 mov eax, esi
// 0051e580  5e                   pop esi
// 0051e581  59                   pop ecx
// 0051e582  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
