// roc 2010-06 00725650  unit: VYieldFunctionStateObject::?$sp_counted_impl_p  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00725650
//
// 00725650  6aff                 push -1
// 00725652  68d80d9a00           push 0x9a0dd8
// 00725657  64a100000000         mov eax, dword ptr fs:[0]
// 0072565d  50                   push eax
// 0072565e  64892500000000       mov dword ptr fs:[0], esp
// 00725665  51                   push ecx
// 00725666  56                   push esi
// 00725667  8bf1                 mov esi, ecx
// 00725669  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0072566d  83ec28               sub esp, 0x28
// 00725670  8bc4                 mov eax, esp
// 00725672  c70600000000         mov dword ptr [esi], 0
// 00725678  8d542444             lea edx, [esp + 0x44]
// 0072567c  8964242c             mov dword ptr [esp + 0x2c], esp
// 00725680  8908                 mov dword ptr [eax], ecx
// 00725682  8d4804               lea ecx, [eax + 4]
// 00725685  52                   push edx
// 00725686  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0072568e  e89d69f5ff           call 0x67c030
// 00725693  8bce                 mov ecx, esi
// 00725695  e8e6faffff           call 0x725180
// 0072569a  8d4c241c             lea ecx, [esp + 0x1c]
// 0072569e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 007256a6  e8e5c8d9ff           call 0x4c1f90
// 007256ab  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007256af  8bc6                 mov eax, esi
// 007256b1  64890d00000000       mov dword ptr fs:[0], ecx
// 007256b8  5e                   pop esi
// 007256b9  83c410               add esp, 0x10
// 007256bc  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$?0V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
