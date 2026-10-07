// roc 2008-06 004456d0  unit: G3D::VVector2int16::?$holder  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004456d0
//
// 004456d0  51                   push ecx
// 004456d1  6a18                 push 0x18
// 004456d3  c744240400000000     mov dword ptr [esp + 4], 0
// 004456db  e840b22500           call 0x6a0920
// 004456e0  83c404               add esp, 4
// 004456e3  85c0                 test eax, eax
// 004456e5  742c                 je 0x445713
// 004456e7  c7002c5c8100         mov dword ptr [eax], 0x815c2c
// 004456ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004456f1  894808               mov dword ptr [eax + 8], ecx
// 004456f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 004456f8  89500c               mov dword ptr [eax + 0xc], edx
// 004456fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004456ff  894810               mov dword ptr [eax + 0x10], ecx
// 00445702  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00445706  8b542418             mov edx, dword ptr [esp + 0x18]
// 0044570a  895014               mov dword ptr [eax + 0x14], edx
// 0044570d  8901                 mov dword ptr [ecx], eax
// 0044570f  8bc1                 mov eax, ecx
// 00445711  59                   pop ecx
// 00445712  c3                   ret 
// 00445713  8b442408             mov eax, dword ptr [esp + 8]
// 00445717  33c9                 xor ecx, ecx
// 00445719  8908                 mov dword ptr [eax], ecx
// 0044571b  59                   pop ecx
// 0044571c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
