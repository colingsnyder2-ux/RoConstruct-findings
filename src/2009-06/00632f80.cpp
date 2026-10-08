// roc 2009-06 00632f80  unit: std::strstream  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00632f80
//
// 00632f80  83c8ff               or eax, 0xffffffff
// 00632f83  2b01                 sub eax, dword ptr [ecx]
// 00632f85  8b4904               mov ecx, dword ptr [ecx + 4]
// 00632f88  50                   push eax
// 00632f89  51                   push ecx
// 00632f8a  e8015e0800           call 0x6b8d90
// 00632f8f  83c408               add esp, 8
// 00632f92  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ??1ScopedPopper@Lua@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
