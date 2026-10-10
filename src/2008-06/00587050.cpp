// from server: 100% by tester
// roc 2007-03 005ba9e0  unit: seg_005b0000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ba9e0
//
// 005ba9e0  8b4908               mov ecx, dword ptr [ecx + 8]
// 005ba9e3  85c9                 test ecx, ecx
// 005ba9e5  7408                 je 0x5ba9ef
// 005ba9e7  8b01                 mov eax, dword ptr [ecx]
// 005ba9e9  8b10                 mov edx, dword ptr [eax]
// 005ba9eb  6a01                 push 1
// 005ba9ed  ffd2                 call edx
// 005ba9ef  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??1Arguments@FunctionDescriptor@Reflection@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
