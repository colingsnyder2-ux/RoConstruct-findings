// roc 2010-06 005fdd40  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005fdd40
//
// 005fdd40  51                   push ecx
// 005fdd41  6a18                 push 0x18
// 005fdd43  c744240400000000     mov dword ptr [esp + 4], 0
// 005fdd4b  e8509c1a00           call 0x7a79a0
// 005fdd50  83c404               add esp, 4
// 005fdd53  85c0                 test eax, eax
// 005fdd55  7424                 je 0x5fdd7b
// 005fdd57  c700e404a300         mov dword ptr [eax], 0xa304e4
// 005fdd5d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005fdd61  894808               mov dword ptr [eax + 8], ecx
// 005fdd64  8b542410             mov edx, dword ptr [esp + 0x10]
// 005fdd68  89500c               mov dword ptr [eax + 0xc], edx
// 005fdd6b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005fdd6f  894810               mov dword ptr [eax + 0x10], ecx
// 005fdd72  8b542418             mov edx, dword ptr [esp + 0x18]
// 005fdd76  895014               mov dword ptr [eax + 0x14], edx
// 005fdd79  eb02                 jmp 0x5fdd7d
// 005fdd7b  33c0                 xor eax, eax
// 005fdd7d  56                   push esi
// 005fdd7e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005fdd82  6a00                 push 0
// 005fdd84  8906                 mov dword ptr [esi], eax
// 005fdd86  e80f9c1a00           call 0x7a799a
// 005fdd8b  83c404               add esp, 4
// 005fdd8e  8bc6                 mov eax, esi
// 005fdd90  5e                   pop esi
// 005fdd91  59                   pop ecx
// 005fdd92  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
