// roc 2009-12 0075f2f0  unit: RBX::Network::P8Player::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0075f2f0
//
// 0075f2f0  51                   push ecx
// 0075f2f1  6a18                 push 0x18
// 0075f2f3  c744240400000000     mov dword ptr [esp + 4], 0
// 0075f2fb  e860450900           call 0x7f3860
// 0075f300  83c404               add esp, 4
// 0075f303  85c0                 test eax, eax
// 0075f305  7424                 je 0x75f32b
// 0075f307  c700f4719e00         mov dword ptr [eax], 0x9e71f4
// 0075f30d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0075f311  894808               mov dword ptr [eax + 8], ecx
// 0075f314  8b542410             mov edx, dword ptr [esp + 0x10]
// 0075f318  89500c               mov dword ptr [eax + 0xc], edx
// 0075f31b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0075f31f  894810               mov dword ptr [eax + 0x10], ecx
// 0075f322  8b542418             mov edx, dword ptr [esp + 0x18]
// 0075f326  895014               mov dword ptr [eax + 0x14], edx
// 0075f329  eb02                 jmp 0x75f32d
// 0075f32b  33c0                 xor eax, eax
// 0075f32d  56                   push esi
// 0075f32e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0075f332  6a00                 push 0
// 0075f334  8906                 mov dword ptr [esi], eax
// 0075f336  e81f450900           call 0x7f385a
// 0075f33b  83c404               add esp, 4
// 0075f33e  8bc6                 mov eax, esi
// 0075f340  5e                   pop esi
// 0075f341  59                   pop ecx
// 0075f342  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
