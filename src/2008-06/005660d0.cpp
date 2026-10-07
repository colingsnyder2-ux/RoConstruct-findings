// roc 2008-06 005660d0  unit: RBX::Team  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005660d0
//
// 005660d0  51                   push ecx
// 005660d1  6a18                 push 0x18
// 005660d3  c744240400000000     mov dword ptr [esp + 4], 0
// 005660db  e840a81300           call 0x6a0920
// 005660e0  83c404               add esp, 4
// 005660e3  85c0                 test eax, eax
// 005660e5  742c                 je 0x566113
// 005660e7  c700f4e98200         mov dword ptr [eax], 0x82e9f4
// 005660ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005660f1  894808               mov dword ptr [eax + 8], ecx
// 005660f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005660f8  89500c               mov dword ptr [eax + 0xc], edx
// 005660fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005660ff  894810               mov dword ptr [eax + 0x10], ecx
// 00566102  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00566106  8b542418             mov edx, dword ptr [esp + 0x18]
// 0056610a  895014               mov dword ptr [eax + 0x14], edx
// 0056610d  8901                 mov dword ptr [ecx], eax
// 0056610f  8bc1                 mov eax, ecx
// 00566111  59                   pop ecx
// 00566112  c3                   ret 
// 00566113  8b442408             mov eax, dword ptr [esp + 8]
// 00566117  33c9                 xor ecx, ecx
// 00566119  8908                 mov dword ptr [eax], ecx
// 0056611b  59                   pop ecx
// 0056611c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
