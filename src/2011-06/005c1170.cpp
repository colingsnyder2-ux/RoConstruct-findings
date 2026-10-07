// roc 2011-06 005c1170  unit: RBX::VRbxRay::?$TypedPropertyDescriptor  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c1170
//
// 005c1170  8b442408             mov eax, dword ptr [esp + 8]
// 005c1174  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c1178  8b11                 mov edx, dword ptr [ecx]
// 005c117a  50                   push eax
// 005c117b  ffd2                 call edx
// 005c117d  59                   pop ecx
// 005c117e  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?invoke@?$void_function_invoker1@P6AXPAVContext@Security@RBX@@@ZXPAV123@@function@detail@boost@@SAXAATfunction_buffer@234@PAVContext@Security@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
