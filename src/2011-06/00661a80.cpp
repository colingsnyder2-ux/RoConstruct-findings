// roc 2011-06 00661a80  unit: RBX::VExplosion::?$EventDesc  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00661a80
//
// 00661a80  a1e8efc800           mov eax, dword ptr [0xc8efe8]
// 00661a85  56                   push esi
// 00661a86  8b742408             mov esi, dword ptr [esp + 8]
// 00661a8a  50                   push eax
// 00661a8b  6a01                 push 1
// 00661a8d  56                   push esi
// 00661a8e  e8ed251000           call 0x764080
// 00661a93  56                   push esi
// 00661a94  50                   push eax
// 00661a95  e876f9ffff           call 0x661410
// 00661a9a  83c414               add esp, 0x14
// 00661a9d  5e                   pop esi
// 00661a9e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
