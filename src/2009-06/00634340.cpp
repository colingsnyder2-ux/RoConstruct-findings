// roc 2009-06 00634340  unit: RBX::VScriptContext::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00634340
//
// 00634340  a1fc2aa200           mov eax, dword ptr [0xa22afc]
// 00634345  56                   push esi
// 00634346  8b742408             mov esi, dword ptr [esp + 8]
// 0063434a  50                   push eax
// 0063434b  6a01                 push 1
// 0063434d  56                   push esi
// 0063434e  e85d680800           call 0x6babb0
// 00634353  56                   push esi
// 00634354  50                   push eax
// 00634355  e816efffff           call 0x633270
// 0063435a  83c414               add esp, 0x14
// 0063435d  5e                   pop esi
// 0063435e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
