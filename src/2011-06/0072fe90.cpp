// roc 2011-06 0072fe90  unit: RBX::ContentFilter  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0072fe90
//
// 0072fe90  6aff                 push -1
// 0072fe92  6838839f00           push 0x9f8338
// 0072fe97  64a100000000         mov eax, dword ptr fs:[0]
// 0072fe9d  50                   push eax
// 0072fe9e  64892500000000       mov dword ptr fs:[0], esp
// 0072fea5  51                   push ecx
// 0072fea6  56                   push esi
// 0072fea7  8bf1                 mov esi, ecx
// 0072fea9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0072fead  83ec28               sub esp, 0x28
// 0072feb0  8bc4                 mov eax, esp
// 0072feb2  c70600000000         mov dword ptr [esi], 0
// 0072feb8  8d542444             lea edx, [esp + 0x44]
// 0072febc  8964242c             mov dword ptr [esp + 0x2c], esp
// 0072fec0  8908                 mov dword ptr [eax], ecx
// 0072fec2  8d4804               lea ecx, [eax + 4]
// 0072fec5  52                   push edx
// 0072fec6  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0072fece  e84de41e00           call 0x91e320
// 0072fed3  8bce                 mov ecx, esi
// 0072fed5  e876fcffff           call 0x72fb50
// 0072feda  8d4c241c             lea ecx, [esp + 0x1c]
// 0072fede  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0072fee6  e8e53c0400           call 0x773bd0
// 0072feeb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0072feef  8bc6                 mov eax, esi
// 0072fef1  64890d00000000       mov dword ptr fs:[0], ecx
// 0072fef8  5e                   pop esi
// 0072fef9  83c410               add esp, 0x10
// 0072fefc  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$?0V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
