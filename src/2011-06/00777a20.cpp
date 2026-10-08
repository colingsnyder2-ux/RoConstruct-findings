// roc 2011-06 00777a20  unit: RBX::LibraryService::VLibraryStateObject::?$sp_counted_impl_p  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00777a20
//
// 00777a20  6aff                 push -1
// 00777a22  68e8b39f00           push 0x9fb3e8
// 00777a27  64a100000000         mov eax, dword ptr fs:[0]
// 00777a2d  50                   push eax
// 00777a2e  64892500000000       mov dword ptr fs:[0], esp
// 00777a35  51                   push ecx
// 00777a36  56                   push esi
// 00777a37  8bf1                 mov esi, ecx
// 00777a39  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00777a3d  83ec28               sub esp, 0x28
// 00777a40  8bc4                 mov eax, esp
// 00777a42  c70600000000         mov dword ptr [esi], 0
// 00777a48  8d542444             lea edx, [esp + 0x44]
// 00777a4c  8964242c             mov dword ptr [esp + 0x2c], esp
// 00777a50  8908                 mov dword ptr [eax], ecx
// 00777a52  8d4804               lea ecx, [eax + 4]
// 00777a55  52                   push edx
// 00777a56  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00777a5e  e8edcdffff           call 0x774850
// 00777a63  8bce                 mov ecx, esi
// 00777a65  e8e6f9ffff           call 0x777450
// 00777a6a  8d4c241c             lea ecx, [esp + 0x1c]
// 00777a6e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00777a76  e875c7ffff           call 0x7741f0
// 00777a7b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00777a7f  8bc6                 mov eax, esi
// 00777a81  64890d00000000       mov dword ptr fs:[0], ecx
// 00777a88  5e                   pop esi
// 00777a89  83c410               add esp, 0x10
// 00777a8c  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$?0V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
