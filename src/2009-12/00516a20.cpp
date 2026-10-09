// roc 2009-12 00516a20  unit: RBX::VInstance::?$NonFactoryProduct  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00516a20
//
// 00516a20  8b442404             mov eax, dword ptr [esp + 4]
// 00516a24  8b08                 mov ecx, dword ptr [eax]
// 00516a26  0fb65130             movzx edx, byte ptr [ecx + 0x30]
// 00516a2a  8d4108               lea eax, [ecx + 8]
// 00516a2d  52                   push edx
// 00516a2e  8b5020               mov edx, dword ptr [eax + 0x20]
// 00516a31  52                   push edx
// 00516a32  50                   push eax
// 00516a33  8b01                 mov eax, dword ptr [ecx]
// 00516a35  ffd0                 call eax
// 00516a37  83c40c               add esp, 0xc
// 00516a3a  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ?invoke@?$void_function_obj_invoker0@V?$bind_t@XP6AXABV?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@W4MessageType@RBX@@_N@ZV?$list3@V?$value@V?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@@_bi@boost@@V?$value@W4MessageType@RBX@@@23@V?$value@_N@23@@_bi@2@@_bi@boost@@X@function@detail@boost@@SAXAATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
