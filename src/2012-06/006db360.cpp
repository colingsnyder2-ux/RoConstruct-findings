// roc 2012-06 006db360  unit: RBX::DataModel::W4GearType::?$EnumDesc  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006db360
//
// 006db360  6aff                 push -1
// 006db362  682859ac00           push 0xac5928
// 006db367  64a100000000         mov eax, dword ptr fs:[0]
// 006db36d  50                   push eax
// 006db36e  64892500000000       mov dword ptr fs:[0], esp
// 006db375  51                   push ecx
// 006db376  56                   push esi
// 006db377  8bf1                 mov esi, ecx
// 006db379  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006db37d  83ec20               sub esp, 0x20
// 006db380  8bc4                 mov eax, esp
// 006db382  c70600000000         mov dword ptr [esi], 0
// 006db388  8d54243c             lea edx, [esp + 0x3c]
// 006db38c  89642424             mov dword ptr [esp + 0x24], esp
// 006db390  8908                 mov dword ptr [eax], ecx
// 006db392  8d4804               lea ecx, [eax + 4]
// 006db395  52                   push edx
// 006db396  c744243400000000     mov dword ptr [esp + 0x34], 0
// 006db39e  ff154426b200         call dword ptr [0xb22644]
// 006db3a4  8bce                 mov ecx, esi
// 006db3a6  e885efffff           call 0x6da330
// 006db3ab  8d4c241c             lea ecx, [esp + 0x1c]
// 006db3af  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006db3b7  ff153c26b200         call dword ptr [0xb2263c]
// 006db3bd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006db3c1  8bc6                 mov eax, esi
// 006db3c3  64890d00000000       mov dword ptr fs:[0], ecx
// 006db3ca  5e                   pop esi
// 006db3cb  83c410               add esp, 0x10
// 006db3ce  c22400               ret 0x24
// library rbxgs/v8datamodel\DataModel.cpp (function ??$?0V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
