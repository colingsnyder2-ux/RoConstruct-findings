// roc 2008-06 0055e310  unit: RBX::Reflection::$$A6AXPBVPropertyDescriptor::V?$function::?$holder  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055e310
//
// 0055e310  8b442404             mov eax, dword ptr [esp + 4]
// 0055e314  8b5008               mov edx, dword ptr [eax + 8]
// 0055e317  8b4804               mov ecx, dword ptr [eax + 4]
// 0055e31a  8b00                 mov eax, dword ptr [eax]
// 0055e31c  03ca                 add ecx, edx
// 0055e31e  ffe0                 jmp eax
// library rbxgs/script\ScriptContext.cpp (function ?invoke@?$function_obj_invoker0@V?$bind_t@IV?$cmf0@IVScriptContext@RBX@@@_mfi@boost@@V?$list1@V?$value@PAVScriptContext@RBX@@@_bi@boost@@@_bi@3@@_bi@boost@@H@function@detail@boost@@SAHAATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
