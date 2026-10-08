// roc 2009-06 00681700  unit: RBX::VShirtGraphic::?$BoundPropGetSet  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00681700
//
// 00681700  51                   push ecx
// 00681701  6a18                 push 0x18
// 00681703  c744240400000000     mov dword ptr [esp + 4], 0
// 0068170b  e828730900           call 0x718a38
// 00681710  83c404               add esp, 4
// 00681713  85c0                 test eax, eax
// 00681715  7424                 je 0x68173b
// 00681717  c700f45c8e00         mov dword ptr [eax], 0x8e5cf4
// 0068171d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00681721  894808               mov dword ptr [eax + 8], ecx
// 00681724  8b542410             mov edx, dword ptr [esp + 0x10]
// 00681728  89500c               mov dword ptr [eax + 0xc], edx
// 0068172b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0068172f  894810               mov dword ptr [eax + 0x10], ecx
// 00681732  8b542418             mov edx, dword ptr [esp + 0x18]
// 00681736  895014               mov dword ptr [eax + 0x14], edx
// 00681739  eb02                 jmp 0x68173d
// 0068173b  33c0                 xor eax, eax
// 0068173d  56                   push esi
// 0068173e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00681742  6a00                 push 0
// 00681744  8906                 mov dword ptr [esi], eax
// 00681746  e8e7720900           call 0x718a32
// 0068174b  83c404               add esp, 4
// 0068174e  8bc6                 mov eax, esi
// 00681750  5e                   pop esi
// 00681751  59                   pop ecx
// 00681752  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
