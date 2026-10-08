// roc 2009-06 00636e10  unit: RBX::VScriptContext::?$FactoryProduct  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00636e10
//
// 00636e10  8b442404             mov eax, dword ptr [esp + 4]
// 00636e14  8b4804               mov ecx, dword ptr [eax + 4]
// 00636e17  894c2404             mov dword ptr [esp + 4], ecx
// 00636e1b  8b00                 mov eax, dword ptr [eax]
// 00636e1d  ffe0                 jmp eax
// library rbxgs/script\ScriptContext.cpp (function ?invoke@?$function_obj_invoker1@V?$bind_t@IP6AIABV?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@PAUlua_State@@@ZV?$list2@V?$reference_wrapper@$$CBV?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@boost@@V?$arg@$00@2@@_bi@boost@@@_bi@boost@@IPAUlua_State@@@function@detail@boost@@SAIAATfunction_buffer@234@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
