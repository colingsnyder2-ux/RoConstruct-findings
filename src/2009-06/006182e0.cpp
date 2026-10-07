// roc 2009-06 006182e0  unit: RBX::Script  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006182e0
//
// 006182e0  8b4908               mov ecx, dword ptr [ecx + 8]
// 006182e3  85c9                 test ecx, ecx
// 006182e5  7408                 je 0x6182ef
// 006182e7  8b01                 mov eax, dword ptr [ecx]
// 006182e9  8b10                 mov edx, dword ptr [eax]
// 006182eb  6a01                 push 1
// 006182ed  ffd2                 call edx
// 006182ef  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??1Arguments@FunctionDescriptor@Reflection@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
