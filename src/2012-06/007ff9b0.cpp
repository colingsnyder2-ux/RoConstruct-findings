// roc 2012-06 007ff9b0  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::?$signal::Vslot::?$callable  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007ff9b0
//
// 007ff9b0  6aff                 push -1
// 007ff9b2  6838f4ab00           push 0xabf438
// 007ff9b7  64a100000000         mov eax, dword ptr fs:[0]
// 007ff9bd  50                   push eax
// 007ff9be  64892500000000       mov dword ptr fs:[0], esp
// 007ff9c5  51                   push ecx
// 007ff9c6  56                   push esi
// 007ff9c7  8bf1                 mov esi, ecx
// 007ff9c9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007ff9cd  83ec28               sub esp, 0x28
// 007ff9d0  8bc4                 mov eax, esp
// 007ff9d2  c70600000000         mov dword ptr [esi], 0
// 007ff9d8  8d542444             lea edx, [esp + 0x44]
// 007ff9dc  8964242c             mov dword ptr [esp + 0x2c], esp
// 007ff9e0  8908                 mov dword ptr [eax], ecx
// 007ff9e2  8d4804               lea ecx, [eax + 4]
// 007ff9e5  52                   push edx
// 007ff9e6  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 007ff9ee  e86d03d2ff           call 0x51fd60
// 007ff9f3  8bce                 mov ecx, esi
// 007ff9f5  e876fbffff           call 0x7ff570
// 007ff9fa  8d4c241c             lea ecx, [esp + 0x1c]
// 007ff9fe  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 007ffa06  e845ddfdff           call 0x7dd750
// 007ffa0b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007ffa0f  8bc6                 mov eax, esi
// 007ffa11  64890d00000000       mov dword ptr fs:[0], ecx
// 007ffa18  5e                   pop esi
// 007ffa19  83c410               add esp, 0x10
// 007ffa1c  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$?0V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
