// roc 2010-06 007234c0  unit: RBX::UniversalTool  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007234c0
//
// 007234c0  8b4908               mov ecx, dword ptr [ecx + 8]
// 007234c3  85c9                 test ecx, ecx
// 007234c5  7408                 je 0x7234cf
// 007234c7  8b01                 mov eax, dword ptr [ecx]
// 007234c9  8b10                 mov edx, dword ptr [eax]
// 007234cb  6a01                 push 1
// 007234cd  ffd2                 call edx
// 007234cf  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??1Arguments@FunctionDescriptor@Reflection@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
