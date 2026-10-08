// roc 2008-06 00618e80  unit: RBX::Flag  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00618e80
//
// 00618e80  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00618e84  83f803               cmp eax, 3
// 00618e87  741e                 je 0x618ea7
// 00618e89  8b542408             mov edx, dword ptr [esp + 8]
// 00618e8d  c644240c00           mov byte ptr [esp + 0xc], 0
// 00618e92  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00618e96  51                   push ecx
// 00618e97  50                   push eax
// 00618e98  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00618e9c  52                   push edx
// 00618e9d  50                   push eax
// 00618e9e  e8cdfeffff           call 0x618d70
// 00618ea3  83c410               add esp, 0x10
// 00618ea6  c3                   ret 
// 00618ea7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00618eab  c70118ae9500         mov dword ptr [ecx], 0x95ae18
// 00618eb1  c3                   ret 
// library rbxgs/v8datamodel\Flag.cpp (function ?manage@?$functor_manager@V?$bind_t@XV?$mf0@XVFlag@RBX@@@_mfi@boost@@V?$list1@V?$value@V?$shared_ptr@VFlag@RBX@@@boost@@@_bi@boost@@@_bi@3@@_bi@boost@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@SAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Flag.cpp
