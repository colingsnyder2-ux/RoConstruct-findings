// roc 2011-06 006deb60  unit: RBX::P8Glue::?$GetSetImpl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006deb60
//
// 006deb60  51                   push ecx
// 006deb61  6a18                 push 0x18
// 006deb63  c744240400000000     mov dword ptr [esp + 4], 0
// 006deb6b  e8eeb41200           call 0x80a05e
// 006deb70  83c404               add esp, 4
// 006deb73  85c0                 test eax, eax
// 006deb75  742c                 je 0x6deba3
// 006deb77  c700f479aa00         mov dword ptr [eax], 0xaa79f4
// 006deb7d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006deb81  894808               mov dword ptr [eax + 8], ecx
// 006deb84  8b542410             mov edx, dword ptr [esp + 0x10]
// 006deb88  89500c               mov dword ptr [eax + 0xc], edx
// 006deb8b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006deb8f  894810               mov dword ptr [eax + 0x10], ecx
// 006deb92  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006deb96  8b542418             mov edx, dword ptr [esp + 0x18]
// 006deb9a  895014               mov dword ptr [eax + 0x14], edx
// 006deb9d  8901                 mov dword ptr [ecx], eax
// 006deb9f  8bc1                 mov eax, ecx
// 006deba1  59                   pop ecx
// 006deba2  c3                   ret 
// 006deba3  8b442408             mov eax, dword ptr [esp + 8]
// 006deba7  33c9                 xor ecx, ecx
// 006deba9  8908                 mov dword ptr [eax], ecx
// 006debab  59                   pop ecx
// 006debac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
