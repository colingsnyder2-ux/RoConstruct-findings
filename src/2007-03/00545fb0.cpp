// roc 2007-03 00545fb0  unit: seg_00540000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00545fb0
//
// 00545fb0  8b442404             mov eax, dword ptr [esp + 4]
// 00545fb4  8b4804               mov ecx, dword ptr [eax + 4]
// 00545fb7  8b00                 mov eax, dword ptr [eax]
// 00545fb9  ffe0                 jmp eax
// library rbxgs-view/Part.cpp (function ?invoke@?$void_function_obj_invoker1@V?$bind_t@XV?$mf0@XVPartChunk@View@RBX@@@_mfi@boost@@V?$list1@V?$value@PAVPartChunk@View@RBX@@@_bi@boost@@@_bi@3@@_bi@boost@@XPBVPropertyDescriptor@Reflection@RBX@@@function@detail@boost@@SAXAATfunction_buffer@234@PBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view Part.cpp
