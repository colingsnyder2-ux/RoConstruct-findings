// roc 2009-06 00634570  unit: RBX::VScriptContext::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00634570
//
// 00634570  a1f42aa200           mov eax, dword ptr [0xa22af4]
// 00634575  56                   push esi
// 00634576  8b742408             mov esi, dword ptr [esp + 8]
// 0063457a  50                   push eax
// 0063457b  6a01                 push 1
// 0063457d  56                   push esi
// 0063457e  e82d660800           call 0x6babb0
// 00634583  56                   push esi
// 00634584  50                   push eax
// 00634585  e806eeffff           call 0x633390
// 0063458a  83c414               add esp, 0x14
// 0063458d  5e                   pop esi
// 0063458e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
