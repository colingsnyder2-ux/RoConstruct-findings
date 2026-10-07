// roc 2011-06 00689bd0  unit: RBX::Network::P8Player::?$GetSetImpl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00689bd0
//
// 00689bd0  51                   push ecx
// 00689bd1  6a18                 push 0x18
// 00689bd3  c744240400000000     mov dword ptr [esp + 4], 0
// 00689bdb  e87e041800           call 0x80a05e
// 00689be0  83c404               add esp, 4
// 00689be3  85c0                 test eax, eax
// 00689be5  742c                 je 0x689c13
// 00689be7  c70004f5a900         mov dword ptr [eax], 0xa9f504
// 00689bed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00689bf1  894808               mov dword ptr [eax + 8], ecx
// 00689bf4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00689bf8  89500c               mov dword ptr [eax + 0xc], edx
// 00689bfb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00689bff  894810               mov dword ptr [eax + 0x10], ecx
// 00689c02  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00689c06  8b542418             mov edx, dword ptr [esp + 0x18]
// 00689c0a  895014               mov dword ptr [eax + 0x14], edx
// 00689c0d  8901                 mov dword ptr [ecx], eax
// 00689c0f  8bc1                 mov eax, ecx
// 00689c11  59                   pop ecx
// 00689c12  c3                   ret 
// 00689c13  8b442408             mov eax, dword ptr [esp + 8]
// 00689c17  33c9                 xor ecx, ecx
// 00689c19  8908                 mov dword ptr [eax], ecx
// 00689c1b  59                   pop ecx
// 00689c1c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
