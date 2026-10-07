// roc 2008-06 00445680  unit: G3D::VVector2int16::?$holder  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00445680
//
// 00445680  51                   push ecx
// 00445681  6a18                 push 0x18
// 00445683  c744240400000000     mov dword ptr [esp + 4], 0
// 0044568b  e890b22500           call 0x6a0920
// 00445690  83c404               add esp, 4
// 00445693  85c0                 test eax, eax
// 00445695  742c                 je 0x4456c3
// 00445697  c700185c8100         mov dword ptr [eax], 0x815c18
// 0044569d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004456a1  894808               mov dword ptr [eax + 8], ecx
// 004456a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 004456a8  89500c               mov dword ptr [eax + 0xc], edx
// 004456ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004456af  894810               mov dword ptr [eax + 0x10], ecx
// 004456b2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004456b6  8b542418             mov edx, dword ptr [esp + 0x18]
// 004456ba  895014               mov dword ptr [eax + 0x14], edx
// 004456bd  8901                 mov dword ptr [ecx], eax
// 004456bf  8bc1                 mov eax, ecx
// 004456c1  59                   pop ecx
// 004456c2  c3                   ret 
// 004456c3  8b442408             mov eax, dword ptr [esp + 8]
// 004456c7  33c9                 xor ecx, ecx
// 004456c9  8908                 mov dword ptr [eax], ecx
// 004456cb  59                   pop ecx
// 004456cc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
