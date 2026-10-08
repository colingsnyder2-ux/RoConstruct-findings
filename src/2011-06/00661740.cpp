// roc 2011-06 00661740  unit: RBX::VExplosion::?$EventDesc  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00661740
//
// 00661740  a164d5c400           mov eax, dword ptr [0xc4d564]
// 00661745  56                   push esi
// 00661746  8b742408             mov esi, dword ptr [esp + 8]
// 0066174a  50                   push eax
// 0066174b  6a01                 push 1
// 0066174d  56                   push esi
// 0066174e  e82d291000           call 0x764080
// 00661753  56                   push esi
// 00661754  50                   push eax
// 00661755  e8467e1100           call 0x7795a0
// 0066175a  83c414               add esp, 0x14
// 0066175d  5e                   pop esi
// 0066175e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
