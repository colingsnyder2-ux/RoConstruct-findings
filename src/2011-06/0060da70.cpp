// roc 2011-06 0060da70  unit: RBX::VModelInstance::?$BoundFuncDesc  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0060da70
//
// 0060da70  8b4908               mov ecx, dword ptr [ecx + 8]
// 0060da73  85c9                 test ecx, ecx
// 0060da75  7408                 je 0x60da7f
// 0060da77  8b01                 mov eax, dword ptr [ecx]
// 0060da79  8b10                 mov edx, dword ptr [eax]
// 0060da7b  6a01                 push 1
// 0060da7d  ffd2                 call edx
// 0060da7f  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??1Arguments@FunctionDescriptor@Reflection@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
