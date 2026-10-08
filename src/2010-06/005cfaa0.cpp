// roc 2010-06 005cfaa0  unit: RBX::VInstance::?$NonFactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005cfaa0
//
// 005cfaa0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005cfaa4  8b09                 mov ecx, dword ptr [ecx]
// 005cfaa6  83ec1c               sub esp, 0x1c
// 005cfaa9  8d0424               lea eax, [esp]
// 005cfaac  50                   push eax
// 005cfaad  e87ef7ffff           call 0x5cf230
// 005cfab2  8d0c24               lea ecx, [esp]
// 005cfab5  ff1500a49e00         call dword ptr [0x9ea400]
// 005cfabb  83c41c               add esp, 0x1c
// 005cfabe  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ?invoke@?$void_function_obj_invoker0@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@X@function@detail@boost@@SAXAATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
