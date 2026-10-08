// roc 2011-06 00661950  unit: RBX::VExplosion::?$EventDesc  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00661950
//
// 00661950  a1c4efc800           mov eax, dword ptr [0xc8efc4]
// 00661955  56                   push esi
// 00661956  8b742408             mov esi, dword ptr [esp + 8]
// 0066195a  50                   push eax
// 0066195b  6a01                 push 1
// 0066195d  56                   push esi
// 0066195e  e81d271000           call 0x764080
// 00661963  56                   push esi
// 00661964  50                   push eax
// 00661965  e826f8ffff           call 0x661190
// 0066196a  83c414               add esp, 0x14
// 0066196d  5e                   pop esi
// 0066196e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
