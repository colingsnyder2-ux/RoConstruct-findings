// roc 2012-06 00721eb0  unit: RBX::$$A6AXABVHeartbeat::?$signal::Vslot::?$callable  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00721eb0
//
// 00721eb0  8b442404             mov eax, dword ptr [esp + 4]
// 00721eb4  8b5008               mov edx, dword ptr [eax + 8]
// 00721eb7  8b4804               mov ecx, dword ptr [eax + 4]
// 00721eba  8b00                 mov eax, dword ptr [eax]
// 00721ebc  03ca                 add ecx, edx
// 00721ebe  ffe0                 jmp eax
// library rbxgs/script\ScriptContext.cpp (function ?invoke@?$function_obj_invoker0@V?$bind_t@IV?$cmf0@IVScriptContext@RBX@@@_mfi@boost@@V?$list1@V?$value@PAVScriptContext@RBX@@@_bi@boost@@@_bi@3@@_bi@boost@@H@function@detail@boost@@SAHAATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
