// roc 2010-06 005f6640  unit: RBX::VTextureId::?$TypedPropertyDescriptor  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f6640
//
// 005f6640  8b442404             mov eax, dword ptr [esp + 4]
// 005f6644  8b4804               mov ecx, dword ptr [eax + 4]
// 005f6647  8b00                 mov eax, dword ptr [eax]
// 005f6649  ffe0                 jmp eax
// library rbxgs-view/Part.cpp (function ?invoke@?$void_function_obj_invoker1@V?$bind_t@XV?$mf0@XVPartChunk@View@RBX@@@_mfi@boost@@V?$list1@V?$value@PAVPartChunk@View@RBX@@@_bi@boost@@@_bi@3@@_bi@boost@@XPBVPropertyDescriptor@Reflection@RBX@@@function@detail@boost@@SAXAATfunction_buffer@234@PBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view Part.cpp
