// roc 2008-06 005a8590  unit: RBX::Log  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a8590
//
// 005a8590  83c8ff               or eax, 0xffffffff
// 005a8593  2b01                 sub eax, dword ptr [ecx]
// 005a8595  8b4904               mov ecx, dword ptr [ecx + 4]
// 005a8598  50                   push eax
// 005a8599  51                   push ecx
// 005a859a  e881960600           call 0x611c20
// 005a859f  83c408               add esp, 8
// 005a85a2  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ??1ScopedPopper@Lua@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
