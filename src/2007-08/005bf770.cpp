// roc 2007-08 005bf770  unit: boost::detail::H::?$sp_counted_impl_p  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bf770
//
// 005bf770  8b4908               mov ecx, dword ptr [ecx + 8]
// 005bf773  85c9                 test ecx, ecx
// 005bf775  7408                 je 0x5bf77f
// 005bf777  8b01                 mov eax, dword ptr [ecx]
// 005bf779  8b10                 mov edx, dword ptr [eax]
// 005bf77b  6a01                 push 1
// 005bf77d  ffd2                 call edx
// 005bf77f  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??1Arguments@FunctionDescriptor@Reflection@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
