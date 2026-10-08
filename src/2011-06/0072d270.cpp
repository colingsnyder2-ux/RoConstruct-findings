// roc 2011-06 0072d270  unit: RBX::VMeshContentProvider::?$BoundFuncDesc  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0072d270
//
// 0072d270  6aff                 push -1
// 0072d272  6838839f00           push 0x9f8338
// 0072d277  64a100000000         mov eax, dword ptr fs:[0]
// 0072d27d  50                   push eax
// 0072d27e  64892500000000       mov dword ptr fs:[0], esp
// 0072d285  51                   push ecx
// 0072d286  56                   push esi
// 0072d287  8bf1                 mov esi, ecx
// 0072d289  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0072d28d  83ec28               sub esp, 0x28
// 0072d290  8bc4                 mov eax, esp
// 0072d292  c70600000000         mov dword ptr [esi], 0
// 0072d298  8d542444             lea edx, [esp + 0x44]
// 0072d29c  8964242c             mov dword ptr [esp + 0x2c], esp
// 0072d2a0  8908                 mov dword ptr [eax], ecx
// 0072d2a2  8d4804               lea ecx, [eax + 4]
// 0072d2a5  52                   push edx
// 0072d2a6  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0072d2ae  e86d101f00           call 0x91e320
// 0072d2b3  8bce                 mov ecx, esi
// 0072d2b5  e8e6fbffff           call 0x72cea0
// 0072d2ba  8d4c241c             lea ecx, [esp + 0x1c]
// 0072d2be  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0072d2c6  e805690400           call 0x773bd0
// 0072d2cb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0072d2cf  8bc6                 mov eax, esi
// 0072d2d1  64890d00000000       mov dword ptr fs:[0], ecx
// 0072d2d8  5e                   pop esi
// 0072d2d9  83c410               add esp, 0x10
// 0072d2dc  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$?0V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
