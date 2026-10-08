// roc 2010-06 00628fd0  unit: RBX::VDecal::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00628fd0
//
// 00628fd0  51                   push ecx
// 00628fd1  6a18                 push 0x18
// 00628fd3  c744240400000000     mov dword ptr [esp + 4], 0
// 00628fdb  e8c0e91700           call 0x7a79a0
// 00628fe0  83c404               add esp, 4
// 00628fe3  85c0                 test eax, eax
// 00628fe5  7424                 je 0x62900b
// 00628fe7  c7009c52a300         mov dword ptr [eax], 0xa3529c
// 00628fed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00628ff1  894808               mov dword ptr [eax + 8], ecx
// 00628ff4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00628ff8  89500c               mov dword ptr [eax + 0xc], edx
// 00628ffb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00628fff  894810               mov dword ptr [eax + 0x10], ecx
// 00629002  8b542418             mov edx, dword ptr [esp + 0x18]
// 00629006  895014               mov dword ptr [eax + 0x14], edx
// 00629009  eb02                 jmp 0x62900d
// 0062900b  33c0                 xor eax, eax
// 0062900d  56                   push esi
// 0062900e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00629012  6a00                 push 0
// 00629014  8906                 mov dword ptr [esi], eax
// 00629016  e87fe91700           call 0x7a799a
// 0062901b  83c404               add esp, 4
// 0062901e  8bc6                 mov eax, esi
// 00629020  5e                   pop esi
// 00629021  59                   pop ecx
// 00629022  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
