// roc 2012-06 007d5150  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007d5150
//
// 007d5150  51                   push ecx
// 007d5151  6a18                 push 0x18
// 007d5153  c744240400000000     mov dword ptr [esp + 4], 0
// 007d515b  e8bacf1a00           call 0x98211a
// 007d5160  83c404               add esp, 4
// 007d5163  85c0                 test eax, eax
// 007d5165  7424                 je 0x7d518b
// 007d5167  c700f00cbc00         mov dword ptr [eax], 0xbc0cf0
// 007d516d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007d5171  894808               mov dword ptr [eax + 8], ecx
// 007d5174  8b542410             mov edx, dword ptr [esp + 0x10]
// 007d5178  89500c               mov dword ptr [eax + 0xc], edx
// 007d517b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007d517f  894810               mov dword ptr [eax + 0x10], ecx
// 007d5182  8b542418             mov edx, dword ptr [esp + 0x18]
// 007d5186  895014               mov dword ptr [eax + 0x14], edx
// 007d5189  eb02                 jmp 0x7d518d
// 007d518b  33c0                 xor eax, eax
// 007d518d  56                   push esi
// 007d518e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007d5192  6a00                 push 0
// 007d5194  8906                 mov dword ptr [esi], eax
// 007d5196  e879cf1a00           call 0x982114
// 007d519b  83c404               add esp, 4
// 007d519e  8bc6                 mov eax, esi
// 007d51a0  5e                   pop esi
// 007d51a1  59                   pop ecx
// 007d51a2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
