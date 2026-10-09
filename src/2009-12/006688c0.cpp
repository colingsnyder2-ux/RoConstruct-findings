// roc 2009-12 006688c0  unit: RBX::VInstance::?$NonFactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006688c0
//
// 006688c0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006688c4  8b09                 mov ecx, dword ptr [ecx]
// 006688c6  83ec1c               sub esp, 0x1c
// 006688c9  8d0424               lea eax, [esp]
// 006688cc  50                   push eax
// 006688cd  e83ef8ffff           call 0x668110
// 006688d2  8d0c24               lea ecx, [esp]
// 006688d5  ff15e4b69800         call dword ptr [0x98b6e4]
// 006688db  83c41c               add esp, 0x1c
// 006688de  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ?invoke@?$void_function_obj_invoker0@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@X@function@detail@boost@@SAXAATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
