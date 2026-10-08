// roc 2010-06 0059f2f0  unit: RBX::VTeam::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0059f2f0
//
// 0059f2f0  51                   push ecx
// 0059f2f1  6a18                 push 0x18
// 0059f2f3  c744240400000000     mov dword ptr [esp + 4], 0
// 0059f2fb  e8a0862000           call 0x7a79a0
// 0059f300  83c404               add esp, 4
// 0059f303  85c0                 test eax, eax
// 0059f305  7424                 je 0x59f32b
// 0059f307  c700a4a3a200         mov dword ptr [eax], 0xa2a3a4
// 0059f30d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059f311  894808               mov dword ptr [eax + 8], ecx
// 0059f314  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059f318  89500c               mov dword ptr [eax + 0xc], edx
// 0059f31b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059f31f  894810               mov dword ptr [eax + 0x10], ecx
// 0059f322  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059f326  895014               mov dword ptr [eax + 0x14], edx
// 0059f329  eb02                 jmp 0x59f32d
// 0059f32b  33c0                 xor eax, eax
// 0059f32d  56                   push esi
// 0059f32e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0059f332  6a00                 push 0
// 0059f334  8906                 mov dword ptr [esi], eax
// 0059f336  e85f862000           call 0x7a799a
// 0059f33b  83c404               add esp, 4
// 0059f33e  8bc6                 mov eax, esi
// 0059f340  5e                   pop esi
// 0059f341  59                   pop ecx
// 0059f342  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
