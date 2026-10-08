// roc 2008-06 00419dd0  unit: PAVDHTMLWindowService::?$sp_counted_impl_pd  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00419dd0
//
// 00419dd0  8b442404             mov eax, dword ptr [esp + 4]
// 00419dd4  8b08                 mov ecx, dword ptr [eax]
// 00419dd6  e995faffff           jmp 0x419870
// library rbxgs/util\boost.cpp (function ?invoke@?$void_function_obj_invoker0@V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@boost@@X@function@detail@boost@@SAXAATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O1 /Ob2 /Oy /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
