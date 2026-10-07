// roc 2008-06 00563e70  unit: boost::any::N::?$holder  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00563e70
//
// 00563e70  51                   push ecx
// 00563e71  6a18                 push 0x18
// 00563e73  c744240400000000     mov dword ptr [esp + 4], 0
// 00563e7b  e8a0ca1300           call 0x6a0920
// 00563e80  83c404               add esp, 4
// 00563e83  85c0                 test eax, eax
// 00563e85  742c                 je 0x563eb3
// 00563e87  c700fce08200         mov dword ptr [eax], 0x82e0fc
// 00563e8d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00563e91  894808               mov dword ptr [eax + 8], ecx
// 00563e94  8b542410             mov edx, dword ptr [esp + 0x10]
// 00563e98  89500c               mov dword ptr [eax + 0xc], edx
// 00563e9b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00563e9f  894810               mov dword ptr [eax + 0x10], ecx
// 00563ea2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00563ea6  8b542418             mov edx, dword ptr [esp + 0x18]
// 00563eaa  895014               mov dword ptr [eax + 0x14], edx
// 00563ead  8901                 mov dword ptr [ecx], eax
// 00563eaf  8bc1                 mov eax, ecx
// 00563eb1  59                   pop ecx
// 00563eb2  c3                   ret 
// 00563eb3  8b442408             mov eax, dword ptr [esp + 8]
// 00563eb7  33c9                 xor ecx, ecx
// 00563eb9  8908                 mov dword ptr [eax], ecx
// 00563ebb  59                   pop ecx
// 00563ebc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
