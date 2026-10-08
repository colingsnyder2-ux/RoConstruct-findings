// roc 2011-06 00661690  unit: RBX::VExplosion::?$EventDesc  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00661690
//
// 00661690  a10cf0c800           mov eax, dword ptr [0xc8f00c]
// 00661695  56                   push esi
// 00661696  8b742408             mov esi, dword ptr [esp + 8]
// 0066169a  50                   push eax
// 0066169b  6a01                 push 1
// 0066169d  56                   push esi
// 0066169e  e8dd291000           call 0x764080
// 006616a3  56                   push esi
// 006616a4  50                   push eax
// 006616a5  e8967e1100           call 0x779540
// 006616aa  83c414               add esp, 0x14
// 006616ad  5e                   pop esi
// 006616ae  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
