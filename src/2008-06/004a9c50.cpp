// roc 2008-06 004a9c50  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a9c50
//
// 004a9c50  51                   push ecx
// 004a9c51  6a18                 push 0x18
// 004a9c53  c744240400000000     mov dword ptr [esp + 4], 0
// 004a9c5b  e8c06c1f00           call 0x6a0920
// 004a9c60  83c404               add esp, 4
// 004a9c63  85c0                 test eax, eax
// 004a9c65  742c                 je 0x4a9c93
// 004a9c67  c700103f8200         mov dword ptr [eax], 0x823f10
// 004a9c6d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a9c71  894808               mov dword ptr [eax + 8], ecx
// 004a9c74  8b542410             mov edx, dword ptr [esp + 0x10]
// 004a9c78  89500c               mov dword ptr [eax + 0xc], edx
// 004a9c7b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004a9c7f  894810               mov dword ptr [eax + 0x10], ecx
// 004a9c82  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a9c86  8b542418             mov edx, dword ptr [esp + 0x18]
// 004a9c8a  895014               mov dword ptr [eax + 0x14], edx
// 004a9c8d  8901                 mov dword ptr [ecx], eax
// 004a9c8f  8bc1                 mov eax, ecx
// 004a9c91  59                   pop ecx
// 004a9c92  c3                   ret 
// 004a9c93  8b442408             mov eax, dword ptr [esp + 8]
// 004a9c97  33c9                 xor ecx, ecx
// 004a9c99  8908                 mov dword ptr [eax], ecx
// 004a9c9b  59                   pop ecx
// 004a9c9c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
