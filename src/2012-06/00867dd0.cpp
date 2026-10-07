// roc 2012-06 00867dd0  unit: RBX::MouseCommand  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00867dd0
//
// 00867dd0  8b4908               mov ecx, dword ptr [ecx + 8]
// 00867dd3  85c9                 test ecx, ecx
// 00867dd5  7408                 je 0x867ddf
// 00867dd7  8b01                 mov eax, dword ptr [ecx]
// 00867dd9  8b10                 mov edx, dword ptr [eax]
// 00867ddb  6a01                 push 1
// 00867ddd  ffd2                 call edx
// 00867ddf  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??1Arguments@FunctionDescriptor@Reflection@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
