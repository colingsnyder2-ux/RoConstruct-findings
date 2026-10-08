// roc 2011-06 007349d0  unit: RBX::VTextureContentProvider::?$BoundFuncDesc  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007349d0
//
// 007349d0  6aff                 push -1
// 007349d2  6838839f00           push 0x9f8338
// 007349d7  64a100000000         mov eax, dword ptr fs:[0]
// 007349dd  50                   push eax
// 007349de  64892500000000       mov dword ptr fs:[0], esp
// 007349e5  51                   push ecx
// 007349e6  56                   push esi
// 007349e7  8bf1                 mov esi, ecx
// 007349e9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007349ed  83ec28               sub esp, 0x28
// 007349f0  8bc4                 mov eax, esp
// 007349f2  c70600000000         mov dword ptr [esi], 0
// 007349f8  8d542444             lea edx, [esp + 0x44]
// 007349fc  8964242c             mov dword ptr [esp + 0x2c], esp
// 00734a00  8908                 mov dword ptr [eax], ecx
// 00734a02  8d4804               lea ecx, [eax + 4]
// 00734a05  52                   push edx
// 00734a06  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00734a0e  e80d991e00           call 0x91e320
// 00734a13  8bce                 mov ecx, esi
// 00734a15  e836fcffff           call 0x734650
// 00734a1a  8d4c241c             lea ecx, [esp + 0x1c]
// 00734a1e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00734a26  e8a5f10300           call 0x773bd0
// 00734a2b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00734a2f  8bc6                 mov eax, esi
// 00734a31  64890d00000000       mov dword ptr fs:[0], ecx
// 00734a38  5e                   pop esi
// 00734a39  83c410               add esp, 0x10
// 00734a3c  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$?0V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
