// roc 2010-06 006c7530  unit: RBX::Network::P8Player::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c7530
//
// 006c7530  51                   push ecx
// 006c7531  6a18                 push 0x18
// 006c7533  c744240400000000     mov dword ptr [esp + 4], 0
// 006c753b  e860040e00           call 0x7a79a0
// 006c7540  83c404               add esp, 4
// 006c7543  85c0                 test eax, eax
// 006c7545  7424                 je 0x6c756b
// 006c7547  c700404da400         mov dword ptr [eax], 0xa44d40
// 006c754d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c7551  894808               mov dword ptr [eax + 8], ecx
// 006c7554  8b542410             mov edx, dword ptr [esp + 0x10]
// 006c7558  89500c               mov dword ptr [eax + 0xc], edx
// 006c755b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006c755f  894810               mov dword ptr [eax + 0x10], ecx
// 006c7562  8b542418             mov edx, dword ptr [esp + 0x18]
// 006c7566  895014               mov dword ptr [eax + 0x14], edx
// 006c7569  eb02                 jmp 0x6c756d
// 006c756b  33c0                 xor eax, eax
// 006c756d  56                   push esi
// 006c756e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c7572  6a00                 push 0
// 006c7574  8906                 mov dword ptr [esi], eax
// 006c7576  e81f040e00           call 0x7a799a
// 006c757b  83c404               add esp, 4
// 006c757e  8bc6                 mov eax, esi
// 006c7580  5e                   pop esi
// 006c7581  59                   pop ecx
// 006c7582  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
