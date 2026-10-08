// roc 2008-06 005ac600  unit: RBX::VScriptContext::?$FactoryProduct  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ac600
//
// 005ac600  8b442404             mov eax, dword ptr [esp + 4]
// 005ac604  8b5004               mov edx, dword ptr [eax + 4]
// 005ac607  8b00                 mov eax, dword ptr [eax]
// 005ac609  89542404             mov dword ptr [esp + 4], edx
// 005ac60d  ffe0                 jmp eax
// library rbxgs/script\ScriptContext.cpp (function ?invoke@?$void_function_obj_invoker2@V?$bind_t@XP6AXAAV?$auto_ptr@V?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@std@@PAUlua_State@@I@ZV?$list3@V?$reference_wrapper@V?$auto_ptr@V?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@std@@@boost@@V?$arg@$00@2@V?$arg@$01@2@@_bi@boost@@@_bi@boost@@XPAUlua_State@@I@function@detail@boost@@SAXAATfunction_buffer@234@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
