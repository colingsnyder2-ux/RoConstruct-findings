// roc 2009-12 006dcee0  unit: RBX::Camera  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006dcee0
//
// 006dcee0  51                   push ecx
// 006dcee1  6a18                 push 0x18
// 006dcee3  c744240400000000     mov dword ptr [esp + 4], 0
// 006dceeb  e870691100           call 0x7f3860
// 006dcef0  83c404               add esp, 4
// 006dcef3  85c0                 test eax, eax
// 006dcef5  7424                 je 0x6dcf1b
// 006dcef7  c700a49c9d00         mov dword ptr [eax], 0x9d9ca4
// 006dcefd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006dcf01  894808               mov dword ptr [eax + 8], ecx
// 006dcf04  8b542410             mov edx, dword ptr [esp + 0x10]
// 006dcf08  89500c               mov dword ptr [eax + 0xc], edx
// 006dcf0b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006dcf0f  894810               mov dword ptr [eax + 0x10], ecx
// 006dcf12  8b542418             mov edx, dword ptr [esp + 0x18]
// 006dcf16  895014               mov dword ptr [eax + 0x14], edx
// 006dcf19  eb02                 jmp 0x6dcf1d
// 006dcf1b  33c0                 xor eax, eax
// 006dcf1d  56                   push esi
// 006dcf1e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006dcf22  6a00                 push 0
// 006dcf24  8906                 mov dword ptr [esi], eax
// 006dcf26  e82f691100           call 0x7f385a
// 006dcf2b  83c404               add esp, 4
// 006dcf2e  8bc6                 mov eax, esi
// 006dcf30  5e                   pop esi
// 006dcf31  59                   pop ecx
// 006dcf32  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
