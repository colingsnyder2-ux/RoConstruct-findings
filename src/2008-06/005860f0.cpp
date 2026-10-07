// roc 2008-06 005860f0  unit: RBX::VLocalScript::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005860f0
//
// 005860f0  51                   push ecx
// 005860f1  6a18                 push 0x18
// 005860f3  c744240400000000     mov dword ptr [esp + 4], 0
// 005860fb  e820a81100           call 0x6a0920
// 00586100  83c404               add esp, 4
// 00586103  85c0                 test eax, eax
// 00586105  742c                 je 0x586133
// 00586107  c70048118300         mov dword ptr [eax], 0x831148
// 0058610d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00586111  894808               mov dword ptr [eax + 8], ecx
// 00586114  8b542410             mov edx, dword ptr [esp + 0x10]
// 00586118  89500c               mov dword ptr [eax + 0xc], edx
// 0058611b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0058611f  894810               mov dword ptr [eax + 0x10], ecx
// 00586122  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00586126  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058612a  895014               mov dword ptr [eax + 0x14], edx
// 0058612d  8901                 mov dword ptr [ecx], eax
// 0058612f  8bc1                 mov eax, ecx
// 00586131  59                   pop ecx
// 00586132  c3                   ret 
// 00586133  8b442408             mov eax, dword ptr [esp + 8]
// 00586137  33c9                 xor ecx, ecx
// 00586139  8908                 mov dword ptr [eax], ecx
// 0058613b  59                   pop ecx
// 0058613c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
