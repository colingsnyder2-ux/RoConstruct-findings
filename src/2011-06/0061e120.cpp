// roc 2011-06 0061e120  unit: boost::Vbad_lexical_cast::U?$error_info_injector::?$clone_impl  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0061e120
//
// 0061e120  6aff                 push -1
// 0061e122  6808e49e00           push 0x9ee408
// 0061e127  64a100000000         mov eax, dword ptr fs:[0]
// 0061e12d  50                   push eax
// 0061e12e  64892500000000       mov dword ptr fs:[0], esp
// 0061e135  51                   push ecx
// 0061e136  56                   push esi
// 0061e137  8bf1                 mov esi, ecx
// 0061e139  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0061e13d  83ec20               sub esp, 0x20
// 0061e140  8bc4                 mov eax, esp
// 0061e142  c70600000000         mov dword ptr [esi], 0
// 0061e148  8d54243c             lea edx, [esp + 0x3c]
// 0061e14c  89642424             mov dword ptr [esp + 0x24], esp
// 0061e150  8908                 mov dword ptr [eax], ecx
// 0061e152  8d4804               lea ecx, [eax + 4]
// 0061e155  52                   push edx
// 0061e156  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0061e15e  ff15c804a400         call dword ptr [0xa404c8]
// 0061e164  8bce                 mov ecx, esi
// 0061e166  e805fcffff           call 0x61dd70
// 0061e16b  8d4c241c             lea ecx, [esp + 0x1c]
// 0061e16f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0061e177  ff15d004a400         call dword ptr [0xa404d0]
// 0061e17d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0061e181  8bc6                 mov eax, esi
// 0061e183  64890d00000000       mov dword ptr fs:[0], ecx
// 0061e18a  5e                   pop esi
// 0061e18b  83c410               add esp, 0x10
// 0061e18e  c22400               ret 0x24
// library rbxgs/v8datamodel\DataModel.cpp (function ??$?0V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
