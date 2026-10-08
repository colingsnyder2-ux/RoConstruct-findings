// roc 2008-06 005fdec0  unit: RBX::VTool::?$FactoryProduct  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fdec0
//
// 005fdec0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005fdec4  83f803               cmp eax, 3
// 005fdec7  741e                 je 0x5fdee7
// 005fdec9  8b542408             mov edx, dword ptr [esp + 8]
// 005fdecd  c644240c00           mov byte ptr [esp + 0xc], 0
// 005fded2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005fded6  51                   push ecx
// 005fded7  50                   push eax
// 005fded8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005fdedc  52                   push edx
// 005fdedd  50                   push eax
// 005fdede  e81df8ffff           call 0x5fd700
// 005fdee3  83c410               add esp, 0x10
// 005fdee6  c3                   ret 
// 005fdee7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fdeeb  c70148899500         mov dword ptr [ecx], 0x958948
// 005fdef1  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ?manage@?$functor_manager@V?$bind_t@XV?$mf1@XVTool@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVTool@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@V?$allocator@X@std@@@function@detail@boost@@SAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp
