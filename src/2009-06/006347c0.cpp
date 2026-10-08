// roc 2009-06 006347c0  unit: RBX::VScriptContext::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006347c0
//
// 006347c0  a1182ba200           mov eax, dword ptr [0xa22b18]
// 006347c5  56                   push esi
// 006347c6  8b742408             mov esi, dword ptr [esp + 8]
// 006347ca  50                   push eax
// 006347cb  6a01                 push 1
// 006347cd  56                   push esi
// 006347ce  e8dd630800           call 0x6babb0
// 006347d3  56                   push esi
// 006347d4  50                   push eax
// 006347d5  e8c6e7ffff           call 0x632fa0
// 006347da  83c414               add esp, 0x14
// 006347dd  5e                   pop esi
// 006347de  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
