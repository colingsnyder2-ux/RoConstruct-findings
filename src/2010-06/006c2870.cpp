// roc 2010-06 006c2870  unit: RBX::VHole::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c2870
//
// 006c2870  51                   push ecx
// 006c2871  6a18                 push 0x18
// 006c2873  c744240400000000     mov dword ptr [esp + 4], 0
// 006c287b  e820510e00           call 0x7a79a0
// 006c2880  83c404               add esp, 4
// 006c2883  85c0                 test eax, eax
// 006c2885  7424                 je 0x6c28ab
// 006c2887  c7003c3ca400         mov dword ptr [eax], 0xa43c3c
// 006c288d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c2891  894808               mov dword ptr [eax + 8], ecx
// 006c2894  8b542410             mov edx, dword ptr [esp + 0x10]
// 006c2898  89500c               mov dword ptr [eax + 0xc], edx
// 006c289b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006c289f  894810               mov dword ptr [eax + 0x10], ecx
// 006c28a2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006c28a6  895014               mov dword ptr [eax + 0x14], edx
// 006c28a9  eb02                 jmp 0x6c28ad
// 006c28ab  33c0                 xor eax, eax
// 006c28ad  56                   push esi
// 006c28ae  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c28b2  6a00                 push 0
// 006c28b4  8906                 mov dword ptr [esi], eax
// 006c28b6  e8df500e00           call 0x7a799a
// 006c28bb  83c404               add esp, 4
// 006c28be  8bc6                 mov eax, esi
// 006c28c0  5e                   pop esi
// 006c28c1  59                   pop ecx
// 006c28c2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
