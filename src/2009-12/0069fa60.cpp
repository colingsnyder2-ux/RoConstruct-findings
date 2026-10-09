// roc 2009-12 0069fa60  unit: std::strstream  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069fa60
//
// 0069fa60  a1742bb600           mov eax, dword ptr [0xb62b74]
// 0069fa65  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0069fa69  50                   push eax
// 0069fa6a  6a01                 push 1
// 0069fa6c  51                   push ecx
// 0069fa6d  e8eeab0e00           call 0x78a660
// 0069fa72  83c40c               add esp, 0xc
// 0069fa75  33c0                 xor eax, eax
// 0069fa77  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
