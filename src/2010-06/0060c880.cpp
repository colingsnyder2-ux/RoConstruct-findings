// roc 2010-06 0060c880  unit: RBX::VScriptContext::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060c880
//
// 0060c880  a1582abe00           mov eax, dword ptr [0xbe2a58]
// 0060c885  56                   push esi
// 0060c886  8b742408             mov esi, dword ptr [esp + 8]
// 0060c88a  50                   push eax
// 0060c88b  6a01                 push 1
// 0060c88d  56                   push esi
// 0060c88e  e87d651100           call 0x722e10
// 0060c893  56                   push esi
// 0060c894  50                   push eax
// 0060c895  e8c6e4ffff           call 0x60ad60
// 0060c89a  83c414               add esp, 0x14
// 0060c89d  5e                   pop esi
// 0060c89e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
