// roc 2009-12 00709960  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::?$signal::slot  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00709960
//
// 00709960  6aff                 push -1
// 00709962  68d8789500           push 0x9578d8
// 00709967  64a100000000         mov eax, dword ptr fs:[0]
// 0070996d  50                   push eax
// 0070996e  64892500000000       mov dword ptr fs:[0], esp
// 00709975  51                   push ecx
// 00709976  53                   push ebx
// 00709977  56                   push esi
// 00709978  8bf1                 mov esi, ecx
// 0070997a  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0070997e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00709982  33c0                 xor eax, eax
// 00709984  89442414             mov dword ptr [esp + 0x14], eax
// 00709988  88442408             mov byte ptr [esp + 8], al
// 0070998c  8b442408             mov eax, dword ptr [esp + 8]
// 00709990  50                   push eax
// 00709991  51                   push ecx
// 00709992  83ec30               sub esp, 0x30
// 00709995  8bc4                 mov eax, esp
// 00709997  8910                 mov dword ptr [eax], edx
// 00709999  8d4808               lea ecx, [eax + 8]
// 0070999c  8d44245c             lea eax, [esp + 0x5c]
// 007099a0  89a42484000000       mov dword ptr [esp + 0x84], esp
// 007099a7  50                   push eax
// 007099a8  e803c6ffff           call 0x705fb0
// 007099ad  8bce                 mov ecx, esi
// 007099af  e89cf7ffff           call 0x709150
// 007099b4  8d4c2424             lea ecx, [esp + 0x24]
// 007099b8  8ad8                 mov bl, al
// 007099ba  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 007099c2  e809adffff           call 0x7046d0
// 007099c7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007099cb  5e                   pop esi
// 007099cc  8ac3                 mov al, bl
// 007099ce  64890d00000000       mov dword ptr fs:[0], ecx
// 007099d5  5b                   pop ebx
// 007099d6  83c410               add esp, 0x10
// 007099d9  c23400               ret 0x34
// library rbxgs/util\boost.cpp (function ??$assign_to@V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
