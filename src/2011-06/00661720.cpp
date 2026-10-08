// roc 2011-06 00661720  unit: RBX::VExplosion::?$EventDesc  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00661720
//
// 00661720  a160d5c400           mov eax, dword ptr [0xc4d560]
// 00661725  56                   push esi
// 00661726  8b742408             mov esi, dword ptr [esp + 8]
// 0066172a  50                   push eax
// 0066172b  6a01                 push 1
// 0066172d  56                   push esi
// 0066172e  e84d291000           call 0x764080
// 00661733  56                   push esi
// 00661734  50                   push eax
// 00661735  e8467e1100           call 0x779580
// 0066173a  83c414               add esp, 0x14
// 0066173d  5e                   pop esi
// 0066173e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
