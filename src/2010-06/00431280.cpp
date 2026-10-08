// roc 2010-06 00431280  unit: COutputView  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00431280
//
// 00431280  8b442408             mov eax, dword ptr [esp + 8]
// 00431284  50                   push eax
// 00431285  8b442408             mov eax, dword ptr [esp + 8]
// 00431289  8b4804               mov ecx, dword ptr [eax + 4]
// 0043128c  8b10                 mov edx, dword ptr [eax]
// 0043128e  ffd2                 call edx
// 00431290  c3                   ret 
// library rbxgs-view/Part.cpp (function ?invoke@?$void_function_obj_invoker1@V?$bind_t@XV?$mf1@XVPartChunk@View@RBX@@PBVPropertyDescriptor@Reflection@3@@_mfi@boost@@V?$list2@V?$value@PAVPartChunk@View@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@XPBVPropertyDescriptor@Reflection@RBX@@@function@detail@boost@@SAXAATfunction_buffer@234@PBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view Part.cpp
