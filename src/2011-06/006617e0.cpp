// roc 2011-06 006617e0  unit: RBX::VExplosion::?$EventDesc  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006617e0
//
// 006617e0  a1fcefc800           mov eax, dword ptr [0xc8effc]
// 006617e5  56                   push esi
// 006617e6  8b742408             mov esi, dword ptr [esp + 8]
// 006617ea  50                   push eax
// 006617eb  6a01                 push 1
// 006617ed  56                   push esi
// 006617ee  e88d281000           call 0x764080
// 006617f3  56                   push esi
// 006617f4  50                   push eax
// 006617f5  e8a6f81000           call 0x7710a0
// 006617fa  83c414               add esp, 0x14
// 006617fd  5e                   pop esi
// 006617fe  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
