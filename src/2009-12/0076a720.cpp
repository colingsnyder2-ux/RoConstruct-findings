// roc 2009-12 0076a720  unit: RBX::ContentFilter  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0076a720
//
// 0076a720  6aff                 push -1
// 0076a722  68f8269500           push 0x9526f8
// 0076a727  64a100000000         mov eax, dword ptr fs:[0]
// 0076a72d  50                   push eax
// 0076a72e  64892500000000       mov dword ptr fs:[0], esp
// 0076a735  51                   push ecx
// 0076a736  56                   push esi
// 0076a737  8bf1                 mov esi, ecx
// 0076a739  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0076a73d  83ec28               sub esp, 0x28
// 0076a740  8bc4                 mov eax, esp
// 0076a742  c70600000000         mov dword ptr [esi], 0
// 0076a748  8d542444             lea edx, [esp + 0x44]
// 0076a74c  8964242c             mov dword ptr [esp + 0x2c], esp
// 0076a750  8908                 mov dword ptr [eax], ecx
// 0076a752  8d4804               lea ecx, [eax + 4]
// 0076a755  52                   push edx
// 0076a756  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0076a75e  e82de3ffff           call 0x768a90
// 0076a763  8bce                 mov ecx, esi
// 0076a765  e846feffff           call 0x76a5b0
// 0076a76a  8d4c241c             lea ecx, [esp + 0x1c]
// 0076a76e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0076a776  e83567f7ff           call 0x6e0eb0
// 0076a77b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0076a77f  8bc6                 mov eax, esi
// 0076a781  64890d00000000       mov dword ptr fs:[0], ecx
// 0076a788  5e                   pop esi
// 0076a789  83c410               add esp, 0x10
// 0076a78c  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$?0V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
