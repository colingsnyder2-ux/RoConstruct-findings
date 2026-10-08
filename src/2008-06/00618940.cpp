// roc 2008-06 00618940  unit: RBX::Flag  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00618940
//
// 00618940  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00618944  83f803               cmp eax, 3
// 00618947  741e                 je 0x618967
// 00618949  8b542408             mov edx, dword ptr [esp + 8]
// 0061894d  c644240c00           mov byte ptr [esp + 0xc], 0
// 00618952  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00618956  51                   push ecx
// 00618957  50                   push eax
// 00618958  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0061895c  52                   push edx
// 0061895d  50                   push eax
// 0061895e  e81dfcffff           call 0x618580
// 00618963  83c410               add esp, 0x10
// 00618966  c3                   ret 
// 00618967  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0061896b  c70118ac9500         mov dword ptr [ecx], 0x95ac18
// 00618971  c3                   ret 
// library rbxgs/v8datamodel\Flag.cpp (function ?manage@?$functor_manager@V?$bind_t@XV?$mf1@XVFlag@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVFlag@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@V?$allocator@X@std@@@function@detail@boost@@SAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Flag.cpp
