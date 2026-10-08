// roc 2011-06 0072ff00  unit: RBX::ContentFilter  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0072ff00
//
// 0072ff00  6aff                 push -1
// 0072ff02  6838839f00           push 0x9f8338
// 0072ff07  64a100000000         mov eax, dword ptr fs:[0]
// 0072ff0d  50                   push eax
// 0072ff0e  64892500000000       mov dword ptr fs:[0], esp
// 0072ff15  51                   push ecx
// 0072ff16  56                   push esi
// 0072ff17  8bf1                 mov esi, ecx
// 0072ff19  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0072ff1d  83ec28               sub esp, 0x28
// 0072ff20  8bc4                 mov eax, esp
// 0072ff22  c70600000000         mov dword ptr [esi], 0
// 0072ff28  8d542444             lea edx, [esp + 0x44]
// 0072ff2c  8964242c             mov dword ptr [esp + 0x2c], esp
// 0072ff30  8908                 mov dword ptr [eax], ecx
// 0072ff32  8d4804               lea ecx, [eax + 4]
// 0072ff35  52                   push edx
// 0072ff36  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0072ff3e  e8dde31e00           call 0x91e320
// 0072ff43  8bce                 mov ecx, esi
// 0072ff45  e886fcffff           call 0x72fbd0
// 0072ff4a  8d4c241c             lea ecx, [esp + 0x1c]
// 0072ff4e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0072ff56  e8753c0400           call 0x773bd0
// 0072ff5b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0072ff5f  8bc6                 mov eax, esi
// 0072ff61  64890d00000000       mov dword ptr fs:[0], ecx
// 0072ff68  5e                   pop esi
// 0072ff69  83c410               add esp, 0x10
// 0072ff6c  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$?0V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
