// roc 2010-06 0060cd90  unit: RBX::VScriptContext::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060cd90
//
// 0060cd90  a1482abe00           mov eax, dword ptr [0xbe2a48]
// 0060cd95  56                   push esi
// 0060cd96  8b742408             mov esi, dword ptr [esp + 8]
// 0060cd9a  50                   push eax
// 0060cd9b  6a01                 push 1
// 0060cd9d  56                   push esi
// 0060cd9e  e86d601100           call 0x722e10
// 0060cda3  56                   push esi
// 0060cda4  50                   push eax
// 0060cda5  e896e4ffff           call 0x60b240
// 0060cdaa  83c414               add esp, 0x14
// 0060cdad  5e                   pop esi
// 0060cdae  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
