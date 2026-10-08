// roc 2012-06 008c8450  unit: RBX::P8Tool::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008c8450
//
// 008c8450  51                   push ecx
// 008c8451  6a18                 push 0x18
// 008c8453  c744240400000000     mov dword ptr [esp + 4], 0
// 008c845b  e8ba9c0b00           call 0x98211a
// 008c8460  83c404               add esp, 4
// 008c8463  85c0                 test eax, eax
// 008c8465  7424                 je 0x8c848b
// 008c8467  c7005c69be00         mov dword ptr [eax], 0xbe695c
// 008c846d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008c8471  894808               mov dword ptr [eax + 8], ecx
// 008c8474  8b542410             mov edx, dword ptr [esp + 0x10]
// 008c8478  89500c               mov dword ptr [eax + 0xc], edx
// 008c847b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c847f  894810               mov dword ptr [eax + 0x10], ecx
// 008c8482  8b542418             mov edx, dword ptr [esp + 0x18]
// 008c8486  895014               mov dword ptr [eax + 0x14], edx
// 008c8489  eb02                 jmp 0x8c848d
// 008c848b  33c0                 xor eax, eax
// 008c848d  56                   push esi
// 008c848e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008c8492  6a00                 push 0
// 008c8494  8906                 mov dword ptr [esi], eax
// 008c8496  e8799c0b00           call 0x982114
// 008c849b  83c404               add esp, 4
// 008c849e  8bc6                 mov eax, esi
// 008c84a0  5e                   pop esi
// 008c84a1  59                   pop ecx
// 008c84a2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
