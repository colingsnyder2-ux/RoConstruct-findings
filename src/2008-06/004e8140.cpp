// roc 2008-06 004e8140  unit: std::X::ZV?$allocator::$$A6AX_N::V?$function::?$holder  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e8140
//
// 004e8140  8b442408             mov eax, dword ptr [esp + 8]
// 004e8144  50                   push eax
// 004e8145  8b442408             mov eax, dword ptr [esp + 8]
// 004e8149  8b4804               mov ecx, dword ptr [eax + 4]
// 004e814c  8b10                 mov edx, dword ptr [eax]
// 004e814e  ffd2                 call edx
// 004e8150  c3                   ret 
// library rbxgs-view/Part.cpp (function ?invoke@?$void_function_obj_invoker1@V?$bind_t@XV?$mf1@XVPartChunk@View@RBX@@PBVPropertyDescriptor@Reflection@3@@_mfi@boost@@V?$list2@V?$value@PAVPartChunk@View@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@XPBVPropertyDescriptor@Reflection@RBX@@@function@detail@boost@@SAXAATfunction_buffer@234@PBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view Part.cpp
