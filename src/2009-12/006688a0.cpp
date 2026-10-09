// roc 2009-12 006688a0  unit: RBX::VInstance::?$NonFactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006688a0
//
// 006688a0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006688a4  8b09                 mov ecx, dword ptr [ecx]
// 006688a6  83ec1c               sub esp, 0x1c
// 006688a9  8d0424               lea eax, [esp]
// 006688ac  50                   push eax
// 006688ad  e82ef8ffff           call 0x6680e0
// 006688b2  8d0c24               lea ecx, [esp]
// 006688b5  ff15e4b69800         call dword ptr [0x98b6e4]
// 006688bb  83c41c               add esp, 0x1c
// 006688be  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ?invoke@?$void_function_obj_invoker0@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@X@function@detail@boost@@SAXAATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
