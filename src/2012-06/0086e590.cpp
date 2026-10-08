// roc 2012-06 0086e590  unit: RBX::Network::P8Player::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0086e590
//
// 0086e590  51                   push ecx
// 0086e591  6a18                 push 0x18
// 0086e593  c744240400000000     mov dword ptr [esp + 4], 0
// 0086e59b  e87a3b1100           call 0x98211a
// 0086e5a0  83c404               add esp, 4
// 0086e5a3  85c0                 test eax, eax
// 0086e5a5  7424                 je 0x86e5cb
// 0086e5a7  c7009c70bd00         mov dword ptr [eax], 0xbd709c
// 0086e5ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0086e5b1  894808               mov dword ptr [eax + 8], ecx
// 0086e5b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0086e5b8  89500c               mov dword ptr [eax + 0xc], edx
// 0086e5bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0086e5bf  894810               mov dword ptr [eax + 0x10], ecx
// 0086e5c2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0086e5c6  895014               mov dword ptr [eax + 0x14], edx
// 0086e5c9  eb02                 jmp 0x86e5cd
// 0086e5cb  33c0                 xor eax, eax
// 0086e5cd  56                   push esi
// 0086e5ce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0086e5d2  6a00                 push 0
// 0086e5d4  8906                 mov dword ptr [esi], eax
// 0086e5d6  e8393b1100           call 0x982114
// 0086e5db  83c404               add esp, 4
// 0086e5de  8bc6                 mov eax, esi
// 0086e5e0  5e                   pop esi
// 0086e5e1  59                   pop ecx
// 0086e5e2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
