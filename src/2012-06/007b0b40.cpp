// roc 2012-06 007b0b40  unit: std::D::DU?$char_traits::V?$basic_string::?$MemEnforcedLRUCache  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007b0b40
//
// 007b0b40  6aff                 push -1
// 007b0b42  6838f4ab00           push 0xabf438
// 007b0b47  64a100000000         mov eax, dword ptr fs:[0]
// 007b0b4d  50                   push eax
// 007b0b4e  64892500000000       mov dword ptr fs:[0], esp
// 007b0b55  51                   push ecx
// 007b0b56  56                   push esi
// 007b0b57  8bf1                 mov esi, ecx
// 007b0b59  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007b0b5d  83ec28               sub esp, 0x28
// 007b0b60  8bc4                 mov eax, esp
// 007b0b62  c70600000000         mov dword ptr [esi], 0
// 007b0b68  8d542444             lea edx, [esp + 0x44]
// 007b0b6c  8964242c             mov dword ptr [esp + 0x2c], esp
// 007b0b70  8908                 mov dword ptr [eax], ecx
// 007b0b72  8d4804               lea ecx, [eax + 4]
// 007b0b75  52                   push edx
// 007b0b76  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 007b0b7e  e8ddf1d6ff           call 0x51fd60
// 007b0b83  8bce                 mov ecx, esi
// 007b0b85  e8e6fbffff           call 0x7b0770
// 007b0b8a  8d4c241c             lea ecx, [esp + 0x1c]
// 007b0b8e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 007b0b96  e8b5cb0200           call 0x7dd750
// 007b0b9b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007b0b9f  8bc6                 mov eax, esi
// 007b0ba1  64890d00000000       mov dword ptr fs:[0], ecx
// 007b0ba8  5e                   pop esi
// 007b0ba9  83c410               add esp, 0x10
// 007b0bac  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$?0V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
