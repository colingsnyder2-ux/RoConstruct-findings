// roc 2009-12 006e2980  unit: RBX::Smoke  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006e2980
//
// 006e2980  51                   push ecx
// 006e2981  6a18                 push 0x18
// 006e2983  c744240400000000     mov dword ptr [esp + 4], 0
// 006e298b  e8d00e1100           call 0x7f3860
// 006e2990  83c404               add esp, 4
// 006e2993  85c0                 test eax, eax
// 006e2995  7424                 je 0x6e29bb
// 006e2997  c7003ca99d00         mov dword ptr [eax], 0x9da93c
// 006e299d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e29a1  894808               mov dword ptr [eax + 8], ecx
// 006e29a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006e29a8  89500c               mov dword ptr [eax + 0xc], edx
// 006e29ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006e29af  894810               mov dword ptr [eax + 0x10], ecx
// 006e29b2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006e29b6  895014               mov dword ptr [eax + 0x14], edx
// 006e29b9  eb02                 jmp 0x6e29bd
// 006e29bb  33c0                 xor eax, eax
// 006e29bd  56                   push esi
// 006e29be  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e29c2  6a00                 push 0
// 006e29c4  8906                 mov dword ptr [esi], eax
// 006e29c6  e88f0e1100           call 0x7f385a
// 006e29cb  83c404               add esp, 4
// 006e29ce  8bc6                 mov eax, esi
// 006e29d0  5e                   pop esi
// 006e29d1  59                   pop ecx
// 006e29d2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
