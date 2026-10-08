// roc 2011-06 006aa540  unit: RBX::VUDim2::?$TypedPropertyDescriptor  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006aa540
//
// 006aa540  6aff                 push -1
// 006aa542  68f8879f00           push 0x9f87f8
// 006aa547  64a100000000         mov eax, dword ptr fs:[0]
// 006aa54d  50                   push eax
// 006aa54e  64892500000000       mov dword ptr fs:[0], esp
// 006aa555  51                   push ecx
// 006aa556  56                   push esi
// 006aa557  8bf1                 mov esi, ecx
// 006aa559  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006aa55d  83ec28               sub esp, 0x28
// 006aa560  8bc4                 mov eax, esp
// 006aa562  c70600000000         mov dword ptr [esi], 0
// 006aa568  8d542444             lea edx, [esp + 0x44]
// 006aa56c  8964242c             mov dword ptr [esp + 0x2c], esp
// 006aa570  8908                 mov dword ptr [eax], ecx
// 006aa572  8d4804               lea ecx, [eax + 4]
// 006aa575  52                   push edx
// 006aa576  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 006aa57e  e85dd80800           call 0x737de0
// 006aa583  8bce                 mov ecx, esi
// 006aa585  e8d6f9ffff           call 0x6a9f60
// 006aa58a  8d4c241c             lea ecx, [esp + 0x1c]
// 006aa58e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006aa596  e8b5c60800           call 0x736c50
// 006aa59b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006aa59f  8bc6                 mov eax, esi
// 006aa5a1  64890d00000000       mov dword ptr fs:[0], ecx
// 006aa5a8  5e                   pop esi
// 006aa5a9  83c410               add esp, 0x10
// 006aa5ac  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$?0V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
