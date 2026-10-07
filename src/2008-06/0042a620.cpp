// roc 2008-06 0042a620  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042a620
//
// 0042a620  8b442408             mov eax, dword ptr [esp + 8]
// 0042a624  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0042a628  8b11                 mov edx, dword ptr [ecx]
// 0042a62a  50                   push eax
// 0042a62b  ffd2                 call edx
// 0042a62d  59                   pop ecx
// 0042a62e  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?invoke@?$void_function_invoker1@P6AXPAVContext@Security@RBX@@@ZXPAV123@@function@detail@boost@@SAXAATfunction_buffer@234@PAVContext@Security@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
