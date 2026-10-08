// roc 2010-06 006f2860  unit: RBX::Network::P8Players::?$GetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f2860
//
// 006f2860  51                   push ecx
// 006f2861  6a18                 push 0x18
// 006f2863  c744240400000000     mov dword ptr [esp + 4], 0
// 006f286b  e830510b00           call 0x7a79a0
// 006f2870  83c404               add esp, 4
// 006f2873  85c0                 test eax, eax
// 006f2875  7424                 je 0x6f289b
// 006f2877  c70044a5a400         mov dword ptr [eax], 0xa4a544
// 006f287d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f2881  894808               mov dword ptr [eax + 8], ecx
// 006f2884  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f2888  89500c               mov dword ptr [eax + 0xc], edx
// 006f288b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006f288f  894810               mov dword ptr [eax + 0x10], ecx
// 006f2892  8b542418             mov edx, dword ptr [esp + 0x18]
// 006f2896  895014               mov dword ptr [eax + 0x14], edx
// 006f2899  eb02                 jmp 0x6f289d
// 006f289b  33c0                 xor eax, eax
// 006f289d  56                   push esi
// 006f289e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f28a2  6a00                 push 0
// 006f28a4  8906                 mov dword ptr [esi], eax
// 006f28a6  e8ef500b00           call 0x7a799a
// 006f28ab  83c404               add esp, 4
// 006f28ae  8bc6                 mov eax, esi
// 006f28b0  5e                   pop esi
// 006f28b1  59                   pop ecx
// 006f28b2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
