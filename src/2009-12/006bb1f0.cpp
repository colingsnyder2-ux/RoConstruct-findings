// roc 2009-12 006bb1f0  unit: RBX::VDecal::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006bb1f0
//
// 006bb1f0  51                   push ecx
// 006bb1f1  6a18                 push 0x18
// 006bb1f3  c744240400000000     mov dword ptr [esp + 4], 0
// 006bb1fb  e860861300           call 0x7f3860
// 006bb200  83c404               add esp, 4
// 006bb203  85c0                 test eax, eax
// 006bb205  7424                 je 0x6bb22b
// 006bb207  c7002c679d00         mov dword ptr [eax], 0x9d672c
// 006bb20d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006bb211  894808               mov dword ptr [eax + 8], ecx
// 006bb214  8b542410             mov edx, dword ptr [esp + 0x10]
// 006bb218  89500c               mov dword ptr [eax + 0xc], edx
// 006bb21b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006bb21f  894810               mov dword ptr [eax + 0x10], ecx
// 006bb222  8b542418             mov edx, dword ptr [esp + 0x18]
// 006bb226  895014               mov dword ptr [eax + 0x14], edx
// 006bb229  eb02                 jmp 0x6bb22d
// 006bb22b  33c0                 xor eax, eax
// 006bb22d  56                   push esi
// 006bb22e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006bb232  6a00                 push 0
// 006bb234  8906                 mov dword ptr [esi], eax
// 006bb236  e81f861300           call 0x7f385a
// 006bb23b  83c404               add esp, 4
// 006bb23e  8bc6                 mov eax, esi
// 006bb240  5e                   pop esi
// 006bb241  59                   pop ecx
// 006bb242  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
