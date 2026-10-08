// roc 2009-06 005ff210  unit: RBX::$$A6AXVRunTransition::?$signal::slot  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ff210
//
// 005ff210  6aff                 push -1
// 005ff212  6818c18500           push 0x85c118
// 005ff217  64a100000000         mov eax, dword ptr fs:[0]
// 005ff21d  50                   push eax
// 005ff21e  64892500000000       mov dword ptr fs:[0], esp
// 005ff225  51                   push ecx
// 005ff226  56                   push esi
// 005ff227  8bf1                 mov esi, ecx
// 005ff229  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005ff22d  83ec20               sub esp, 0x20
// 005ff230  8bc4                 mov eax, esp
// 005ff232  c70600000000         mov dword ptr [esi], 0
// 005ff238  8d54243c             lea edx, [esp + 0x3c]
// 005ff23c  89642424             mov dword ptr [esp + 0x24], esp
// 005ff240  8908                 mov dword ptr [eax], ecx
// 005ff242  8d4804               lea ecx, [eax + 4]
// 005ff245  52                   push edx
// 005ff246  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005ff24e  ff15b8e48900         call dword ptr [0x89e4b8]
// 005ff254  8bce                 mov ecx, esi
// 005ff256  e835faffff           call 0x5fec90
// 005ff25b  8d4c241c             lea ecx, [esp + 0x1c]
// 005ff25f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005ff267  ff15c4e48900         call dword ptr [0x89e4c4]
// 005ff26d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ff271  8bc6                 mov eax, esi
// 005ff273  64890d00000000       mov dword ptr fs:[0], ecx
// 005ff27a  5e                   pop esi
// 005ff27b  83c410               add esp, 0x10
// 005ff27e  c22400               ret 0x24
// library rbxgs/v8datamodel\DataModel.cpp (function ??$?0V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
