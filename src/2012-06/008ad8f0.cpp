// roc 2012-06 008ad8f0  unit: RBX::Flag  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008ad8f0
//
// 008ad8f0  51                   push ecx
// 008ad8f1  6a18                 push 0x18
// 008ad8f3  c744240400000000     mov dword ptr [esp + 4], 0
// 008ad8fb  e81a480d00           call 0x98211a
// 008ad900  83c404               add esp, 4
// 008ad903  85c0                 test eax, eax
// 008ad905  7424                 je 0x8ad92b
// 008ad907  c700d00ebe00         mov dword ptr [eax], 0xbe0ed0
// 008ad90d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008ad911  894808               mov dword ptr [eax + 8], ecx
// 008ad914  8b542410             mov edx, dword ptr [esp + 0x10]
// 008ad918  89500c               mov dword ptr [eax + 0xc], edx
// 008ad91b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008ad91f  894810               mov dword ptr [eax + 0x10], ecx
// 008ad922  8b542418             mov edx, dword ptr [esp + 0x18]
// 008ad926  895014               mov dword ptr [eax + 0x14], edx
// 008ad929  eb02                 jmp 0x8ad92d
// 008ad92b  33c0                 xor eax, eax
// 008ad92d  56                   push esi
// 008ad92e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008ad932  6a00                 push 0
// 008ad934  8906                 mov dword ptr [esi], eax
// 008ad936  e8d9470d00           call 0x982114
// 008ad93b  83c404               add esp, 4
// 008ad93e  8bc6                 mov eax, esi
// 008ad940  5e                   pop esi
// 008ad941  59                   pop ecx
// 008ad942  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
