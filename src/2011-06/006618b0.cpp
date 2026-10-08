// roc 2011-06 006618b0  unit: RBX::VExplosion::?$EventDesc  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006618b0
//
// 006618b0  a1c0efc800           mov eax, dword ptr [0xc8efc0]
// 006618b5  56                   push esi
// 006618b6  8b742408             mov esi, dword ptr [esp + 8]
// 006618ba  50                   push eax
// 006618bb  6a01                 push 1
// 006618bd  56                   push esi
// 006618be  e8bd271000           call 0x764080
// 006618c3  56                   push esi
// 006618c4  50                   push eax
// 006618c5  e846f8ffff           call 0x661110
// 006618ca  83c414               add esp, 0x14
// 006618cd  5e                   pop esi
// 006618ce  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
