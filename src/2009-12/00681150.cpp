// roc 2009-12 00681150  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00681150
//
// 00681150  51                   push ecx
// 00681151  6a18                 push 0x18
// 00681153  c744240400000000     mov dword ptr [esp + 4], 0
// 0068115b  e800271700           call 0x7f3860
// 00681160  83c404               add esp, 4
// 00681163  85c0                 test eax, eax
// 00681165  7424                 je 0x68118b
// 00681167  c700a8039d00         mov dword ptr [eax], 0x9d03a8
// 0068116d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00681171  894808               mov dword ptr [eax + 8], ecx
// 00681174  8b542410             mov edx, dword ptr [esp + 0x10]
// 00681178  89500c               mov dword ptr [eax + 0xc], edx
// 0068117b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0068117f  894810               mov dword ptr [eax + 0x10], ecx
// 00681182  8b542418             mov edx, dword ptr [esp + 0x18]
// 00681186  895014               mov dword ptr [eax + 0x14], edx
// 00681189  eb02                 jmp 0x68118d
// 0068118b  33c0                 xor eax, eax
// 0068118d  56                   push esi
// 0068118e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00681192  6a00                 push 0
// 00681194  8906                 mov dword ptr [esi], eax
// 00681196  e8bf261700           call 0x7f385a
// 0068119b  83c404               add esp, 4
// 0068119e  8bc6                 mov eax, esi
// 006811a0  5e                   pop esi
// 006811a1  59                   pop ecx
// 006811a2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
