// roc 2011-06 00714b10  unit: RBX::TouchTransmitter  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00714b10
//
// 00714b10  51                   push ecx
// 00714b11  6a18                 push 0x18
// 00714b13  c744240400000000     mov dword ptr [esp + 4], 0
// 00714b1b  e83e550f00           call 0x80a05e
// 00714b20  83c404               add esp, 4
// 00714b23  85c0                 test eax, eax
// 00714b25  742c                 je 0x714b53
// 00714b27  c700ccf7aa00         mov dword ptr [eax], 0xaaf7cc
// 00714b2d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00714b31  894808               mov dword ptr [eax + 8], ecx
// 00714b34  8b542410             mov edx, dword ptr [esp + 0x10]
// 00714b38  89500c               mov dword ptr [eax + 0xc], edx
// 00714b3b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00714b3f  894810               mov dword ptr [eax + 0x10], ecx
// 00714b42  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00714b46  8b542418             mov edx, dword ptr [esp + 0x18]
// 00714b4a  895014               mov dword ptr [eax + 0x14], edx
// 00714b4d  8901                 mov dword ptr [ecx], eax
// 00714b4f  8bc1                 mov eax, ecx
// 00714b51  59                   pop ecx
// 00714b52  c3                   ret 
// 00714b53  8b442408             mov eax, dword ptr [esp + 8]
// 00714b57  33c9                 xor ecx, ecx
// 00714b59  8908                 mov dword ptr [eax], ecx
// 00714b5b  59                   pop ecx
// 00714b5c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
