// roc 2012-06 0087ad00  unit: RBX::VInstance::?$NonFactoryProduct  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0087ad00
//
// 0087ad00  6aff                 push -1
// 0087ad02  68c801ad00           push 0xad01c8
// 0087ad07  64a100000000         mov eax, dword ptr fs:[0]
// 0087ad0d  50                   push eax
// 0087ad0e  64892500000000       mov dword ptr fs:[0], esp
// 0087ad15  51                   push ecx
// 0087ad16  56                   push esi
// 0087ad17  8bf1                 mov esi, ecx
// 0087ad19  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0087ad1d  83ec28               sub esp, 0x28
// 0087ad20  8bc4                 mov eax, esp
// 0087ad22  c70600000000         mov dword ptr [esi], 0
// 0087ad28  8d542444             lea edx, [esp + 0x44]
// 0087ad2c  8964242c             mov dword ptr [esp + 0x2c], esp
// 0087ad30  8908                 mov dword ptr [eax], ecx
// 0087ad32  8d4804               lea ecx, [eax + 4]
// 0087ad35  52                   push edx
// 0087ad36  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0087ad3e  e82ddbffff           call 0x878870
// 0087ad43  8bce                 mov ecx, esi
// 0087ad45  e8e6faffff           call 0x87a830
// 0087ad4a  8d4c241c             lea ecx, [esp + 0x1c]
// 0087ad4e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0087ad56  e8b5d5f6ff           call 0x7e8310
// 0087ad5b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0087ad5f  8bc6                 mov eax, esi
// 0087ad61  64890d00000000       mov dword ptr fs:[0], ecx
// 0087ad68  5e                   pop esi
// 0087ad69  83c410               add esp, 0x10
// 0087ad6c  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$?0V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
