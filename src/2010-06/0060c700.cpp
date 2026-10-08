// roc 2010-06 0060c700  unit: RBX::VScriptContext::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060c700
//
// 0060c700  a1502abe00           mov eax, dword ptr [0xbe2a50]
// 0060c705  56                   push esi
// 0060c706  8b742408             mov esi, dword ptr [esp + 8]
// 0060c70a  50                   push eax
// 0060c70b  6a01                 push 1
// 0060c70d  56                   push esi
// 0060c70e  e8fd661100           call 0x722e10
// 0060c713  56                   push esi
// 0060c714  50                   push eax
// 0060c715  e8a6e4ffff           call 0x60abc0
// 0060c71a  83c414               add esp, 0x14
// 0060c71d  5e                   pop esi
// 0060c71e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
