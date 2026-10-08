// roc 2012-06 0086b810  unit: RBX::ContentFilter  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0086b810
//
// 0086b810  6aff                 push -1
// 0086b812  6838f4ab00           push 0xabf438
// 0086b817  64a100000000         mov eax, dword ptr fs:[0]
// 0086b81d  50                   push eax
// 0086b81e  64892500000000       mov dword ptr fs:[0], esp
// 0086b825  51                   push ecx
// 0086b826  56                   push esi
// 0086b827  8bf1                 mov esi, ecx
// 0086b829  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0086b82d  83ec28               sub esp, 0x28
// 0086b830  8bc4                 mov eax, esp
// 0086b832  c70600000000         mov dword ptr [esi], 0
// 0086b838  8d542444             lea edx, [esp + 0x44]
// 0086b83c  8964242c             mov dword ptr [esp + 0x2c], esp
// 0086b840  8908                 mov dword ptr [eax], ecx
// 0086b842  8d4804               lea ecx, [eax + 4]
// 0086b845  52                   push edx
// 0086b846  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0086b84e  e80d45cbff           call 0x51fd60
// 0086b853  8bce                 mov ecx, esi
// 0086b855  e8a6fcffff           call 0x86b500
// 0086b85a  8d4c241c             lea ecx, [esp + 0x1c]
// 0086b85e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0086b866  e8e51ef7ff           call 0x7dd750
// 0086b86b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0086b86f  8bc6                 mov eax, esi
// 0086b871  64890d00000000       mov dword ptr fs:[0], ecx
// 0086b878  5e                   pop esi
// 0086b879  83c410               add esp, 0x10
// 0086b87c  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$?0V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
