// roc 2010-06 0060a720  unit: std::strstream  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060a720
//
// 0060a720  83c8ff               or eax, 0xffffffff
// 0060a723  2b01                 sub eax, dword ptr [ecx]
// 0060a725  8b4904               mov ecx, dword ptr [ecx + 4]
// 0060a728  50                   push eax
// 0060a729  51                   push ecx
// 0060a72a  e831681100           call 0x720f60
// 0060a72f  83c408               add esp, 8
// 0060a732  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ??1ScopedPopper@Lua@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
