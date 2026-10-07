// roc 2011-06 00692ff0  unit: RBX::VSkin::?$BoundPropGetSet  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00692ff0
//
// 00692ff0  51                   push ecx
// 00692ff1  6a18                 push 0x18
// 00692ff3  c744240400000000     mov dword ptr [esp + 4], 0
// 00692ffb  e85e701700           call 0x80a05e
// 00693000  83c404               add esp, 4
// 00693003  85c0                 test eax, eax
// 00693005  742c                 je 0x693033
// 00693007  c700f413aa00         mov dword ptr [eax], 0xaa13f4
// 0069300d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00693011  894808               mov dword ptr [eax + 8], ecx
// 00693014  8b542410             mov edx, dword ptr [esp + 0x10]
// 00693018  89500c               mov dword ptr [eax + 0xc], edx
// 0069301b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069301f  894810               mov dword ptr [eax + 0x10], ecx
// 00693022  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00693026  8b542418             mov edx, dword ptr [esp + 0x18]
// 0069302a  895014               mov dword ptr [eax + 0x14], edx
// 0069302d  8901                 mov dword ptr [ecx], eax
// 0069302f  8bc1                 mov eax, ecx
// 00693031  59                   pop ecx
// 00693032  c3                   ret 
// 00693033  8b442408             mov eax, dword ptr [esp + 8]
// 00693037  33c9                 xor ecx, ecx
// 00693039  8908                 mov dword ptr [eax], ecx
// 0069303b  59                   pop ecx
// 0069303c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
