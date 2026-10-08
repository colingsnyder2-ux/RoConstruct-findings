// roc 2008-06 00577670  unit: RBX::PAVTool::?$sp_counted_impl_pd  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00577670
//
// 00577670  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00577674  8b09                 mov ecx, dword ptr [ecx]
// 00577676  83ec1c               sub esp, 0x1c
// 00577679  8d0424               lea eax, [esp]
// 0057767c  50                   push eax
// 0057767d  e85efcffff           call 0x5772e0
// 00577682  8d0c24               lea ecx, [esp]
// 00577685  ff1568248000         call dword ptr [0x802468]
// 0057768b  83c41c               add esp, 0x1c
// 0057768e  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ?invoke@?$void_function_obj_invoker0@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@X@function@detail@boost@@SAXAATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
