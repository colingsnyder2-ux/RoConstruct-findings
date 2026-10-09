// roc 2009-12 006dfbf0  unit: RBX::FileMesh  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006dfbf0
//
// 006dfbf0  51                   push ecx
// 006dfbf1  6a18                 push 0x18
// 006dfbf3  c744240400000000     mov dword ptr [esp + 4], 0
// 006dfbfb  e8603c1100           call 0x7f3860
// 006dfc00  83c404               add esp, 4
// 006dfc03  85c0                 test eax, eax
// 006dfc05  7424                 je 0x6dfc2b
// 006dfc07  c7003ca49d00         mov dword ptr [eax], 0x9da43c
// 006dfc0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006dfc11  894808               mov dword ptr [eax + 8], ecx
// 006dfc14  8b542410             mov edx, dword ptr [esp + 0x10]
// 006dfc18  89500c               mov dword ptr [eax + 0xc], edx
// 006dfc1b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006dfc1f  894810               mov dword ptr [eax + 0x10], ecx
// 006dfc22  8b542418             mov edx, dword ptr [esp + 0x18]
// 006dfc26  895014               mov dword ptr [eax + 0x14], edx
// 006dfc29  eb02                 jmp 0x6dfc2d
// 006dfc2b  33c0                 xor eax, eax
// 006dfc2d  56                   push esi
// 006dfc2e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006dfc32  6a00                 push 0
// 006dfc34  8906                 mov dword ptr [esi], eax
// 006dfc36  e81f3c1100           call 0x7f385a
// 006dfc3b  83c404               add esp, 4
// 006dfc3e  8bc6                 mov eax, esi
// 006dfc40  5e                   pop esi
// 006dfc41  59                   pop ecx
// 006dfc42  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
