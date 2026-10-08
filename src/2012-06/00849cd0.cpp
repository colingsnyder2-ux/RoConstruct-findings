// roc 2012-06 00849cd0  unit: RBX::LibraryService::VLibraryStateObject::?$sp_counted_impl_p  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00849cd0
//
// 00849cd0  6aff                 push -1
// 00849cd2  6848d8ac00           push 0xacd848
// 00849cd7  64a100000000         mov eax, dword ptr fs:[0]
// 00849cdd  50                   push eax
// 00849cde  64892500000000       mov dword ptr fs:[0], esp
// 00849ce5  51                   push ecx
// 00849ce6  56                   push esi
// 00849ce7  8bf1                 mov esi, ecx
// 00849ce9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00849ced  83ec28               sub esp, 0x28
// 00849cf0  8bc4                 mov eax, esp
// 00849cf2  c70600000000         mov dword ptr [esi], 0
// 00849cf8  8d542444             lea edx, [esp + 0x44]
// 00849cfc  8964242c             mov dword ptr [esp + 0x2c], esp
// 00849d00  8908                 mov dword ptr [eax], ecx
// 00849d02  8d4804               lea ecx, [eax + 4]
// 00849d05  52                   push edx
// 00849d06  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00849d0e  e81dceffff           call 0x846b30
// 00849d13  8bce                 mov ecx, esi
// 00849d15  e8e6f9ffff           call 0x849700
// 00849d1a  8d4c241c             lea ecx, [esp + 0x1c]
// 00849d1e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00849d26  e815c9ffff           call 0x846640
// 00849d2b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00849d2f  8bc6                 mov eax, esi
// 00849d31  64890d00000000       mov dword ptr fs:[0], ecx
// 00849d38  5e                   pop esi
// 00849d39  83c410               add esp, 0x10
// 00849d3c  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$?0V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
