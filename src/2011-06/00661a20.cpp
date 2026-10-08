// roc 2011-06 00661a20  unit: RBX::VExplosion::?$EventDesc  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00661a20
//
// 00661a20  a1d8efc800           mov eax, dword ptr [0xc8efd8]
// 00661a25  56                   push esi
// 00661a26  8b742408             mov esi, dword ptr [esp + 8]
// 00661a2a  50                   push eax
// 00661a2b  6a01                 push 1
// 00661a2d  56                   push esi
// 00661a2e  e84d261000           call 0x764080
// 00661a33  56                   push esi
// 00661a34  50                   push eax
// 00661a35  e8d6f8ffff           call 0x661310
// 00661a3a  83c414               add esp, 0x14
// 00661a3d  5e                   pop esi
// 00661a3e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
