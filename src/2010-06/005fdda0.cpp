// roc 2010-06 005fdda0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005fdda0
//
// 005fdda0  51                   push ecx
// 005fdda1  6a18                 push 0x18
// 005fdda3  c744240400000000     mov dword ptr [esp + 4], 0
// 005fddab  e8f09b1a00           call 0x7a79a0
// 005fddb0  83c404               add esp, 4
// 005fddb3  85c0                 test eax, eax
// 005fddb5  7424                 je 0x5fdddb
// 005fddb7  c700fc04a300         mov dword ptr [eax], 0xa304fc
// 005fddbd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005fddc1  894808               mov dword ptr [eax + 8], ecx
// 005fddc4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005fddc8  89500c               mov dword ptr [eax + 0xc], edx
// 005fddcb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005fddcf  894810               mov dword ptr [eax + 0x10], ecx
// 005fddd2  8b542418             mov edx, dword ptr [esp + 0x18]
// 005fddd6  895014               mov dword ptr [eax + 0x14], edx
// 005fddd9  eb02                 jmp 0x5fdddd
// 005fdddb  33c0                 xor eax, eax
// 005fdddd  56                   push esi
// 005fddde  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005fdde2  6a00                 push 0
// 005fdde4  8906                 mov dword ptr [esi], eax
// 005fdde6  e8af9b1a00           call 0x7a799a
// 005fddeb  83c404               add esp, 4
// 005fddee  8bc6                 mov eax, esi
// 005fddf0  5e                   pop esi
// 005fddf1  59                   pop ecx
// 005fddf2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
