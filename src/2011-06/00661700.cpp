// roc 2011-06 00661700  unit: RBX::VExplosion::?$EventDesc  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00661700
//
// 00661700  a15cd5c400           mov eax, dword ptr [0xc4d55c]
// 00661705  56                   push esi
// 00661706  8b742408             mov esi, dword ptr [esp + 8]
// 0066170a  50                   push eax
// 0066170b  6a01                 push 1
// 0066170d  56                   push esi
// 0066170e  e86d291000           call 0x764080
// 00661713  56                   push esi
// 00661714  50                   push eax
// 00661715  e8467e1100           call 0x779560
// 0066171a  83c414               add esp, 0x14
// 0066171d  5e                   pop esi
// 0066171e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
