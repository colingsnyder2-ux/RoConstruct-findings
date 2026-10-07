// roc 2008-06 005ef470  unit: RBX::VDecal::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ef470
//
// 005ef470  51                   push ecx
// 005ef471  6a18                 push 0x18
// 005ef473  c744240400000000     mov dword ptr [esp + 4], 0
// 005ef47b  e8a0140b00           call 0x6a0920
// 005ef480  83c404               add esp, 4
// 005ef483  85c0                 test eax, eax
// 005ef485  742c                 je 0x5ef4b3
// 005ef487  c70084068400         mov dword ptr [eax], 0x840684
// 005ef48d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ef491  894808               mov dword ptr [eax + 8], ecx
// 005ef494  8b542410             mov edx, dword ptr [esp + 0x10]
// 005ef498  89500c               mov dword ptr [eax + 0xc], edx
// 005ef49b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005ef49f  894810               mov dword ptr [eax + 0x10], ecx
// 005ef4a2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ef4a6  8b542418             mov edx, dword ptr [esp + 0x18]
// 005ef4aa  895014               mov dword ptr [eax + 0x14], edx
// 005ef4ad  8901                 mov dword ptr [ecx], eax
// 005ef4af  8bc1                 mov eax, ecx
// 005ef4b1  59                   pop ecx
// 005ef4b2  c3                   ret 
// 005ef4b3  8b442408             mov eax, dword ptr [esp + 8]
// 005ef4b7  33c9                 xor ecx, ecx
// 005ef4b9  8908                 mov dword ptr [eax], ecx
// 005ef4bb  59                   pop ecx
// 005ef4bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
