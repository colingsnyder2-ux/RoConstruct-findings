// roc 2011-06 00661780  unit: RBX::VExplosion::?$EventDesc  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00661780
//
// 00661780  a1f8efc800           mov eax, dword ptr [0xc8eff8]
// 00661785  56                   push esi
// 00661786  8b742408             mov esi, dword ptr [esp + 8]
// 0066178a  50                   push eax
// 0066178b  6a01                 push 1
// 0066178d  56                   push esi
// 0066178e  e8ed281000           call 0x764080
// 00661793  56                   push esi
// 00661794  50                   push eax
// 00661795  e8e6f81000           call 0x771080
// 0066179a  83c414               add esp, 0x14
// 0066179d  5e                   pop esi
// 0066179e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
