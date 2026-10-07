// roc 2011-06 004e2f20  unit: RBX::Network::VClient::?$EventDesc  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004e2f20
//
// 004e2f20  51                   push ecx
// 004e2f21  6a18                 push 0x18
// 004e2f23  c744240400000000     mov dword ptr [esp + 4], 0
// 004e2f2b  e82e713200           call 0x80a05e
// 004e2f30  83c404               add esp, 4
// 004e2f33  85c0                 test eax, eax
// 004e2f35  742c                 je 0x4e2f63
// 004e2f37  c700a09ea700         mov dword ptr [eax], 0xa79ea0
// 004e2f3d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004e2f41  894808               mov dword ptr [eax + 8], ecx
// 004e2f44  8b542410             mov edx, dword ptr [esp + 0x10]
// 004e2f48  89500c               mov dword ptr [eax + 0xc], edx
// 004e2f4b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004e2f4f  894810               mov dword ptr [eax + 0x10], ecx
// 004e2f52  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004e2f56  8b542418             mov edx, dword ptr [esp + 0x18]
// 004e2f5a  895014               mov dword ptr [eax + 0x14], edx
// 004e2f5d  8901                 mov dword ptr [ecx], eax
// 004e2f5f  8bc1                 mov eax, ecx
// 004e2f61  59                   pop ecx
// 004e2f62  c3                   ret 
// 004e2f63  8b442408             mov eax, dword ptr [esp + 8]
// 004e2f67  33c9                 xor ecx, ecx
// 004e2f69  8908                 mov dword ptr [eax], ecx
// 004e2f6b  59                   pop ecx
// 004e2f6c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
