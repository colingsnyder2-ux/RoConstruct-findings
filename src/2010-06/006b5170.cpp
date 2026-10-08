// roc 2010-06 006b5170  unit: RBX::VExplosion::?$BoundPropGetSet  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006b5170
//
// 006b5170  51                   push ecx
// 006b5171  6a18                 push 0x18
// 006b5173  c744240400000000     mov dword ptr [esp + 4], 0
// 006b517b  e820280f00           call 0x7a79a0
// 006b5180  83c404               add esp, 4
// 006b5183  85c0                 test eax, eax
// 006b5185  7424                 je 0x6b51ab
// 006b5187  c700f820a400         mov dword ptr [eax], 0xa420f8
// 006b518d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006b5191  894808               mov dword ptr [eax + 8], ecx
// 006b5194  8b542410             mov edx, dword ptr [esp + 0x10]
// 006b5198  89500c               mov dword ptr [eax + 0xc], edx
// 006b519b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006b519f  894810               mov dword ptr [eax + 0x10], ecx
// 006b51a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006b51a6  895014               mov dword ptr [eax + 0x14], edx
// 006b51a9  eb02                 jmp 0x6b51ad
// 006b51ab  33c0                 xor eax, eax
// 006b51ad  56                   push esi
// 006b51ae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006b51b2  6a00                 push 0
// 006b51b4  8906                 mov dword ptr [esi], eax
// 006b51b6  e8df270f00           call 0x7a799a
// 006b51bb  83c404               add esp, 4
// 006b51be  8bc6                 mov eax, esi
// 006b51c0  5e                   pop esi
// 006b51c1  59                   pop ecx
// 006b51c2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
