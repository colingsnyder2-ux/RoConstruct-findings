// roc 2011-06 005ebcf0  unit: boost::io::Vbad_format_string::U?$error_info_injector::?$clone_impl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005ebcf0
//
// 005ebcf0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005ebcf4  8b09                 mov ecx, dword ptr [ecx]
// 005ebcf6  83ec1c               sub esp, 0x1c
// 005ebcf9  8d0424               lea eax, [esp]
// 005ebcfc  50                   push eax
// 005ebcfd  e8eeeeffff           call 0x5eabf0
// 005ebd02  8d0c24               lea ecx, [esp]
// 005ebd05  ff15d004a400         call dword ptr [0xa404d0]
// 005ebd0b  83c41c               add esp, 0x1c
// 005ebd0e  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ?invoke@?$void_function_obj_invoker0@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@X@function@detail@boost@@SAXAATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
