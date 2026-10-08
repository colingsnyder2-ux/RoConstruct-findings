// roc 2011-06 0043c350  unit: AsyncResult  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0043c350
//
// 0043c350  6aff                 push -1
// 0043c352  68b80b9d00           push 0x9d0bb8
// 0043c357  64a100000000         mov eax, dword ptr fs:[0]
// 0043c35d  50                   push eax
// 0043c35e  64892500000000       mov dword ptr fs:[0], esp
// 0043c365  51                   push ecx
// 0043c366  53                   push ebx
// 0043c367  56                   push esi
// 0043c368  8bf1                 mov esi, ecx
// 0043c36a  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0043c36e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0043c372  33c0                 xor eax, eax
// 0043c374  89442414             mov dword ptr [esp + 0x14], eax
// 0043c378  88442408             mov byte ptr [esp + 8], al
// 0043c37c  8b442408             mov eax, dword ptr [esp + 8]
// 0043c380  50                   push eax
// 0043c381  51                   push ecx
// 0043c382  83ec30               sub esp, 0x30
// 0043c385  8bc4                 mov eax, esp
// 0043c387  8910                 mov dword ptr [eax], edx
// 0043c389  8d4808               lea ecx, [eax + 8]
// 0043c38c  8d44245c             lea eax, [esp + 0x5c]
// 0043c390  89a42484000000       mov dword ptr [esp + 0x84], esp
// 0043c397  50                   push eax
// 0043c398  e833eeffff           call 0x43b1d0
// 0043c39d  8bce                 mov ecx, esi
// 0043c39f  e87cfbffff           call 0x43bf20
// 0043c3a4  8d4c2424             lea ecx, [esp + 0x24]
// 0043c3a8  8ad8                 mov bl, al
// 0043c3aa  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0043c3b2  e8b9d13b00           call 0x7f9570
// 0043c3b7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0043c3bb  5e                   pop esi
// 0043c3bc  8ac3                 mov al, bl
// 0043c3be  64890d00000000       mov dword ptr fs:[0], ecx
// 0043c3c5  5b                   pop ebx
// 0043c3c6  83c410               add esp, 0x10
// 0043c3c9  c23400               ret 0x34
// library rbxgs/util\boost.cpp (function ??$assign_to@V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
