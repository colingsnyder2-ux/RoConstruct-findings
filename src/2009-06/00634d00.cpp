// roc 2009-06 00634d00  unit: RBX::VScriptContext::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00634d00
//
// 00634d00  a1a428a200           mov eax, dword ptr [0xa228a4]
// 00634d05  56                   push esi
// 00634d06  8b742408             mov esi, dword ptr [esp + 8]
// 00634d0a  50                   push eax
// 00634d0b  6a01                 push 1
// 00634d0d  56                   push esi
// 00634d0e  e89d5e0800           call 0x6babb0
// 00634d13  56                   push esi
// 00634d14  50                   push eax
// 00634d15  e806efffff           call 0x633c20
// 00634d1a  83c414               add esp, 0x14
// 00634d1d  5e                   pop esi
// 00634d1e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
