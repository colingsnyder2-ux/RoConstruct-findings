// roc 2011-06 00661ae0  unit: RBX::VExplosion::?$EventDesc  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00661ae0
//
// 00661ae0  a1ecefc800           mov eax, dword ptr [0xc8efec]
// 00661ae5  56                   push esi
// 00661ae6  8b742408             mov esi, dword ptr [esp + 8]
// 00661aea  50                   push eax
// 00661aeb  6a01                 push 1
// 00661aed  56                   push esi
// 00661aee  e88d251000           call 0x764080
// 00661af3  56                   push esi
// 00661af4  50                   push eax
// 00661af5  e896f9ffff           call 0x661490
// 00661afa  83c414               add esp, 0x14
// 00661afd  5e                   pop esi
// 00661afe  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
