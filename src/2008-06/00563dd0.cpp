// roc 2008-06 00563dd0  unit: boost::any::N::?$holder  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00563dd0
//
// 00563dd0  51                   push ecx
// 00563dd1  6a18                 push 0x18
// 00563dd3  c744240400000000     mov dword ptr [esp + 4], 0
// 00563ddb  e840cb1300           call 0x6a0920
// 00563de0  83c404               add esp, 4
// 00563de3  85c0                 test eax, eax
// 00563de5  742c                 je 0x563e13
// 00563de7  c700d4e08200         mov dword ptr [eax], 0x82e0d4
// 00563ded  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00563df1  894808               mov dword ptr [eax + 8], ecx
// 00563df4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00563df8  89500c               mov dword ptr [eax + 0xc], edx
// 00563dfb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00563dff  894810               mov dword ptr [eax + 0x10], ecx
// 00563e02  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00563e06  8b542418             mov edx, dword ptr [esp + 0x18]
// 00563e0a  895014               mov dword ptr [eax + 0x14], edx
// 00563e0d  8901                 mov dword ptr [ecx], eax
// 00563e0f  8bc1                 mov eax, ecx
// 00563e11  59                   pop ecx
// 00563e12  c3                   ret 
// 00563e13  8b442408             mov eax, dword ptr [esp + 8]
// 00563e17  33c9                 xor ecx, ecx
// 00563e19  8908                 mov dword ptr [eax], ecx
// 00563e1b  59                   pop ecx
// 00563e1c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
