// roc 2008-06 00577ae0  unit: RBX::PAVTool::?$sp_counted_impl_pd  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00577ae0
//
// 00577ae0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00577ae4  83f803               cmp eax, 3
// 00577ae7  741e                 je 0x577b07
// 00577ae9  8b542408             mov edx, dword ptr [esp + 8]
// 00577aed  c644240c00           mov byte ptr [esp + 0xc], 0
// 00577af2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00577af6  51                   push ecx
// 00577af7  50                   push eax
// 00577af8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00577afc  52                   push edx
// 00577afd  50                   push eax
// 00577afe  e8bdfdffff           call 0x5778c0
// 00577b03  83c410               add esp, 0x10
// 00577b06  c3                   ret 
// 00577b07  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00577b0b  c701706a9400         mov dword ptr [ecx], 0x946a70
// 00577b11  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ?manage@?$functor_manager@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@boost@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@SAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
