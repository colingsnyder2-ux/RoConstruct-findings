// roc 2007-03 00556780  unit: seg_00550000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00556780
//
// 00556780  6aff                 push -1
// 00556782  68e1267500           push 0x7526e1
// 00556787  64a100000000         mov eax, dword ptr fs:[0]
// 0055678d  50                   push eax
// 0055678e  64892500000000       mov dword ptr fs:[0], esp
// 00556795  51                   push ecx
// 00556796  8b442414             mov eax, dword ptr [esp + 0x14]
// 0055679a  89442414             mov dword ptr [esp + 0x14], eax
// 0055679e  890424               mov dword ptr [esp], eax
// 005567a1  85c0                 test eax, eax
// 005567a3  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005567ab  7415                 je 0x5567c2
// 005567ad  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005567b1  8b11                 mov edx, dword ptr [ecx]
// 005567b3  83c104               add ecx, 4
// 005567b6  51                   push ecx
// 005567b7  8d4804               lea ecx, [eax + 4]
// 005567ba  8910                 mov dword ptr [eax], edx
// 005567bc  ff157ce77700         call dword ptr [0x77e77c]
// 005567c2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005567c6  64890d00000000       mov dword ptr fs:[0], ecx
// 005567cd  83c410               add esp, 0x10
// 005567d0  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??$_Construct@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@V123@@std@@YAXPAV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@ABV123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
