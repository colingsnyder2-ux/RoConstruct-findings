// roc 2008-06 00577630  unit: RBX::PAVTool::?$sp_counted_impl_pd  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00577630
//
// 00577630  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00577634  8b09                 mov ecx, dword ptr [ecx]
// 00577636  83ec1c               sub esp, 0x1c
// 00577639  8d0424               lea eax, [esp]
// 0057763c  50                   push eax
// 0057763d  e86efcffff           call 0x5772b0
// 00577642  8d0c24               lea ecx, [esp]
// 00577645  ff1568248000         call dword ptr [0x802468]
// 0057764b  83c41c               add esp, 0x1c
// 0057764e  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ?invoke@?$void_function_obj_invoker0@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@X@function@detail@boost@@SAXAATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
