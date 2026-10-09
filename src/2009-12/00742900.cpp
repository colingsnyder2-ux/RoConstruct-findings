// roc 2009-12 00742900  unit: RBX::VHole::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00742900
//
// 00742900  51                   push ecx
// 00742901  6a18                 push 0x18
// 00742903  c744240400000000     mov dword ptr [esp + 4], 0
// 0074290b  e8500f0b00           call 0x7f3860
// 00742910  83c404               add esp, 4
// 00742913  85c0                 test eax, eax
// 00742915  7424                 je 0x74293b
// 00742917  c7005c2b9e00         mov dword ptr [eax], 0x9e2b5c
// 0074291d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00742921  894808               mov dword ptr [eax + 8], ecx
// 00742924  8b542410             mov edx, dword ptr [esp + 0x10]
// 00742928  89500c               mov dword ptr [eax + 0xc], edx
// 0074292b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0074292f  894810               mov dword ptr [eax + 0x10], ecx
// 00742932  8b542418             mov edx, dword ptr [esp + 0x18]
// 00742936  895014               mov dword ptr [eax + 0x14], edx
// 00742939  eb02                 jmp 0x74293d
// 0074293b  33c0                 xor eax, eax
// 0074293d  56                   push esi
// 0074293e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00742942  6a00                 push 0
// 00742944  8906                 mov dword ptr [esi], eax
// 00742946  e80f0f0b00           call 0x7f385a
// 0074294b  83c404               add esp, 4
// 0074294e  8bc6                 mov eax, esi
// 00742950  5e                   pop esi
// 00742951  59                   pop ecx
// 00742952  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
