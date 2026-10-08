// roc 2008-06 00577aa0  unit: RBX::PAVTool::?$sp_counted_impl_pd  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00577aa0
//
// 00577aa0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00577aa4  83f803               cmp eax, 3
// 00577aa7  741e                 je 0x577ac7
// 00577aa9  8b542408             mov edx, dword ptr [esp + 8]
// 00577aad  c644240c00           mov byte ptr [esp + 0xc], 0
// 00577ab2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00577ab6  51                   push ecx
// 00577ab7  50                   push eax
// 00577ab8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00577abc  52                   push edx
// 00577abd  50                   push eax
// 00577abe  e87dfdffff           call 0x577840
// 00577ac3  83c410               add esp, 0x10
// 00577ac6  c3                   ret 
// 00577ac7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00577acb  c70198699400         mov dword ptr [ecx], 0x946998
// 00577ad1  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ?manage@?$functor_manager@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@SAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
