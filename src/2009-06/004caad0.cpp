// roc 2009-06 004caad0  unit: RBX::VInstance::V?$shared_ptr::V?$vector::?$sp_counted_impl_p  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004caad0
//
// 004caad0  6aff                 push -1
// 004caad2  6818a48500           push 0x85a418
// 004caad7  64a100000000         mov eax, dword ptr fs:[0]
// 004caadd  50                   push eax
// 004caade  64892500000000       mov dword ptr fs:[0], esp
// 004caae5  51                   push ecx
// 004caae6  56                   push esi
// 004caae7  8bf1                 mov esi, ecx
// 004caae9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004caaed  83ec28               sub esp, 0x28
// 004caaf0  8bc4                 mov eax, esp
// 004caaf2  c70600000000         mov dword ptr [esi], 0
// 004caaf8  8d542444             lea edx, [esp + 0x44]
// 004caafc  8964242c             mov dword ptr [esp + 0x2c], esp
// 004cab00  8908                 mov dword ptr [eax], ecx
// 004cab02  8d4804               lea ecx, [eax + 4]
// 004cab05  52                   push edx
// 004cab06  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 004cab0e  e84db3ffff           call 0x4c5e60
// 004cab13  8bce                 mov ecx, esi
// 004cab15  e8d6f3ffff           call 0x4c9ef0
// 004cab1a  8d4c241c             lea ecx, [esp + 0x1c]
// 004cab1e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004cab26  e865aeffff           call 0x4c5990
// 004cab2b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004cab2f  8bc6                 mov eax, esi
// 004cab31  64890d00000000       mov dword ptr fs:[0], ecx
// 004cab38  5e                   pop esi
// 004cab39  83c410               add esp, 0x10
// 004cab3c  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$?0V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
