// roc 2009-06 005fd4e0  unit: RBX::VInstance::?$NonFactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005fd4e0
//
// 005fd4e0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005fd4e4  8b09                 mov ecx, dword ptr [ecx]
// 005fd4e6  83ec1c               sub esp, 0x1c
// 005fd4e9  8d0424               lea eax, [esp]
// 005fd4ec  50                   push eax
// 005fd4ed  e88ef8ffff           call 0x5fcd80
// 005fd4f2  8d0c24               lea ecx, [esp]
// 005fd4f5  ff15c4e48900         call dword ptr [0x89e4c4]
// 005fd4fb  83c41c               add esp, 0x1c
// 005fd4fe  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ?invoke@?$void_function_obj_invoker0@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@X@function@detail@boost@@SAXAATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
