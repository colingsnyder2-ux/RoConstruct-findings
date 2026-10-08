// roc 2011-06 004ced80  unit: boost::X::V?$function0::?$thread_data  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ced80
//
// 004ced80  6aff                 push -1
// 004ced82  68e8b39f00           push 0x9fb3e8
// 004ced87  64a100000000         mov eax, dword ptr fs:[0]
// 004ced8d  50                   push eax
// 004ced8e  64892500000000       mov dword ptr fs:[0], esp
// 004ced95  51                   push ecx
// 004ced96  53                   push ebx
// 004ced97  56                   push esi
// 004ced98  8bf1                 mov esi, ecx
// 004ced9a  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004ced9e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004ceda2  33c0                 xor eax, eax
// 004ceda4  89442414             mov dword ptr [esp + 0x14], eax
// 004ceda8  88442408             mov byte ptr [esp + 8], al
// 004cedac  8b442408             mov eax, dword ptr [esp + 8]
// 004cedb0  50                   push eax
// 004cedb1  51                   push ecx
// 004cedb2  83ec28               sub esp, 0x28
// 004cedb5  8bc4                 mov eax, esp
// 004cedb7  8910                 mov dword ptr [eax], edx
// 004cedb9  8d4804               lea ecx, [eax + 4]
// 004cedbc  8d442450             lea eax, [esp + 0x50]
// 004cedc0  89642474             mov dword ptr [esp + 0x74], esp
// 004cedc4  50                   push eax
// 004cedc5  e8865a2a00           call 0x774850
// 004cedca  8bce                 mov ecx, esi
// 004cedcc  e8fff1ffff           call 0x4cdfd0
// 004cedd1  8d4c2420             lea ecx, [esp + 0x20]
// 004cedd5  8ad8                 mov bl, al
// 004cedd7  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004ceddf  e80c542a00           call 0x7741f0
// 004cede4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004cede8  5e                   pop esi
// 004cede9  8ac3                 mov al, bl
// 004cedeb  64890d00000000       mov dword ptr fs:[0], ecx
// 004cedf2  5b                   pop ebx
// 004cedf3  83c410               add esp, 0x10
// 004cedf6  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$assign_to@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$basic_vtable0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
