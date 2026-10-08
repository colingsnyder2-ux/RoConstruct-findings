// roc 2009-06 004c88a0  unit: boost::X::V?$function0::?$thread_data  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c88a0
//
// 004c88a0  6aff                 push -1
// 004c88a2  6818a48500           push 0x85a418
// 004c88a7  64a100000000         mov eax, dword ptr fs:[0]
// 004c88ad  50                   push eax
// 004c88ae  64892500000000       mov dword ptr fs:[0], esp
// 004c88b5  51                   push ecx
// 004c88b6  53                   push ebx
// 004c88b7  56                   push esi
// 004c88b8  8bf1                 mov esi, ecx
// 004c88ba  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004c88be  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004c88c2  33c0                 xor eax, eax
// 004c88c4  89442414             mov dword ptr [esp + 0x14], eax
// 004c88c8  88442408             mov byte ptr [esp + 8], al
// 004c88cc  8b442408             mov eax, dword ptr [esp + 8]
// 004c88d0  50                   push eax
// 004c88d1  51                   push ecx
// 004c88d2  83ec28               sub esp, 0x28
// 004c88d5  8bc4                 mov eax, esp
// 004c88d7  8910                 mov dword ptr [eax], edx
// 004c88d9  8d4804               lea ecx, [eax + 4]
// 004c88dc  8d442450             lea eax, [esp + 0x50]
// 004c88e0  89642474             mov dword ptr [esp + 0x74], esp
// 004c88e4  50                   push eax
// 004c88e5  e876d5ffff           call 0x4c5e60
// 004c88ea  8bce                 mov ecx, esi
// 004c88ec  e8dffbffff           call 0x4c84d0
// 004c88f1  8d4c2420             lea ecx, [esp + 0x20]
// 004c88f5  8ad8                 mov bl, al
// 004c88f7  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004c88ff  e88cd0ffff           call 0x4c5990
// 004c8904  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c8908  5e                   pop esi
// 004c8909  8ac3                 mov al, bl
// 004c890b  64890d00000000       mov dword ptr fs:[0], ecx
// 004c8912  5b                   pop ebx
// 004c8913  83c410               add esp, 0x10
// 004c8916  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$assign_to@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$basic_vtable0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
