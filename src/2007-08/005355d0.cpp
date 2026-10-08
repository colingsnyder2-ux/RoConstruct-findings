// roc 2007-08 005355d0  unit: std::logic_error  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005355d0
//
// 005355d0  a174be8a00           mov eax, dword ptr [0x8abe74]
// 005355d5  56                   push esi
// 005355d6  8b742408             mov esi, dword ptr [esp + 8]
// 005355da  50                   push eax
// 005355db  6a01                 push 1
// 005355dd  56                   push esi
// 005355de  e85d9c0800           call 0x5bf240
// 005355e3  56                   push esi
// 005355e4  50                   push eax
// 005355e5  e8c6eeffff           call 0x5344b0
// 005355ea  83c414               add esp, 0x14
// 005355ed  5e                   pop esi
// 005355ee  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
