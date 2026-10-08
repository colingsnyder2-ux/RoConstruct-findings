// roc 2012-06 008993a0  unit: RBX::VHole::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008993a0
//
// 008993a0  51                   push ecx
// 008993a1  6a18                 push 0x18
// 008993a3  c744240400000000     mov dword ptr [esp + 4], 0
// 008993ab  e86a8d0e00           call 0x98211a
// 008993b0  83c404               add esp, 4
// 008993b3  85c0                 test eax, eax
// 008993b5  7424                 je 0x8993db
// 008993b7  c700acbcbd00         mov dword ptr [eax], 0xbdbcac
// 008993bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008993c1  894808               mov dword ptr [eax + 8], ecx
// 008993c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008993c8  89500c               mov dword ptr [eax + 0xc], edx
// 008993cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008993cf  894810               mov dword ptr [eax + 0x10], ecx
// 008993d2  8b542418             mov edx, dword ptr [esp + 0x18]
// 008993d6  895014               mov dword ptr [eax + 0x14], edx
// 008993d9  eb02                 jmp 0x8993dd
// 008993db  33c0                 xor eax, eax
// 008993dd  56                   push esi
// 008993de  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008993e2  6a00                 push 0
// 008993e4  8906                 mov dword ptr [esi], eax
// 008993e6  e8298d0e00           call 0x982114
// 008993eb  83c404               add esp, 4
// 008993ee  8bc6                 mov eax, esi
// 008993f0  5e                   pop esi
// 008993f1  59                   pop ecx
// 008993f2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
