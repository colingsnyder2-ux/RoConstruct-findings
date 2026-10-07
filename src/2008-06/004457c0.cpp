// roc 2008-06 004457c0  unit: G3D::VVector2int16::?$holder  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004457c0
//
// 004457c0  51                   push ecx
// 004457c1  6a18                 push 0x18
// 004457c3  c744240400000000     mov dword ptr [esp + 4], 0
// 004457cb  e850b12500           call 0x6a0920
// 004457d0  83c404               add esp, 4
// 004457d3  85c0                 test eax, eax
// 004457d5  742c                 je 0x445803
// 004457d7  c700685c8100         mov dword ptr [eax], 0x815c68
// 004457dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004457e1  894808               mov dword ptr [eax + 8], ecx
// 004457e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 004457e8  89500c               mov dword ptr [eax + 0xc], edx
// 004457eb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004457ef  894810               mov dword ptr [eax + 0x10], ecx
// 004457f2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004457f6  8b542418             mov edx, dword ptr [esp + 0x18]
// 004457fa  895014               mov dword ptr [eax + 0x14], edx
// 004457fd  8901                 mov dword ptr [ecx], eax
// 004457ff  8bc1                 mov eax, ecx
// 00445801  59                   pop ecx
// 00445802  c3                   ret 
// 00445803  8b442408             mov eax, dword ptr [esp + 8]
// 00445807  33c9                 xor ecx, ecx
// 00445809  8908                 mov dword ptr [eax], ecx
// 0044580b  59                   pop ecx
// 0044580c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
