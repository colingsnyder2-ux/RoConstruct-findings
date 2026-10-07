// roc 2012-06 00767e80  unit: std::D::DU?$char_traits::$$A6A_NV?$basic_string::?$CallbackDescImpl  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00767e80
//
// 00767e80  8b442408             mov eax, dword ptr [esp + 8]
// 00767e84  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00767e88  8b11                 mov edx, dword ptr [ecx]
// 00767e8a  50                   push eax
// 00767e8b  ffd2                 call edx
// 00767e8d  59                   pop ecx
// 00767e8e  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?invoke@?$void_function_invoker1@P6AXPAVContext@Security@RBX@@@ZXPAV123@@function@detail@boost@@SAXAATfunction_buffer@234@PAVContext@Security@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
