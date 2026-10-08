// roc 2011-06 005ef9e0  unit: boost::io::Vtoo_many_args::U?$error_info_injector::?$clone_impl  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005ef9e0
//
// 005ef9e0  6aff                 push -1
// 005ef9e2  6828689e00           push 0x9e6828
// 005ef9e7  64a100000000         mov eax, dword ptr fs:[0]
// 005ef9ed  50                   push eax
// 005ef9ee  64892500000000       mov dword ptr fs:[0], esp
// 005ef9f5  51                   push ecx
// 005ef9f6  56                   push esi
// 005ef9f7  8bf1                 mov esi, ecx
// 005ef9f9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005ef9fd  83ec3c               sub esp, 0x3c
// 005efa00  8bc4                 mov eax, esp
// 005efa02  c70600000000         mov dword ptr [esi], 0
// 005efa08  8d542458             lea edx, [esp + 0x58]
// 005efa0c  89642440             mov dword ptr [esp + 0x40], esp
// 005efa10  8908                 mov dword ptr [eax], ecx
// 005efa12  8d4804               lea ecx, [eax + 4]
// 005efa15  52                   push edx
// 005efa16  c744245000000000     mov dword ptr [esp + 0x50], 0
// 005efa1e  e8bd2cfcff           call 0x5b26e0
// 005efa23  8bce                 mov ecx, esi
// 005efa25  e8f6eeffff           call 0x5ee920
// 005efa2a  8d4c241c             lea ecx, [esp + 0x1c]
// 005efa2e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005efa36  e8652bfcff           call 0x5b25a0
// 005efa3b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005efa3f  8bc6                 mov eax, esi
// 005efa41  64890d00000000       mov dword ptr fs:[0], ecx
// 005efa48  5e                   pop esi
// 005efa49  83c410               add esp, 0x10
// 005efa4c  c24000               ret 0x40
// library rbxgs/v8datamodel\DataModel.cpp (function ??$?0V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
