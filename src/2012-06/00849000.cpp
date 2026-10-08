// roc 2012-06 00849000  unit: RBX::LibraryService::VLibraryStateObject::?$sp_counted_impl_p  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00849000
//
// 00849000  6aff                 push -1
// 00849002  6848d8ac00           push 0xacd848
// 00849007  64a100000000         mov eax, dword ptr fs:[0]
// 0084900d  50                   push eax
// 0084900e  64892500000000       mov dword ptr fs:[0], esp
// 00849015  51                   push ecx
// 00849016  53                   push ebx
// 00849017  56                   push esi
// 00849018  8bf1                 mov esi, ecx
// 0084901a  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0084901e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00849022  33c0                 xor eax, eax
// 00849024  89442414             mov dword ptr [esp + 0x14], eax
// 00849028  88442408             mov byte ptr [esp + 8], al
// 0084902c  8b442408             mov eax, dword ptr [esp + 8]
// 00849030  50                   push eax
// 00849031  51                   push ecx
// 00849032  83ec28               sub esp, 0x28
// 00849035  8bc4                 mov eax, esp
// 00849037  8910                 mov dword ptr [eax], edx
// 00849039  8d4804               lea ecx, [eax + 4]
// 0084903c  8d442450             lea eax, [esp + 0x50]
// 00849040  89642474             mov dword ptr [esp + 0x74], esp
// 00849044  50                   push eax
// 00849045  e8e6daffff           call 0x846b30
// 0084904a  8bce                 mov ecx, esi
// 0084904c  e83ff7ffff           call 0x848790
// 00849051  8d4c2420             lea ecx, [esp + 0x20]
// 00849055  8ad8                 mov bl, al
// 00849057  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0084905f  e8dcd5ffff           call 0x846640
// 00849064  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00849068  5e                   pop esi
// 00849069  8ac3                 mov al, bl
// 0084906b  64890d00000000       mov dword ptr fs:[0], ecx
// 00849072  5b                   pop ebx
// 00849073  83c410               add esp, 0x10
// 00849076  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$assign_to@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$basic_vtable0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
