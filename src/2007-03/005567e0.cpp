// roc 2007-03 005567e0  unit: seg_00550000  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005567e0
//
// 005567e0  6aff                 push -1
// 005567e2  68e1267500           push 0x7526e1
// 005567e7  64a100000000         mov eax, dword ptr fs:[0]
// 005567ed  50                   push eax
// 005567ee  64892500000000       mov dword ptr fs:[0], esp
// 005567f5  51                   push ecx
// 005567f6  8b442414             mov eax, dword ptr [esp + 0x14]
// 005567fa  89442414             mov dword ptr [esp + 0x14], eax
// 005567fe  890424               mov dword ptr [esp], eax
// 00556801  85c0                 test eax, eax
// 00556803  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0055680b  7414                 je 0x556821
// 0055680d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00556811  8b11                 mov edx, dword ptr [ecx]
// 00556813  83c104               add ecx, 4
// 00556816  51                   push ecx
// 00556817  8d4804               lea ecx, [eax + 4]
// 0055681a  8910                 mov dword ptr [eax], edx
// 0055681c  e8eff3ffff           call 0x555c10
// 00556821  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00556825  64890d00000000       mov dword ptr fs:[0], ecx
// 0055682c  83c410               add esp, 0x10
// 0055682f  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??$_Construct@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@boost@@V123@@std@@YAXPAV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@boost@@ABV123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
