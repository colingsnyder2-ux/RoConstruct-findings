// roc 2010-06 006c08e0  unit: RBX::VDebrisService::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c08e0
//
// 006c08e0  51                   push ecx
// 006c08e1  6a18                 push 0x18
// 006c08e3  c744240400000000     mov dword ptr [esp + 4], 0
// 006c08eb  e8b0700e00           call 0x7a79a0
// 006c08f0  83c404               add esp, 4
// 006c08f3  85c0                 test eax, eax
// 006c08f5  7424                 je 0x6c091b
// 006c08f7  c7001439a400         mov dword ptr [eax], 0xa43914
// 006c08fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c0901  894808               mov dword ptr [eax + 8], ecx
// 006c0904  8b542410             mov edx, dword ptr [esp + 0x10]
// 006c0908  89500c               mov dword ptr [eax + 0xc], edx
// 006c090b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006c090f  894810               mov dword ptr [eax + 0x10], ecx
// 006c0912  8b542418             mov edx, dword ptr [esp + 0x18]
// 006c0916  895014               mov dword ptr [eax + 0x14], edx
// 006c0919  eb02                 jmp 0x6c091d
// 006c091b  33c0                 xor eax, eax
// 006c091d  56                   push esi
// 006c091e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c0922  6a00                 push 0
// 006c0924  8906                 mov dword ptr [esi], eax
// 006c0926  e86f700e00           call 0x7a799a
// 006c092b  83c404               add esp, 4
// 006c092e  8bc6                 mov eax, esi
// 006c0930  5e                   pop esi
// 006c0931  59                   pop ecx
// 006c0932  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
