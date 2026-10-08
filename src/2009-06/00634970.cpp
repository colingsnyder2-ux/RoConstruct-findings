// roc 2009-06 00634970  unit: RBX::VScriptContext::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00634970
//
// 00634970  a1f82aa200           mov eax, dword ptr [0xa22af8]
// 00634975  56                   push esi
// 00634976  8b742408             mov esi, dword ptr [esp + 8]
// 0063497a  50                   push eax
// 0063497b  6a01                 push 1
// 0063497d  56                   push esi
// 0063497e  e82d620800           call 0x6babb0
// 00634983  56                   push esi
// 00634984  50                   push eax
// 00634985  e8a6ebffff           call 0x633530
// 0063498a  83c414               add esp, 0x14
// 0063498d  5e                   pop esi
// 0063498e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
