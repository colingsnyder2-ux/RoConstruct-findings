// roc 2008-06 005961b0  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005961b0
//
// 005961b0  8b442408             mov eax, dword ptr [esp + 8]
// 005961b4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005961b8  8b09                 mov ecx, dword ptr [ecx]
// 005961ba  50                   push eax
// 005961bb  e8d0f9ffff           call 0x595b90
// 005961c0  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?invoke@?$void_function_obj_invoker1@U?$tss_adapter@VContext@Security@RBX@@@detail@boost@@XPAX@function@detail@boost@@SAXAATfunction_buffer@234@PAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
