// roc 2008-06 0063c7d0  unit: RBX::VSeat::?$FactoryProduct  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063c7d0
//
// 0063c7d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0063c7d4  83f803               cmp eax, 3
// 0063c7d7  741e                 je 0x63c7f7
// 0063c7d9  8b542408             mov edx, dword ptr [esp + 8]
// 0063c7dd  c644240c00           mov byte ptr [esp + 0xc], 0
// 0063c7e2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063c7e6  51                   push ecx
// 0063c7e7  50                   push eax
// 0063c7e8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0063c7ec  52                   push edx
// 0063c7ed  50                   push eax
// 0063c7ee  e89dfdffff           call 0x63c590
// 0063c7f3  83c410               add esp, 0x10
// 0063c7f6  c3                   ret 
// 0063c7f7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0063c7fb  c70178169600         mov dword ptr [ecx], 0x961678
// 0063c801  c3                   ret 
// library rbxgs/v8datamodel\Seat.cpp (function ?manage@?$functor_manager@V?$bind_t@XV?$mf1@XVSeat@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVSeat@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@V?$allocator@X@std@@@function@detail@boost@@SAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Seat.cpp
