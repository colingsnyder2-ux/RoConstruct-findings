// roc 2008-06 00577650  unit: RBX::VDataModel::?$DescribedNonCreatable  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00577650
//
// 00577650  8b442404             mov eax, dword ptr [esp + 4]
// 00577654  8b08                 mov ecx, dword ptr [eax]
// 00577656  0fb65130             movzx edx, byte ptr [ecx + 0x30]
// 0057765a  8d4108               lea eax, [ecx + 8]
// 0057765d  52                   push edx
// 0057765e  8b5020               mov edx, dword ptr [eax + 0x20]
// 00577661  52                   push edx
// 00577662  50                   push eax
// 00577663  8b01                 mov eax, dword ptr [ecx]
// 00577665  ffd0                 call eax
// 00577667  83c40c               add esp, 0xc
// 0057766a  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ?invoke@?$void_function_obj_invoker0@V?$bind_t@XP6AXABV?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@W4MessageType@RBX@@_N@ZV?$list3@V?$value@V?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@@_bi@boost@@V?$value@W4MessageType@RBX@@@23@V?$value@_N@23@@_bi@2@@_bi@boost@@X@function@detail@boost@@SAXAATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
