// roc 2008-06 00596c90  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00596c90
//
// 00596c90  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00596c94  83f803               cmp eax, 3
// 00596c97  741e                 je 0x596cb7
// 00596c99  8b542408             mov edx, dword ptr [esp + 8]
// 00596c9d  c644240c00           mov byte ptr [esp + 0xc], 0
// 00596ca2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00596ca6  51                   push ecx
// 00596ca7  50                   push eax
// 00596ca8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00596cac  52                   push edx
// 00596cad  50                   push eax
// 00596cae  e8fdfdffff           call 0x596ab0
// 00596cb3  83c410               add esp, 0x10
// 00596cb6  c3                   ret 
// 00596cb7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00596cbb  c70180999400         mov dword ptr [ecx], 0x949980
// 00596cc1  c3                   ret 
// library rbxgs/util\boost.cpp (function ?manage@?$functor_manager@V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@boost@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@SAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
