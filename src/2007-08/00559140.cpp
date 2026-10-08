// roc 2007-08 00559140  unit: RBX::DataModel  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00559140
//
// 00559140  6aff                 push -1
// 00559142  68416e7500           push 0x756e41
// 00559147  64a100000000         mov eax, dword ptr fs:[0]
// 0055914d  50                   push eax
// 0055914e  64892500000000       mov dword ptr fs:[0], esp
// 00559155  51                   push ecx
// 00559156  8b442414             mov eax, dword ptr [esp + 0x14]
// 0055915a  89442414             mov dword ptr [esp + 0x14], eax
// 0055915e  890424               mov dword ptr [esp], eax
// 00559161  85c0                 test eax, eax
// 00559163  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0055916b  7414                 je 0x559181
// 0055916d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00559171  8b11                 mov edx, dword ptr [ecx]
// 00559173  83c104               add ecx, 4
// 00559176  51                   push ecx
// 00559177  8d4804               lea ecx, [eax + 4]
// 0055917a  8910                 mov dword ptr [eax], edx
// 0055917c  e8fff4ffff           call 0x558680
// 00559181  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00559185  64890d00000000       mov dword ptr fs:[0], ecx
// 0055918c  83c410               add esp, 0x10
// 0055918f  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??$_Construct@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@boost@@V123@@std@@YAXPAV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@boost@@ABV123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
