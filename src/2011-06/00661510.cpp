// roc 2011-06 00661510  unit: RBX::VExplosion::?$EventDesc  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00661510
//
// 00661510  a100f0c800           mov eax, dword ptr [0xc8f000]
// 00661515  56                   push esi
// 00661516  8b742408             mov esi, dword ptr [esp + 8]
// 0066151a  50                   push eax
// 0066151b  6a01                 push 1
// 0066151d  56                   push esi
// 0066151e  e85d2b1000           call 0x764080
// 00661523  56                   push esi
// 00661524  50                   push eax
// 00661525  e8b6fb1000           call 0x7710e0
// 0066152a  83c414               add esp, 0x14
// 0066152d  5e                   pop esi
// 0066152e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
