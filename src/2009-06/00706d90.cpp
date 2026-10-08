// roc 2009-06 00706d90  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00706d90
//
// 00706d90  6aff                 push -1
// 00706d92  6838358700           push 0x873538
// 00706d97  64a100000000         mov eax, dword ptr fs:[0]
// 00706d9d  50                   push eax
// 00706d9e  64892500000000       mov dword ptr fs:[0], esp
// 00706da5  51                   push ecx
// 00706da6  53                   push ebx
// 00706da7  56                   push esi
// 00706da8  8bf1                 mov esi, ecx
// 00706daa  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00706dae  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00706db2  33c0                 xor eax, eax
// 00706db4  89442414             mov dword ptr [esp + 0x14], eax
// 00706db8  88442408             mov byte ptr [esp + 8], al
// 00706dbc  8b442408             mov eax, dword ptr [esp + 8]
// 00706dc0  50                   push eax
// 00706dc1  51                   push ecx
// 00706dc2  83ec30               sub esp, 0x30
// 00706dc5  8bc4                 mov eax, esp
// 00706dc7  8910                 mov dword ptr [eax], edx
// 00706dc9  8d4808               lea ecx, [eax + 8]
// 00706dcc  8d44245c             lea eax, [esp + 0x5c]
// 00706dd0  89a42484000000       mov dword ptr [esp + 0x84], esp
// 00706dd7  50                   push eax
// 00706dd8  e8b3edffff           call 0x705b90
// 00706ddd  8bce                 mov ecx, esi
// 00706ddf  e8bcfbffff           call 0x7069a0
// 00706de4  8d4c2424             lea ecx, [esp + 0x24]
// 00706de8  8ad8                 mov bl, al
// 00706dea  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00706df2  e899efffff           call 0x705d90
// 00706df7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00706dfb  5e                   pop esi
// 00706dfc  8ac3                 mov al, bl
// 00706dfe  64890d00000000       mov dword ptr fs:[0], ecx
// 00706e05  5b                   pop ebx
// 00706e06  83c410               add esp, 0x10
// 00706e09  c23400               ret 0x34
// library rbxgs/util\boost.cpp (function ??$assign_to@V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
