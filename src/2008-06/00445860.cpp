// roc 2008-06 00445860  unit: G3D::VVector2int16::?$holder  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00445860
//
// 00445860  51                   push ecx
// 00445861  6a18                 push 0x18
// 00445863  c744240400000000     mov dword ptr [esp + 4], 0
// 0044586b  e8b0b02500           call 0x6a0920
// 00445870  83c404               add esp, 4
// 00445873  85c0                 test eax, eax
// 00445875  742c                 je 0x4458a3
// 00445877  c700905c8100         mov dword ptr [eax], 0x815c90
// 0044587d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00445881  894808               mov dword ptr [eax + 8], ecx
// 00445884  8b542410             mov edx, dword ptr [esp + 0x10]
// 00445888  89500c               mov dword ptr [eax + 0xc], edx
// 0044588b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0044588f  894810               mov dword ptr [eax + 0x10], ecx
// 00445892  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00445896  8b542418             mov edx, dword ptr [esp + 0x18]
// 0044589a  895014               mov dword ptr [eax + 0x14], edx
// 0044589d  8901                 mov dword ptr [ecx], eax
// 0044589f  8bc1                 mov eax, ecx
// 004458a1  59                   pop ecx
// 004458a2  c3                   ret 
// 004458a3  8b442408             mov eax, dword ptr [esp + 8]
// 004458a7  33c9                 xor ecx, ecx
// 004458a9  8908                 mov dword ptr [eax], ecx
// 004458ab  59                   pop ecx
// 004458ac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
