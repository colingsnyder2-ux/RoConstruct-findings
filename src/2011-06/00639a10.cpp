// roc 2011-06 00639a10  unit: RBX::VProtectedString::?$holder  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00639a10
//
// 00639a10  51                   push ecx
// 00639a11  6a18                 push 0x18
// 00639a13  c744240400000000     mov dword ptr [esp + 4], 0
// 00639a1b  e83e061d00           call 0x80a05e
// 00639a20  83c404               add esp, 4
// 00639a23  85c0                 test eax, eax
// 00639a25  742c                 je 0x639a53
// 00639a27  c700f474a900         mov dword ptr [eax], 0xa974f4
// 00639a2d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00639a31  894808               mov dword ptr [eax + 8], ecx
// 00639a34  8b542410             mov edx, dword ptr [esp + 0x10]
// 00639a38  89500c               mov dword ptr [eax + 0xc], edx
// 00639a3b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00639a3f  894810               mov dword ptr [eax + 0x10], ecx
// 00639a42  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00639a46  8b542418             mov edx, dword ptr [esp + 0x18]
// 00639a4a  895014               mov dword ptr [eax + 0x14], edx
// 00639a4d  8901                 mov dword ptr [ecx], eax
// 00639a4f  8bc1                 mov eax, ecx
// 00639a51  59                   pop ecx
// 00639a52  c3                   ret 
// 00639a53  8b442408             mov eax, dword ptr [esp + 8]
// 00639a57  33c9                 xor ecx, ecx
// 00639a59  8908                 mov dword ptr [eax], ecx
// 00639a5b  59                   pop ecx
// 00639a5c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
