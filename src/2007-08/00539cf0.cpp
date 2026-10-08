// roc 2007-08 00539cf0  unit: RBX::Reflection::VValue::V?$vector::?$holder  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00539cf0
//
// 00539cf0  a12cbc8a00           mov eax, dword ptr [0x8abc2c]
// 00539cf5  56                   push esi
// 00539cf6  8b742408             mov esi, dword ptr [esp + 8]
// 00539cfa  50                   push eax
// 00539cfb  6a01                 push 1
// 00539cfd  56                   push esi
// 00539cfe  e83d550800           call 0x5bf240
// 00539d03  56                   push esi
// 00539d04  50                   push eax
// 00539d05  e886fdffff           call 0x539a90
// 00539d0a  83c414               add esp, 0x14
// 00539d0d  5e                   pop esi
// 00539d0e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
