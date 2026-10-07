// roc 2008-06 004a9ca0  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a9ca0
//
// 004a9ca0  51                   push ecx
// 004a9ca1  6a18                 push 0x18
// 004a9ca3  c744240400000000     mov dword ptr [esp + 4], 0
// 004a9cab  e8706c1f00           call 0x6a0920
// 004a9cb0  83c404               add esp, 4
// 004a9cb3  85c0                 test eax, eax
// 004a9cb5  742c                 je 0x4a9ce3
// 004a9cb7  c700243f8200         mov dword ptr [eax], 0x823f24
// 004a9cbd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a9cc1  894808               mov dword ptr [eax + 8], ecx
// 004a9cc4  8b542410             mov edx, dword ptr [esp + 0x10]
// 004a9cc8  89500c               mov dword ptr [eax + 0xc], edx
// 004a9ccb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004a9ccf  894810               mov dword ptr [eax + 0x10], ecx
// 004a9cd2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a9cd6  8b542418             mov edx, dword ptr [esp + 0x18]
// 004a9cda  895014               mov dword ptr [eax + 0x14], edx
// 004a9cdd  8901                 mov dword ptr [ecx], eax
// 004a9cdf  8bc1                 mov eax, ecx
// 004a9ce1  59                   pop ecx
// 004a9ce2  c3                   ret 
// 004a9ce3  8b442408             mov eax, dword ptr [esp + 8]
// 004a9ce7  33c9                 xor ecx, ecx
// 004a9ce9  8908                 mov dword ptr [eax], ecx
// 004a9ceb  59                   pop ecx
// 004a9cec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
