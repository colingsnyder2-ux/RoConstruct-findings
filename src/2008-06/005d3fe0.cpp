// roc 2008-06 005d3fe0  unit: RBX::VShirtGraphic::?$BoundPropGetSet  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d3fe0
//
// 005d3fe0  51                   push ecx
// 005d3fe1  6a18                 push 0x18
// 005d3fe3  c744240400000000     mov dword ptr [esp + 4], 0
// 005d3feb  e830c90c00           call 0x6a0920
// 005d3ff0  83c404               add esp, 4
// 005d3ff3  85c0                 test eax, eax
// 005d3ff5  742c                 je 0x5d4023
// 005d3ff7  c700d4c18300         mov dword ptr [eax], 0x83c1d4
// 005d3ffd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d4001  894808               mov dword ptr [eax + 8], ecx
// 005d4004  8b542410             mov edx, dword ptr [esp + 0x10]
// 005d4008  89500c               mov dword ptr [eax + 0xc], edx
// 005d400b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005d400f  894810               mov dword ptr [eax + 0x10], ecx
// 005d4012  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d4016  8b542418             mov edx, dword ptr [esp + 0x18]
// 005d401a  895014               mov dword ptr [eax + 0x14], edx
// 005d401d  8901                 mov dword ptr [ecx], eax
// 005d401f  8bc1                 mov eax, ecx
// 005d4021  59                   pop ecx
// 005d4022  c3                   ret 
// 005d4023  8b442408             mov eax, dword ptr [esp + 8]
// 005d4027  33c9                 xor ecx, ecx
// 005d4029  8908                 mov dword ptr [eax], ecx
// 005d402b  59                   pop ecx
// 005d402c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
