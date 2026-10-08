// roc 2010-06 006dd950  unit: RBX::ScreenGui  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006dd950
//
// 006dd950  51                   push ecx
// 006dd951  6a18                 push 0x18
// 006dd953  c744240400000000     mov dword ptr [esp + 4], 0
// 006dd95b  e840a00c00           call 0x7a79a0
// 006dd960  83c404               add esp, 4
// 006dd963  85c0                 test eax, eax
// 006dd965  7424                 je 0x6dd98b
// 006dd967  c7000c73a400         mov dword ptr [eax], 0xa4730c
// 006dd96d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006dd971  894808               mov dword ptr [eax + 8], ecx
// 006dd974  8b542410             mov edx, dword ptr [esp + 0x10]
// 006dd978  89500c               mov dword ptr [eax + 0xc], edx
// 006dd97b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006dd97f  894810               mov dword ptr [eax + 0x10], ecx
// 006dd982  8b542418             mov edx, dword ptr [esp + 0x18]
// 006dd986  895014               mov dword ptr [eax + 0x14], edx
// 006dd989  eb02                 jmp 0x6dd98d
// 006dd98b  33c0                 xor eax, eax
// 006dd98d  56                   push esi
// 006dd98e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006dd992  6a00                 push 0
// 006dd994  8906                 mov dword ptr [esi], eax
// 006dd996  e8ff9f0c00           call 0x7a799a
// 006dd99b  83c404               add esp, 4
// 006dd99e  8bc6                 mov eax, esi
// 006dd9a0  5e                   pop esi
// 006dd9a1  59                   pop ecx
// 006dd9a2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
