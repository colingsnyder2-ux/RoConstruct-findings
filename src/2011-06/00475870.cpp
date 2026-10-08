// roc 2011-06 00475870  unit: RecordToggleVerb  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00475870
//
// 00475870  8b442404             mov eax, dword ptr [esp + 4]
// 00475874  8b4804               mov ecx, dword ptr [eax + 4]
// 00475877  8b00                 mov eax, dword ptr [eax]
// 00475879  ffe0                 jmp eax
// library rbxgs-view/Part.cpp (function ?invoke@?$void_function_obj_invoker1@V?$bind_t@XV?$mf0@XVPartChunk@View@RBX@@@_mfi@boost@@V?$list1@V?$value@PAVPartChunk@View@RBX@@@_bi@boost@@@_bi@3@@_bi@boost@@XPBVPropertyDescriptor@Reflection@RBX@@@function@detail@boost@@SAXAATfunction_buffer@234@PBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view Part.cpp
