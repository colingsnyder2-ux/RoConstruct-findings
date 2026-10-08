// roc 2007-08 005356e0  unit: std::logic_error  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005356e0
//
// 005356e0  a17cbe8a00           mov eax, dword ptr [0x8abe7c]
// 005356e5  56                   push esi
// 005356e6  8b742408             mov esi, dword ptr [esp + 8]
// 005356ea  50                   push eax
// 005356eb  6a01                 push 1
// 005356ed  56                   push esi
// 005356ee  e84d9b0800           call 0x5bf240
// 005356f3  56                   push esi
// 005356f4  50                   push eax
// 005356f5  e856eeffff           call 0x534550
// 005356fa  83c414               add esp, 0x14
// 005356fd  5e                   pop esi
// 005356fe  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
