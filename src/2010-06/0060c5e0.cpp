// roc 2010-06 0060c5e0  unit: RBX::VScriptContext::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060c5e0
//
// 0060c5e0  a1602abe00           mov eax, dword ptr [0xbe2a60]
// 0060c5e5  56                   push esi
// 0060c5e6  8b742408             mov esi, dword ptr [esp + 8]
// 0060c5ea  50                   push eax
// 0060c5eb  6a01                 push 1
// 0060c5ed  56                   push esi
// 0060c5ee  e81d681100           call 0x722e10
// 0060c5f3  56                   push esi
// 0060c5f4  50                   push eax
// 0060c5f5  e826e5ffff           call 0x60ab20
// 0060c5fa  83c414               add esp, 0x14
// 0060c5fd  5e                   pop esi
// 0060c5fe  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
