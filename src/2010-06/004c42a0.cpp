// roc 2010-06 004c42a0  unit: RBX::VInstance::?$NonFactoryProduct  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c42a0
//
// 004c42a0  8b442404             mov eax, dword ptr [esp + 4]
// 004c42a4  8b08                 mov ecx, dword ptr [eax]
// 004c42a6  0fb65130             movzx edx, byte ptr [ecx + 0x30]
// 004c42aa  8d4108               lea eax, [ecx + 8]
// 004c42ad  52                   push edx
// 004c42ae  8b5020               mov edx, dword ptr [eax + 0x20]
// 004c42b1  52                   push edx
// 004c42b2  50                   push eax
// 004c42b3  8b01                 mov eax, dword ptr [ecx]
// 004c42b5  ffd0                 call eax
// 004c42b7  83c40c               add esp, 0xc
// 004c42ba  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ?invoke@?$void_function_obj_invoker0@V?$bind_t@XP6AXABV?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@W4MessageType@RBX@@_N@ZV?$list3@V?$value@V?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@@_bi@boost@@V?$value@W4MessageType@RBX@@@23@V?$value@_N@23@@_bi@2@@_bi@boost@@X@function@detail@boost@@SAXAATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
