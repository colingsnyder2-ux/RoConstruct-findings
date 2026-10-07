// roc 2008-06 00445770  unit: G3D::VVector2int16::?$holder  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00445770
//
// 00445770  51                   push ecx
// 00445771  6a18                 push 0x18
// 00445773  c744240400000000     mov dword ptr [esp + 4], 0
// 0044577b  e8a0b12500           call 0x6a0920
// 00445780  83c404               add esp, 4
// 00445783  85c0                 test eax, eax
// 00445785  742c                 je 0x4457b3
// 00445787  c700545c8100         mov dword ptr [eax], 0x815c54
// 0044578d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00445791  894808               mov dword ptr [eax + 8], ecx
// 00445794  8b542410             mov edx, dword ptr [esp + 0x10]
// 00445798  89500c               mov dword ptr [eax + 0xc], edx
// 0044579b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0044579f  894810               mov dword ptr [eax + 0x10], ecx
// 004457a2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004457a6  8b542418             mov edx, dword ptr [esp + 0x18]
// 004457aa  895014               mov dword ptr [eax + 0x14], edx
// 004457ad  8901                 mov dword ptr [ecx], eax
// 004457af  8bc1                 mov eax, ecx
// 004457b1  59                   pop ecx
// 004457b2  c3                   ret 
// 004457b3  8b442408             mov eax, dword ptr [esp + 8]
// 004457b7  33c9                 xor ecx, ecx
// 004457b9  8908                 mov dword ptr [eax], ecx
// 004457bb  59                   pop ecx
// 004457bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
