// roc 2011-06 0061c860  unit: RBX::VScriptContext::?$FactoryProduct  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0061c860
//
// 0061c860  8b442404             mov eax, dword ptr [esp + 4]
// 0061c864  8b4804               mov ecx, dword ptr [eax + 4]
// 0061c867  894c2404             mov dword ptr [esp + 4], ecx
// 0061c86b  8b00                 mov eax, dword ptr [eax]
// 0061c86d  ffe0                 jmp eax
// library rbxgs/script\ScriptContext.cpp (function ?invoke@?$function_obj_invoker1@V?$bind_t@IP6AIABV?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@PAUlua_State@@@ZV?$list2@V?$reference_wrapper@$$CBV?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@boost@@V?$arg@$00@2@@_bi@boost@@@_bi@boost@@IPAUlua_State@@@function@detail@boost@@SAIAATfunction_buffer@234@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
