// roc 2011-06 005ef960  unit: boost::io::Vtoo_many_args::U?$error_info_injector::?$clone_impl  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005ef960
//
// 005ef960  6aff                 push -1
// 005ef962  6808e49e00           push 0x9ee408
// 005ef967  64a100000000         mov eax, dword ptr fs:[0]
// 005ef96d  50                   push eax
// 005ef96e  64892500000000       mov dword ptr fs:[0], esp
// 005ef975  51                   push ecx
// 005ef976  56                   push esi
// 005ef977  8bf1                 mov esi, ecx
// 005ef979  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005ef97d  83ec20               sub esp, 0x20
// 005ef980  8bc4                 mov eax, esp
// 005ef982  c70600000000         mov dword ptr [esi], 0
// 005ef988  8d54243c             lea edx, [esp + 0x3c]
// 005ef98c  89642424             mov dword ptr [esp + 0x24], esp
// 005ef990  8908                 mov dword ptr [eax], ecx
// 005ef992  8d4804               lea ecx, [eax + 4]
// 005ef995  52                   push edx
// 005ef996  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005ef99e  ff15c804a400         call dword ptr [0xa404c8]
// 005ef9a4  8bce                 mov ecx, esi
// 005ef9a6  e8f5eeffff           call 0x5ee8a0
// 005ef9ab  8d4c241c             lea ecx, [esp + 0x1c]
// 005ef9af  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005ef9b7  ff15d004a400         call dword ptr [0xa404d0]
// 005ef9bd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ef9c1  8bc6                 mov eax, esi
// 005ef9c3  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef9ca  5e                   pop esi
// 005ef9cb  83c410               add esp, 0x10
// 005ef9ce  c22400               ret 0x24
// library rbxgs/v8datamodel\DataModel.cpp (function ??$?0V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
