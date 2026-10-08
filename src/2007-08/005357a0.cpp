// roc 2007-08 005357a0  unit: std::logic_error  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005357a0
//
// 005357a0  a188be8a00           mov eax, dword ptr [0x8abe88]
// 005357a5  56                   push esi
// 005357a6  8b742408             mov esi, dword ptr [esp + 8]
// 005357aa  50                   push eax
// 005357ab  6a01                 push 1
// 005357ad  56                   push esi
// 005357ae  e88d9a0800           call 0x5bf240
// 005357b3  56                   push esi
// 005357b4  50                   push eax
// 005357b5  e8c6f4ffff           call 0x534c80
// 005357ba  83c414               add esp, 0x14
// 005357bd  5e                   pop esi
// 005357be  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
