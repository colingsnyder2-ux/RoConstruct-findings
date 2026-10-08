// roc 2009-06 00634460  unit: RBX::VScriptContext::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00634460
//
// 00634460  a1f02aa200           mov eax, dword ptr [0xa22af0]
// 00634465  56                   push esi
// 00634466  8b742408             mov esi, dword ptr [esp + 8]
// 0063446a  50                   push eax
// 0063446b  6a01                 push 1
// 0063446d  56                   push esi
// 0063446e  e83d670800           call 0x6babb0
// 00634473  56                   push esi
// 00634474  50                   push eax
// 00634475  e896eeffff           call 0x633310
// 0063447a  83c414               add esp, 0x14
// 0063447d  5e                   pop esi
// 0063447e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
