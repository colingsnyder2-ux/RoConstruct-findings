// roc 2012-06 0070c560  unit: RBX::Hopper  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0070c560
//
// 0070c560  51                   push ecx
// 0070c561  6a18                 push 0x18
// 0070c563  c744240400000000     mov dword ptr [esp + 4], 0
// 0070c56b  e8aa5b2700           call 0x98211a
// 0070c570  83c404               add esp, 4
// 0070c573  85c0                 test eax, eax
// 0070c575  7424                 je 0x70c59b
// 0070c577  c7001002ba00         mov dword ptr [eax], 0xba0210
// 0070c57d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070c581  894808               mov dword ptr [eax + 8], ecx
// 0070c584  8b542410             mov edx, dword ptr [esp + 0x10]
// 0070c588  89500c               mov dword ptr [eax + 0xc], edx
// 0070c58b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0070c58f  894810               mov dword ptr [eax + 0x10], ecx
// 0070c592  8b542418             mov edx, dword ptr [esp + 0x18]
// 0070c596  895014               mov dword ptr [eax + 0x14], edx
// 0070c599  eb02                 jmp 0x70c59d
// 0070c59b  33c0                 xor eax, eax
// 0070c59d  56                   push esi
// 0070c59e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0070c5a2  6a00                 push 0
// 0070c5a4  8906                 mov dword ptr [esi], eax
// 0070c5a6  e8695b2700           call 0x982114
// 0070c5ab  83c404               add esp, 4
// 0070c5ae  8bc6                 mov eax, esi
// 0070c5b0  5e                   pop esi
// 0070c5b1  59                   pop ecx
// 0070c5b2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
