// roc 2010-06 0060d330  unit: RBX::VScriptContext::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060d330
//
// 0060d330  a14c23be00           mov eax, dword ptr [0xbe234c]
// 0060d335  56                   push esi
// 0060d336  8b742408             mov esi, dword ptr [esp + 8]
// 0060d33a  50                   push eax
// 0060d33b  6a01                 push 1
// 0060d33d  56                   push esi
// 0060d33e  e8cd5a1100           call 0x722e10
// 0060d343  56                   push esi
// 0060d344  50                   push eax
// 0060d345  e866ebffff           call 0x60beb0
// 0060d34a  83c414               add esp, 0x14
// 0060d34d  5e                   pop esi
// 0060d34e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
