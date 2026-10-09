// roc 2009-12 006f50f0  unit: RBX::VPlayerMouse::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006f50f0
//
// 006f50f0  51                   push ecx
// 006f50f1  6a18                 push 0x18
// 006f50f3  c744240400000000     mov dword ptr [esp + 4], 0
// 006f50fb  e860e70f00           call 0x7f3860
// 006f5100  83c404               add esp, 4
// 006f5103  85c0                 test eax, eax
// 006f5105  7424                 je 0x6f512b
// 006f5107  c7005cc99d00         mov dword ptr [eax], 0x9dc95c
// 006f510d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f5111  894808               mov dword ptr [eax + 8], ecx
// 006f5114  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f5118  89500c               mov dword ptr [eax + 0xc], edx
// 006f511b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006f511f  894810               mov dword ptr [eax + 0x10], ecx
// 006f5122  8b542418             mov edx, dword ptr [esp + 0x18]
// 006f5126  895014               mov dword ptr [eax + 0x14], edx
// 006f5129  eb02                 jmp 0x6f512d
// 006f512b  33c0                 xor eax, eax
// 006f512d  56                   push esi
// 006f512e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f5132  6a00                 push 0
// 006f5134  8906                 mov dword ptr [esi], eax
// 006f5136  e81fe70f00           call 0x7f385a
// 006f513b  83c404               add esp, 4
// 006f513e  8bc6                 mov eax, esi
// 006f5140  5e                   pop esi
// 006f5141  59                   pop ecx
// 006f5142  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
