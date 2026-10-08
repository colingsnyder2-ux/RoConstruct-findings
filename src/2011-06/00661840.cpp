// roc 2011-06 00661840  unit: RBX::VExplosion::?$EventDesc  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00661840
//
// 00661840  a1c0f4c800           mov eax, dword ptr [0xc8f4c0]
// 00661845  56                   push esi
// 00661846  8b742408             mov esi, dword ptr [esp + 8]
// 0066184a  50                   push eax
// 0066184b  6a01                 push 1
// 0066184d  56                   push esi
// 0066184e  e82d281000           call 0x764080
// 00661853  56                   push esi
// 00661854  50                   push eax
// 00661855  e836fdffff           call 0x661590
// 0066185a  83c414               add esp, 0x14
// 0066185d  5e                   pop esi
// 0066185e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
