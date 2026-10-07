// roc 2011-06 00678930  unit: RBX::VMeshId::?$holder  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00678930
//
// 00678930  51                   push ecx
// 00678931  6a18                 push 0x18
// 00678933  c744240400000000     mov dword ptr [esp + 4], 0
// 0067893b  e81e171900           call 0x80a05e
// 00678940  83c404               add esp, 4
// 00678943  85c0                 test eax, eax
// 00678945  742c                 je 0x678973
// 00678947  c700d4d6a900         mov dword ptr [eax], 0xa9d6d4
// 0067894d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00678951  894808               mov dword ptr [eax + 8], ecx
// 00678954  8b542410             mov edx, dword ptr [esp + 0x10]
// 00678958  89500c               mov dword ptr [eax + 0xc], edx
// 0067895b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0067895f  894810               mov dword ptr [eax + 0x10], ecx
// 00678962  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00678966  8b542418             mov edx, dword ptr [esp + 0x18]
// 0067896a  895014               mov dword ptr [eax + 0x14], edx
// 0067896d  8901                 mov dword ptr [ecx], eax
// 0067896f  8bc1                 mov eax, ecx
// 00678971  59                   pop ecx
// 00678972  c3                   ret 
// 00678973  8b442408             mov eax, dword ptr [esp + 8]
// 00678977  33c9                 xor ecx, ecx
// 00678979  8908                 mov dword ptr [eax], ecx
// 0067897b  59                   pop ecx
// 0067897c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
