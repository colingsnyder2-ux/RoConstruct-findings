// roc 2012-06 0054aff0  unit: RBX::VInsertService::?$FactoryProduct::Creator  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0054aff0
//
// 0054aff0  6aff                 push -1
// 0054aff2  6848d8ac00           push 0xacd848
// 0054aff7  64a100000000         mov eax, dword ptr fs:[0]
// 0054affd  50                   push eax
// 0054affe  64892500000000       mov dword ptr fs:[0], esp
// 0054b005  51                   push ecx
// 0054b006  56                   push esi
// 0054b007  8bf1                 mov esi, ecx
// 0054b009  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0054b00d  83ec28               sub esp, 0x28
// 0054b010  8bc4                 mov eax, esp
// 0054b012  c70600000000         mov dword ptr [esi], 0
// 0054b018  8d542444             lea edx, [esp + 0x44]
// 0054b01c  8964242c             mov dword ptr [esp + 0x2c], esp
// 0054b020  8908                 mov dword ptr [eax], ecx
// 0054b022  8d4804               lea ecx, [eax + 4]
// 0054b025  52                   push edx
// 0054b026  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0054b02e  e8fdba2f00           call 0x846b30
// 0054b033  8bce                 mov ecx, esi
// 0054b035  e8e6eeffff           call 0x549f20
// 0054b03a  8d4c241c             lea ecx, [esp + 0x1c]
// 0054b03e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0054b046  e8f5b52f00           call 0x846640
// 0054b04b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0054b04f  8bc6                 mov eax, esi
// 0054b051  64890d00000000       mov dword ptr fs:[0], ecx
// 0054b058  5e                   pop esi
// 0054b059  83c410               add esp, 0x10
// 0054b05c  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$?0V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
