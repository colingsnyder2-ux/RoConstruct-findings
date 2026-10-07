// roc 2008-06 00587050  unit: RBX::LocalScript  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00587050
//
// 00587050  8b4908               mov ecx, dword ptr [ecx + 8]
// 00587053  85c9                 test ecx, ecx
// 00587055  7408                 je 0x58705f
// 00587057  8b01                 mov eax, dword ptr [ecx]
// 00587059  8b10                 mov edx, dword ptr [eax]
// 0058705b  6a01                 push 1
// 0058705d  ffd2                 call edx
// 0058705f  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??1Arguments@FunctionDescriptor@Reflection@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
