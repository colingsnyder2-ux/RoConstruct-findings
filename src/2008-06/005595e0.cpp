// roc 2008-06 005595e0  unit: RBX::VInstance::?$BoundFuncDesc  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005595e0
//
// 005595e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005595e4  83f803               cmp eax, 3
// 005595e7  741e                 je 0x559607
// 005595e9  8b542408             mov edx, dword ptr [esp + 8]
// 005595ed  c644240c00           mov byte ptr [esp + 0xc], 0
// 005595f2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005595f6  51                   push ecx
// 005595f7  50                   push eax
// 005595f8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005595fc  52                   push edx
// 005595fd  50                   push eax
// 005595fe  e82dfeffff           call 0x559430
// 00559603  83c410               add esp, 0x10
// 00559606  c3                   ret 
// 00559607  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055960b  c701d03a9400         mov dword ptr [ecx], 0x943ad0
// 00559611  c3                   ret 
// library openrbx-client/App\v8tree\Instance.cpp (function ?manage@?$functor_manager@VGenericSlotAdapter@?$SignalDescImpl@$00$$A6AXPBVPropertyDescriptor@Reflection@RBX@@@Z@Reflection@RBX@@V?$allocator@X@std@@@function@detail@boost@@SAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
