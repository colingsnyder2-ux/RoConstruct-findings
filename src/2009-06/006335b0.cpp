// roc 2009-06 006335b0  unit: std::strstream  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006335b0
//
// 006335b0  a1102ba200           mov eax, dword ptr [0xa22b10]
// 006335b5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006335b9  50                   push eax
// 006335ba  6a01                 push 1
// 006335bc  51                   push ecx
// 006335bd  e8ee750800           call 0x6babb0
// 006335c2  83c40c               add esp, 0xc
// 006335c5  33c0                 xor eax, eax
// 006335c7  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
