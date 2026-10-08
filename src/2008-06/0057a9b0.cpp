// roc 2008-06 0057a9b0  unit: RBX::VDataModel::?$DescribedNonCreatable  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057a9b0
//
// 0057a9b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057a9b4  83f803               cmp eax, 3
// 0057a9b7  741e                 je 0x57a9d7
// 0057a9b9  8b542408             mov edx, dword ptr [esp + 8]
// 0057a9bd  c644240c00           mov byte ptr [esp + 0xc], 0
// 0057a9c2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057a9c6  51                   push ecx
// 0057a9c7  50                   push eax
// 0057a9c8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057a9cc  52                   push edx
// 0057a9cd  50                   push eax
// 0057a9ce  e89df1ffff           call 0x579b70
// 0057a9d3  83c410               add esp, 0x10
// 0057a9d6  c3                   ret 
// 0057a9d7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057a9db  c70118779400         mov dword ptr [ecx], 0x947718
// 0057a9e1  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ?manage@?$functor_manager@V?$bind_t@XP6AXABV?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@W4MessageType@RBX@@_N@ZV?$list3@V?$value@V?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@@_bi@boost@@V?$value@W4MessageType@RBX@@@23@V?$value@_N@23@@_bi@2@@_bi@boost@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@SAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
