// roc 2012-06 007477a0  unit: RBX::VDecal::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007477a0
//
// 007477a0  51                   push ecx
// 007477a1  6a18                 push 0x18
// 007477a3  c744240400000000     mov dword ptr [esp + 4], 0
// 007477ab  e86aa92300           call 0x98211a
// 007477b0  83c404               add esp, 4
// 007477b3  85c0                 test eax, eax
// 007477b5  7424                 je 0x7477db
// 007477b7  c700ccadba00         mov dword ptr [eax], 0xbaadcc
// 007477bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007477c1  894808               mov dword ptr [eax + 8], ecx
// 007477c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007477c8  89500c               mov dword ptr [eax + 0xc], edx
// 007477cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007477cf  894810               mov dword ptr [eax + 0x10], ecx
// 007477d2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007477d6  895014               mov dword ptr [eax + 0x14], edx
// 007477d9  eb02                 jmp 0x7477dd
// 007477db  33c0                 xor eax, eax
// 007477dd  56                   push esi
// 007477de  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007477e2  6a00                 push 0
// 007477e4  8906                 mov dword ptr [esi], eax
// 007477e6  e829a92300           call 0x982114
// 007477eb  83c404               add esp, 4
// 007477ee  8bc6                 mov eax, esi
// 007477f0  5e                   pop esi
// 007477f1  59                   pop ecx
// 007477f2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
