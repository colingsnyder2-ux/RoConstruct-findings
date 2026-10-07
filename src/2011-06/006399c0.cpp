// roc 2011-06 006399c0  unit: RBX::VProtectedString::?$holder  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006399c0
//
// 006399c0  51                   push ecx
// 006399c1  6a18                 push 0x18
// 006399c3  c744240400000000     mov dword ptr [esp + 4], 0
// 006399cb  e88e061d00           call 0x80a05e
// 006399d0  83c404               add esp, 4
// 006399d3  85c0                 test eax, eax
// 006399d5  742c                 je 0x639a03
// 006399d7  c700e074a900         mov dword ptr [eax], 0xa974e0
// 006399dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006399e1  894808               mov dword ptr [eax + 8], ecx
// 006399e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006399e8  89500c               mov dword ptr [eax + 0xc], edx
// 006399eb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006399ef  894810               mov dword ptr [eax + 0x10], ecx
// 006399f2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006399f6  8b542418             mov edx, dword ptr [esp + 0x18]
// 006399fa  895014               mov dword ptr [eax + 0x14], edx
// 006399fd  8901                 mov dword ptr [ecx], eax
// 006399ff  8bc1                 mov eax, ecx
// 00639a01  59                   pop ecx
// 00639a02  c3                   ret 
// 00639a03  8b442408             mov eax, dword ptr [esp + 8]
// 00639a07  33c9                 xor ecx, ecx
// 00639a09  8908                 mov dword ptr [eax], ecx
// 00639a0b  59                   pop ecx
// 00639a0c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
