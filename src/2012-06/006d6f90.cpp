// roc 2012-06 006d6f90  unit: boost::io::Vbad_format_string::U?$error_info_injector::?$clone_impl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006d6f90
//
// 006d6f90  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006d6f94  8b09                 mov ecx, dword ptr [ecx]
// 006d6f96  83ec1c               sub esp, 0x1c
// 006d6f99  8d0424               lea eax, [esp]
// 006d6f9c  50                   push eax
// 006d6f9d  e8deecffff           call 0x6d5c80
// 006d6fa2  8d0c24               lea ecx, [esp]
// 006d6fa5  ff153c26b200         call dword ptr [0xb2263c]
// 006d6fab  83c41c               add esp, 0x1c
// 006d6fae  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ?invoke@?$void_function_obj_invoker0@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@X@function@detail@boost@@SAXAATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
