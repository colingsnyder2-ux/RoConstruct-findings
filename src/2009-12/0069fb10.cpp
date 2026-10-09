// roc 2009-12 0069fb10  unit: std::strstream  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069fb10
//
// 0069fb10  a1782bb600           mov eax, dword ptr [0xb62b78]
// 0069fb15  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0069fb19  50                   push eax
// 0069fb1a  6a01                 push 1
// 0069fb1c  51                   push ecx
// 0069fb1d  e83eab0e00           call 0x78a660
// 0069fb22  83c40c               add esp, 0xc
// 0069fb25  33c0                 xor eax, eax
// 0069fb27  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
