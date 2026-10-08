// roc 2010-06 00796e20  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00796e20
//
// 00796e20  6aff                 push -1
// 00796e22  68f80d9a00           push 0x9a0df8
// 00796e27  64a100000000         mov eax, dword ptr fs:[0]
// 00796e2d  50                   push eax
// 00796e2e  64892500000000       mov dword ptr fs:[0], esp
// 00796e35  51                   push ecx
// 00796e36  53                   push ebx
// 00796e37  56                   push esi
// 00796e38  8bf1                 mov esi, ecx
// 00796e3a  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00796e3e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00796e42  33c0                 xor eax, eax
// 00796e44  89442414             mov dword ptr [esp + 0x14], eax
// 00796e48  88442408             mov byte ptr [esp + 8], al
// 00796e4c  8b442408             mov eax, dword ptr [esp + 8]
// 00796e50  50                   push eax
// 00796e51  51                   push ecx
// 00796e52  83ec30               sub esp, 0x30
// 00796e55  8bc4                 mov eax, esp
// 00796e57  8910                 mov dword ptr [eax], edx
// 00796e59  8d4808               lea ecx, [eax + 8]
// 00796e5c  8d44245c             lea eax, [esp + 0x5c]
// 00796e60  89a42484000000       mov dword ptr [esp + 0x84], esp
// 00796e67  50                   push eax
// 00796e68  e833efffff           call 0x795da0
// 00796e6d  8bce                 mov ecx, esi
// 00796e6f  e8ccfbffff           call 0x796a40
// 00796e74  8d4c2424             lea ecx, [esp + 0x24]
// 00796e78  8ad8                 mov bl, al
// 00796e7a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00796e82  e819f1ffff           call 0x795fa0
// 00796e87  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00796e8b  5e                   pop esi
// 00796e8c  8ac3                 mov al, bl
// 00796e8e  64890d00000000       mov dword ptr fs:[0], ecx
// 00796e95  5b                   pop ebx
// 00796e96  83c410               add esp, 0x10
// 00796e99  c23400               ret 0x34
// library rbxgs/util\boost.cpp (function ??$assign_to@V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
