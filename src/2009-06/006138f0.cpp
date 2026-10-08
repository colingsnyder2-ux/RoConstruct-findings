// roc 2009-06 006138f0  unit: boost::iostreams::Uoutput::V?$chain::?$chain_client  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006138f0
//
// 006138f0  51                   push ecx
// 006138f1  6a18                 push 0x18
// 006138f3  c744240400000000     mov dword ptr [esp + 4], 0
// 006138fb  e838511000           call 0x718a38
// 00613900  83c404               add esp, 4
// 00613903  85c0                 test eax, eax
// 00613905  7424                 je 0x61392b
// 00613907  c700e08b8d00         mov dword ptr [eax], 0x8d8be0
// 0061390d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00613911  894808               mov dword ptr [eax + 8], ecx
// 00613914  8b542410             mov edx, dword ptr [esp + 0x10]
// 00613918  89500c               mov dword ptr [eax + 0xc], edx
// 0061391b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0061391f  894810               mov dword ptr [eax + 0x10], ecx
// 00613922  8b542418             mov edx, dword ptr [esp + 0x18]
// 00613926  895014               mov dword ptr [eax + 0x14], edx
// 00613929  eb02                 jmp 0x61392d
// 0061392b  33c0                 xor eax, eax
// 0061392d  56                   push esi
// 0061392e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00613932  6a00                 push 0
// 00613934  8906                 mov dword ptr [esi], eax
// 00613936  e8f7501000           call 0x718a32
// 0061393b  83c404               add esp, 4
// 0061393e  8bc6                 mov eax, esi
// 00613940  5e                   pop esi
// 00613941  59                   pop ecx
// 00613942  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
