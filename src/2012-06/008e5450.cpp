// roc 2012-06 008e5450  unit: RBX::P8SelectionPointLasso::?$GetSetImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008e5450
//
// 008e5450  51                   push ecx
// 008e5451  6a18                 push 0x18
// 008e5453  c744240400000000     mov dword ptr [esp + 4], 0
// 008e545b  e8bacc0900           call 0x98211a
// 008e5460  83c404               add esp, 4
// 008e5463  85c0                 test eax, eax
// 008e5465  7424                 je 0x8e548b
// 008e5467  c700c0c9be00         mov dword ptr [eax], 0xbec9c0
// 008e546d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e5471  894808               mov dword ptr [eax + 8], ecx
// 008e5474  8b542410             mov edx, dword ptr [esp + 0x10]
// 008e5478  89500c               mov dword ptr [eax + 0xc], edx
// 008e547b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e547f  894810               mov dword ptr [eax + 0x10], ecx
// 008e5482  8b542418             mov edx, dword ptr [esp + 0x18]
// 008e5486  895014               mov dword ptr [eax + 0x14], edx
// 008e5489  eb02                 jmp 0x8e548d
// 008e548b  33c0                 xor eax, eax
// 008e548d  56                   push esi
// 008e548e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008e5492  6a00                 push 0
// 008e5494  8906                 mov dword ptr [esi], eax
// 008e5496  e879cc0900           call 0x982114
// 008e549b  83c404               add esp, 4
// 008e549e  8bc6                 mov eax, esi
// 008e54a0  5e                   pop esi
// 008e54a1  59                   pop ecx
// 008e54a2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
