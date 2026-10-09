// roc 2009-12 0069ee30  unit: std::strstream  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069ee30
//
// 0069ee30  83c8ff               or eax, 0xffffffff
// 0069ee33  2b01                 sub eax, dword ptr [ecx]
// 0069ee35  8b4904               mov ecx, dword ptr [ecx + 4]
// 0069ee38  50                   push eax
// 0069ee39  51                   push ecx
// 0069ee3a  e871990e00           call 0x7887b0
// 0069ee3f  83c408               add esp, 8
// 0069ee42  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ??1ScopedPopper@Lua@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
