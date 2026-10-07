// roc 2008-06 00597910  unit: RBX::VDecal::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00597910
//
// 00597910  51                   push ecx
// 00597911  6a18                 push 0x18
// 00597913  c744240400000000     mov dword ptr [esp + 4], 0
// 0059791b  e800901000           call 0x6a0920
// 00597920  83c404               add esp, 4
// 00597923  85c0                 test eax, eax
// 00597925  742c                 je 0x597953
// 00597927  c70058248300         mov dword ptr [eax], 0x832458
// 0059792d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00597931  894808               mov dword ptr [eax + 8], ecx
// 00597934  8b542410             mov edx, dword ptr [esp + 0x10]
// 00597938  89500c               mov dword ptr [eax + 0xc], edx
// 0059793b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059793f  894810               mov dword ptr [eax + 0x10], ecx
// 00597942  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00597946  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059794a  895014               mov dword ptr [eax + 0x14], edx
// 0059794d  8901                 mov dword ptr [ecx], eax
// 0059794f  8bc1                 mov eax, ecx
// 00597951  59                   pop ecx
// 00597952  c3                   ret 
// 00597953  8b442408             mov eax, dword ptr [esp + 8]
// 00597957  33c9                 xor ecx, ecx
// 00597959  8908                 mov dword ptr [eax], ecx
// 0059795b  59                   pop ecx
// 0059795c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
