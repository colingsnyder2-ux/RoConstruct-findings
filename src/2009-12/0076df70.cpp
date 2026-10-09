// roc 2009-12 0076df70  unit: RBX::VGuiBase::?$NonFactoryProduct  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0076df70
//
// 0076df70  8b442404             mov eax, dword ptr [esp + 4]
// 0076df74  8b4804               mov ecx, dword ptr [eax + 4]
// 0076df77  8b00                 mov eax, dword ptr [eax]
// 0076df79  ffe0                 jmp eax
// library rbxgs-view/Part.cpp (function ?invoke@?$void_function_obj_invoker1@V?$bind_t@XV?$mf0@XVPartChunk@View@RBX@@@_mfi@boost@@V?$list1@V?$value@PAVPartChunk@View@RBX@@@_bi@boost@@@_bi@3@@_bi@boost@@XPBVPropertyDescriptor@Reflection@RBX@@@function@detail@boost@@SAXAATfunction_buffer@234@PBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view Part.cpp
