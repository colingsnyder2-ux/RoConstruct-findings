// roc 2009-12 0066a860  unit: RBX::$$A6AXVRunTransition::?$signal::slot  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0066a860
//
// 0066a860  6aff                 push -1
// 0066a862  6818a19400           push 0x94a118
// 0066a867  64a100000000         mov eax, dword ptr fs:[0]
// 0066a86d  50                   push eax
// 0066a86e  64892500000000       mov dword ptr fs:[0], esp
// 0066a875  51                   push ecx
// 0066a876  56                   push esi
// 0066a877  8bf1                 mov esi, ecx
// 0066a879  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0066a87d  83ec20               sub esp, 0x20
// 0066a880  8bc4                 mov eax, esp
// 0066a882  c70600000000         mov dword ptr [esi], 0
// 0066a888  8d54243c             lea edx, [esp + 0x3c]
// 0066a88c  89642424             mov dword ptr [esp + 0x24], esp
// 0066a890  8908                 mov dword ptr [eax], ecx
// 0066a892  8d4804               lea ecx, [eax + 4]
// 0066a895  52                   push edx
// 0066a896  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0066a89e  ff15f0b69800         call dword ptr [0x98b6f0]
// 0066a8a4  8bce                 mov ecx, esi
// 0066a8a6  e8e5fbffff           call 0x66a490
// 0066a8ab  8d4c241c             lea ecx, [esp + 0x1c]
// 0066a8af  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0066a8b7  ff15e4b69800         call dword ptr [0x98b6e4]
// 0066a8bd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0066a8c1  8bc6                 mov eax, esi
// 0066a8c3  64890d00000000       mov dword ptr fs:[0], ecx
// 0066a8ca  5e                   pop esi
// 0066a8cb  83c410               add esp, 0x10
// 0066a8ce  c22400               ret 0x24
// library rbxgs/v8datamodel\DataModel.cpp (function ??$?0V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
