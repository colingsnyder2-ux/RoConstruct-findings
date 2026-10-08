// roc 2007-03 00536250  unit: seg_00530000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00536250
//
// 00536250  83c8ff               or eax, 0xffffffff
// 00536253  2b01                 sub eax, dword ptr [ecx]
// 00536255  8b4904               mov ecx, dword ptr [ecx + 4]
// 00536258  50                   push eax
// 00536259  51                   push ecx
// 0053625a  e801280800           call 0x5b8a60
// 0053625f  83c408               add esp, 8
// 00536262  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ??1ScopedPopper@Lua@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
