// roc 2010-06 0060cd70  unit: RBX::VScriptContext::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060cd70
//
// 0060cd70  a14c2abe00           mov eax, dword ptr [0xbe2a4c]
// 0060cd75  56                   push esi
// 0060cd76  8b742408             mov esi, dword ptr [esp + 8]
// 0060cd7a  50                   push eax
// 0060cd7b  6a01                 push 1
// 0060cd7d  56                   push esi
// 0060cd7e  e88d601100           call 0x722e10
// 0060cd83  56                   push esi
// 0060cd84  50                   push eax
// 0060cd85  e836e4ffff           call 0x60b1c0
// 0060cd8a  83c414               add esp, 0x14
// 0060cd8d  5e                   pop esi
// 0060cd8e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
