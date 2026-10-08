// roc 2010-06 0060cdb0  unit: RBX::VScriptContext::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060cdb0
//
// 0060cdb0  a16c2abe00           mov eax, dword ptr [0xbe2a6c]
// 0060cdb5  56                   push esi
// 0060cdb6  8b742408             mov esi, dword ptr [esp + 8]
// 0060cdba  50                   push eax
// 0060cdbb  6a01                 push 1
// 0060cdbd  56                   push esi
// 0060cdbe  e84d601100           call 0x722e10
// 0060cdc3  56                   push esi
// 0060cdc4  50                   push eax
// 0060cdc5  e8f6e4ffff           call 0x60b2c0
// 0060cdca  83c414               add esp, 0x14
// 0060cdcd  5e                   pop esi
// 0060cdce  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
