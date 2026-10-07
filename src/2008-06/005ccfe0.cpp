// roc 2008-06 005ccfe0  unit: RBX::P8Camera::?$GetSetImpl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ccfe0
//
// 005ccfe0  51                   push ecx
// 005ccfe1  6a18                 push 0x18
// 005ccfe3  c744240400000000     mov dword ptr [esp + 4], 0
// 005ccfeb  e830390d00           call 0x6a0920
// 005ccff0  83c404               add esp, 4
// 005ccff3  85c0                 test eax, eax
// 005ccff5  742c                 je 0x5cd023
// 005ccff7  c7000ca48300         mov dword ptr [eax], 0x83a40c
// 005ccffd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005cd001  894808               mov dword ptr [eax + 8], ecx
// 005cd004  8b542410             mov edx, dword ptr [esp + 0x10]
// 005cd008  89500c               mov dword ptr [eax + 0xc], edx
// 005cd00b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005cd00f  894810               mov dword ptr [eax + 0x10], ecx
// 005cd012  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cd016  8b542418             mov edx, dword ptr [esp + 0x18]
// 005cd01a  895014               mov dword ptr [eax + 0x14], edx
// 005cd01d  8901                 mov dword ptr [ecx], eax
// 005cd01f  8bc1                 mov eax, ecx
// 005cd021  59                   pop ecx
// 005cd022  c3                   ret 
// 005cd023  8b442408             mov eax, dword ptr [esp + 8]
// 005cd027  33c9                 xor ecx, ecx
// 005cd029  8908                 mov dword ptr [eax], ecx
// 005cd02b  59                   pop ecx
// 005cd02c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
