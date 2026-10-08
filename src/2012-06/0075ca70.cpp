// roc 2012-06 0075ca70  unit: RBX::VNetworkSettings::?$BoundPropGetSet  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0075ca70
//
// 0075ca70  6aff                 push -1
// 0075ca72  6848d8ac00           push 0xacd848
// 0075ca77  64a100000000         mov eax, dword ptr fs:[0]
// 0075ca7d  50                   push eax
// 0075ca7e  64892500000000       mov dword ptr fs:[0], esp
// 0075ca85  51                   push ecx
// 0075ca86  56                   push esi
// 0075ca87  8bf1                 mov esi, ecx
// 0075ca89  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0075ca8d  83ec28               sub esp, 0x28
// 0075ca90  8bc4                 mov eax, esp
// 0075ca92  c70600000000         mov dword ptr [esi], 0
// 0075ca98  8d542444             lea edx, [esp + 0x44]
// 0075ca9c  8964242c             mov dword ptr [esp + 0x2c], esp
// 0075caa0  8908                 mov dword ptr [eax], ecx
// 0075caa2  8d4804               lea ecx, [eax + 4]
// 0075caa5  52                   push edx
// 0075caa6  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0075caae  e87da00e00           call 0x846b30
// 0075cab3  8bce                 mov ecx, esi
// 0075cab5  e816f6ffff           call 0x75c0d0
// 0075caba  8d4c241c             lea ecx, [esp + 0x1c]
// 0075cabe  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0075cac6  e8759b0e00           call 0x846640
// 0075cacb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0075cacf  8bc6                 mov eax, esi
// 0075cad1  64890d00000000       mov dword ptr fs:[0], ecx
// 0075cad8  5e                   pop esi
// 0075cad9  83c410               add esp, 0x10
// 0075cadc  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$?0V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
