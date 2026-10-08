// roc 2009-06 006c9d10  unit: seg_006c0000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c9d10
//
// 006c9d10  8b442408             mov eax, dword ptr [esp + 8]
// 006c9d14  50                   push eax
// 006c9d15  8b442408             mov eax, dword ptr [esp + 8]
// 006c9d19  8b4804               mov ecx, dword ptr [eax + 4]
// 006c9d1c  8b10                 mov edx, dword ptr [eax]
// 006c9d1e  ffd2                 call edx
// 006c9d20  c3                   ret 
// library rbxgs-view/Part.cpp (function ?invoke@?$void_function_obj_invoker1@V?$bind_t@XV?$mf1@XVPartChunk@View@RBX@@PBVPropertyDescriptor@Reflection@3@@_mfi@boost@@V?$list2@V?$value@PAVPartChunk@View@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@XPBVPropertyDescriptor@Reflection@RBX@@@function@detail@boost@@SAXAATfunction_buffer@234@PBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view Part.cpp
