// roc 2011-06 0073a290  unit: RBX::VInstance::?$NonFactoryProduct  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0073a290
//
// 0073a290  6aff                 push -1
// 0073a292  68f8879f00           push 0x9f87f8
// 0073a297  64a100000000         mov eax, dword ptr fs:[0]
// 0073a29d  50                   push eax
// 0073a29e  64892500000000       mov dword ptr fs:[0], esp
// 0073a2a5  51                   push ecx
// 0073a2a6  56                   push esi
// 0073a2a7  8bf1                 mov esi, ecx
// 0073a2a9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0073a2ad  83ec28               sub esp, 0x28
// 0073a2b0  8bc4                 mov eax, esp
// 0073a2b2  c70600000000         mov dword ptr [esi], 0
// 0073a2b8  8d542444             lea edx, [esp + 0x44]
// 0073a2bc  8964242c             mov dword ptr [esp + 0x2c], esp
// 0073a2c0  8908                 mov dword ptr [eax], ecx
// 0073a2c2  8d4804               lea ecx, [eax + 4]
// 0073a2c5  52                   push edx
// 0073a2c6  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0073a2ce  e80ddbffff           call 0x737de0
// 0073a2d3  8bce                 mov ecx, esi
// 0073a2d5  e8d6f7ffff           call 0x739ab0
// 0073a2da  8d4c241c             lea ecx, [esp + 0x1c]
// 0073a2de  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0073a2e6  e865c9ffff           call 0x736c50
// 0073a2eb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0073a2ef  8bc6                 mov eax, esi
// 0073a2f1  64890d00000000       mov dword ptr fs:[0], ecx
// 0073a2f8  5e                   pop esi
// 0073a2f9  83c410               add esp, 0x10
// 0073a2fc  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$?0V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
