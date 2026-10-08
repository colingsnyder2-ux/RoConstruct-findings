// roc 2012-06 00447d20  unit: AsyncResult  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00447d20
//
// 00447d20  6aff                 push -1
// 00447d22  6888e0a900           push 0xa9e088
// 00447d27  64a100000000         mov eax, dword ptr fs:[0]
// 00447d2d  50                   push eax
// 00447d2e  64892500000000       mov dword ptr fs:[0], esp
// 00447d35  51                   push ecx
// 00447d36  53                   push ebx
// 00447d37  56                   push esi
// 00447d38  8bf1                 mov esi, ecx
// 00447d3a  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00447d3e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00447d42  33c0                 xor eax, eax
// 00447d44  89442414             mov dword ptr [esp + 0x14], eax
// 00447d48  88442408             mov byte ptr [esp + 8], al
// 00447d4c  8b442408             mov eax, dword ptr [esp + 8]
// 00447d50  50                   push eax
// 00447d51  51                   push ecx
// 00447d52  83ec30               sub esp, 0x30
// 00447d55  8bc4                 mov eax, esp
// 00447d57  8910                 mov dword ptr [eax], edx
// 00447d59  8d4808               lea ecx, [eax + 8]
// 00447d5c  8d44245c             lea eax, [esp + 0x5c]
// 00447d60  89a42484000000       mov dword ptr [esp + 0x84], esp
// 00447d67  50                   push eax
// 00447d68  e8d3ecffff           call 0x446a40
// 00447d6d  8bce                 mov ecx, esi
// 00447d6f  e8ccfbffff           call 0x447940
// 00447d74  8d4c2424             lea ecx, [esp + 0x24]
// 00447d78  8ad8                 mov bl, al
// 00447d7a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00447d82  e869b65200           call 0x9733f0
// 00447d87  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00447d8b  5e                   pop esi
// 00447d8c  8ac3                 mov al, bl
// 00447d8e  64890d00000000       mov dword ptr fs:[0], ecx
// 00447d95  5b                   pop ebx
// 00447d96  83c410               add esp, 0x10
// 00447d99  c23400               ret 0x34
// library rbxgs/util\boost.cpp (function ??$assign_to@V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
