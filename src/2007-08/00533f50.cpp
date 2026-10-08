// roc 2007-08 00533f50  unit: RBX::Selection  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00533f50
//
// 00533f50  83c8ff               or eax, 0xffffffff
// 00533f53  2b01                 sub eax, dword ptr [ecx]
// 00533f55  8b4904               mov ecx, dword ptr [ecx + 4]
// 00533f58  50                   push eax
// 00533f59  51                   push ecx
// 00533f5a  e831960800           call 0x5bd590
// 00533f5f  83c408               add esp, 8
// 00533f62  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ??1ScopedPopper@Lua@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
