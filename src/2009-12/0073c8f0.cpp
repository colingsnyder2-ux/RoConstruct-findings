// roc 2009-12 0073c8f0  unit: RBX::AdornBillboarder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0073c8f0
//
// 0073c8f0  51                   push ecx
// 0073c8f1  6a18                 push 0x18
// 0073c8f3  c744240400000000     mov dword ptr [esp + 4], 0
// 0073c8fb  e8606f0b00           call 0x7f3860
// 0073c900  83c404               add esp, 4
// 0073c903  85c0                 test eax, eax
// 0073c905  7424                 je 0x73c92b
// 0073c907  c700781e9e00         mov dword ptr [eax], 0x9e1e78
// 0073c90d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0073c911  894808               mov dword ptr [eax + 8], ecx
// 0073c914  8b542410             mov edx, dword ptr [esp + 0x10]
// 0073c918  89500c               mov dword ptr [eax + 0xc], edx
// 0073c91b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0073c91f  894810               mov dword ptr [eax + 0x10], ecx
// 0073c922  8b542418             mov edx, dword ptr [esp + 0x18]
// 0073c926  895014               mov dword ptr [eax + 0x14], edx
// 0073c929  eb02                 jmp 0x73c92d
// 0073c92b  33c0                 xor eax, eax
// 0073c92d  56                   push esi
// 0073c92e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0073c932  6a00                 push 0
// 0073c934  8906                 mov dword ptr [esi], eax
// 0073c936  e81f6f0b00           call 0x7f385a
// 0073c93b  83c404               add esp, 4
// 0073c93e  8bc6                 mov eax, esi
// 0073c940  5e                   pop esi
// 0073c941  59                   pop ecx
// 0073c942  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
