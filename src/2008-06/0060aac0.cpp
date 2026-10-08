// roc 2008-06 0060aac0  unit: RBX::VHole::?$FactoryProduct  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060aac0
//
// 0060aac0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0060aac4  83f803               cmp eax, 3
// 0060aac7  741e                 je 0x60aae7
// 0060aac9  8b542408             mov edx, dword ptr [esp + 8]
// 0060aacd  c644240c00           mov byte ptr [esp + 0xc], 0
// 0060aad2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060aad6  51                   push ecx
// 0060aad7  50                   push eax
// 0060aad8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0060aadc  52                   push edx
// 0060aadd  50                   push eax
// 0060aade  e81df8ffff           call 0x60a300
// 0060aae3  83c410               add esp, 0x10
// 0060aae6  c3                   ret 
// 0060aae7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060aaeb  c701f89a9500         mov dword ptr [ecx], 0x959af8
// 0060aaf1  c3                   ret 
// library rbxgs/v8datamodel\Feature.cpp (function ?manage@?$functor_manager@V?$bind_t@XV?$mf0@XVVelocityMotor@RBX@@@_mfi@boost@@V?$list1@V?$value@PAVVelocityMotor@RBX@@@_bi@boost@@@_bi@3@@_bi@boost@@V?$allocator@X@std@@@function@detail@boost@@SAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Feature.cpp
