// roc 2011-06 00661570  unit: RBX::VExplosion::?$EventDesc  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00661570
//
// 00661570  a178e7c800           mov eax, dword ptr [0xc8e778]
// 00661575  56                   push esi
// 00661576  8b742408             mov esi, dword ptr [esp + 8]
// 0066157a  50                   push eax
// 0066157b  6a01                 push 1
// 0066157d  56                   push esi
// 0066157e  e8fd2a1000           call 0x764080
// 00661583  56                   push esi
// 00661584  50                   push eax
// 00661585  e8e6361000           call 0x764c70
// 0066158a  83c414               add esp, 0x14
// 0066158d  5e                   pop esi
// 0066158e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
