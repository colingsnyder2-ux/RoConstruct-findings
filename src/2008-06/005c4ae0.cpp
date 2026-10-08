// roc 2008-06 005c4ae0  unit: RBX::Visit  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c4ae0
//
// 005c4ae0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005c4ae4  83f803               cmp eax, 3
// 005c4ae7  741e                 je 0x5c4b07
// 005c4ae9  8b542408             mov edx, dword ptr [esp + 8]
// 005c4aed  c644240c00           mov byte ptr [esp + 0xc], 0
// 005c4af2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c4af6  51                   push ecx
// 005c4af7  50                   push eax
// 005c4af8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005c4afc  52                   push edx
// 005c4afd  50                   push eax
// 005c4afe  e85dffffff           call 0x5c4a60
// 005c4b03  83c410               add esp, 0x10
// 005c4b06  c3                   ret 
// 005c4b07  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c4b0b  c70120f89400         mov dword ptr [ecx], 0x94f820
// 005c4b11  c3                   ret 
// library rbxgs/v8datamodel\Visit.cpp (function ?manage@?$functor_manager@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V?$value@H@23@@_bi@boost@@@_bi@boost@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@SAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Visit.cpp
