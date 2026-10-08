// roc 2010-06 006528e0  unit: RBX::Camera  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006528e0
//
// 006528e0  51                   push ecx
// 006528e1  6a18                 push 0x18
// 006528e3  c744240400000000     mov dword ptr [esp + 4], 0
// 006528eb  e8b0501500           call 0x7a79a0
// 006528f0  83c404               add esp, 4
// 006528f3  85c0                 test eax, eax
// 006528f5  7424                 je 0x65291b
// 006528f7  c7008495a300         mov dword ptr [eax], 0xa39584
// 006528fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00652901  894808               mov dword ptr [eax + 8], ecx
// 00652904  8b542410             mov edx, dword ptr [esp + 0x10]
// 00652908  89500c               mov dword ptr [eax + 0xc], edx
// 0065290b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065290f  894810               mov dword ptr [eax + 0x10], ecx
// 00652912  8b542418             mov edx, dword ptr [esp + 0x18]
// 00652916  895014               mov dword ptr [eax + 0x14], edx
// 00652919  eb02                 jmp 0x65291d
// 0065291b  33c0                 xor eax, eax
// 0065291d  56                   push esi
// 0065291e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00652922  6a00                 push 0
// 00652924  8906                 mov dword ptr [esi], eax
// 00652926  e86f501500           call 0x7a799a
// 0065292b  83c404               add esp, 4
// 0065292e  8bc6                 mov eax, esi
// 00652930  5e                   pop esi
// 00652931  59                   pop ecx
// 00652932  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
