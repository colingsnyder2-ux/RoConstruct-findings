// roc 2012-06 006a21b0  unit: std::D::DU?$char_traits::?$basic_istringstream  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a21b0
//
// 006a21b0  83c8ff               or eax, 0xffffffff
// 006a21b3  2b01                 sub eax, dword ptr [ecx]
// 006a21b5  8b4904               mov ecx, dword ptr [ecx + 4]
// 006a21b8  50                   push eax
// 006a21b9  51                   push ecx
// 006a21ba  e841f91800           call 0x831b00
// 006a21bf  83c408               add esp, 8
// 006a21c2  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ??1ScopedPopper@Lua@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
