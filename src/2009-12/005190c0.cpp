// roc 2009-12 005190c0  unit: boost::X::V?$function0::?$thread_data  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005190c0
//
// 005190c0  6aff                 push -1
// 005190c2  68f8269500           push 0x9526f8
// 005190c7  64a100000000         mov eax, dword ptr fs:[0]
// 005190cd  50                   push eax
// 005190ce  64892500000000       mov dword ptr fs:[0], esp
// 005190d5  51                   push ecx
// 005190d6  53                   push ebx
// 005190d7  56                   push esi
// 005190d8  8bf1                 mov esi, ecx
// 005190da  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005190de  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005190e2  33c0                 xor eax, eax
// 005190e4  89442414             mov dword ptr [esp + 0x14], eax
// 005190e8  88442408             mov byte ptr [esp + 8], al
// 005190ec  8b442408             mov eax, dword ptr [esp + 8]
// 005190f0  50                   push eax
// 005190f1  51                   push ecx
// 005190f2  83ec28               sub esp, 0x28
// 005190f5  8bc4                 mov eax, esp
// 005190f7  8910                 mov dword ptr [eax], edx
// 005190f9  8d4804               lea ecx, [eax + 4]
// 005190fc  8d442450             lea eax, [esp + 0x50]
// 00519100  89642474             mov dword ptr [esp + 0x74], esp
// 00519104  50                   push eax
// 00519105  e886f92400           call 0x768a90
// 0051910a  8bce                 mov ecx, esi
// 0051910c  e8dff6ffff           call 0x5187f0
// 00519111  8d4c2420             lea ecx, [esp + 0x20]
// 00519115  8ad8                 mov bl, al
// 00519117  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0051911f  e88c7d1c00           call 0x6e0eb0
// 00519124  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00519128  5e                   pop esi
// 00519129  8ac3                 mov al, bl
// 0051912b  64890d00000000       mov dword ptr fs:[0], ecx
// 00519132  5b                   pop ebx
// 00519133  83c410               add esp, 0x10
// 00519136  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$assign_to@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$basic_vtable0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
