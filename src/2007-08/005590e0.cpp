// roc 2007-08 005590e0  unit: RBX::DataModel  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005590e0
//
// 005590e0  6aff                 push -1
// 005590e2  68416e7500           push 0x756e41
// 005590e7  64a100000000         mov eax, dword ptr fs:[0]
// 005590ed  50                   push eax
// 005590ee  64892500000000       mov dword ptr fs:[0], esp
// 005590f5  51                   push ecx
// 005590f6  8b442414             mov eax, dword ptr [esp + 0x14]
// 005590fa  89442414             mov dword ptr [esp + 0x14], eax
// 005590fe  890424               mov dword ptr [esp], eax
// 00559101  85c0                 test eax, eax
// 00559103  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0055910b  7415                 je 0x559122
// 0055910d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00559111  8b11                 mov edx, dword ptr [ecx]
// 00559113  83c104               add ecx, 4
// 00559116  51                   push ecx
// 00559117  8d4804               lea ecx, [eax + 4]
// 0055911a  8910                 mov dword ptr [eax], edx
// 0055911c  ff159ce67700         call dword ptr [0x77e69c]
// 00559122  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00559126  64890d00000000       mov dword ptr fs:[0], ecx
// 0055912d  83c410               add esp, 0x10
// 00559130  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??$_Construct@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@V123@@std@@YAXPAV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@ABV123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
