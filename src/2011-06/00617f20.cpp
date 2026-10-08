// roc 2011-06 00617f20  unit: boost::bad_lexical_cast  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00617f20
//
// 00617f20  83c8ff               or eax, 0xffffffff
// 00617f23  2b01                 sub eax, dword ptr [ecx]
// 00617f25  8b4904               mov ecx, dword ptr [ecx + 4]
// 00617f28  50                   push eax
// 00617f29  51                   push ecx
// 00617f2a  e841a41400           call 0x762370
// 00617f2f  83c408               add esp, 8
// 00617f32  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ??1ScopedPopper@Lua@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
