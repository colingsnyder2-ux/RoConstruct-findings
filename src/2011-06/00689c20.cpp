// roc 2011-06 00689c20  unit: RBX::Network::P8Player::?$GetSetImpl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00689c20
//
// 00689c20  51                   push ecx
// 00689c21  6a18                 push 0x18
// 00689c23  c744240400000000     mov dword ptr [esp + 4], 0
// 00689c2b  e82e041800           call 0x80a05e
// 00689c30  83c404               add esp, 4
// 00689c33  85c0                 test eax, eax
// 00689c35  742c                 je 0x689c63
// 00689c37  c70018f5a900         mov dword ptr [eax], 0xa9f518
// 00689c3d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00689c41  894808               mov dword ptr [eax + 8], ecx
// 00689c44  8b542410             mov edx, dword ptr [esp + 0x10]
// 00689c48  89500c               mov dword ptr [eax + 0xc], edx
// 00689c4b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00689c4f  894810               mov dword ptr [eax + 0x10], ecx
// 00689c52  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00689c56  8b542418             mov edx, dword ptr [esp + 0x18]
// 00689c5a  895014               mov dword ptr [eax + 0x14], edx
// 00689c5d  8901                 mov dword ptr [ecx], eax
// 00689c5f  8bc1                 mov eax, ecx
// 00689c61  59                   pop ecx
// 00689c62  c3                   ret 
// 00689c63  8b442408             mov eax, dword ptr [esp + 8]
// 00689c67  33c9                 xor ecx, ecx
// 00689c69  8908                 mov dword ptr [eax], ecx
// 00689c6b  59                   pop ecx
// 00689c6c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
