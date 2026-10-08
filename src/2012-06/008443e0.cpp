// roc 2012-06 008443e0  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008443e0
//
// 008443e0  a1bc13de00           mov eax, dword ptr [0xde13bc]
// 008443e5  56                   push esi
// 008443e6  8b742408             mov esi, dword ptr [esp + 8]
// 008443ea  50                   push eax
// 008443eb  6a01                 push 1
// 008443ed  56                   push esi
// 008443ee  e81df4feff           call 0x833810
// 008443f3  56                   push esi
// 008443f4  50                   push eax
// 008443f5  e816f7ffff           call 0x843b10
// 008443fa  83c414               add esp, 0x14
// 008443fd  5e                   pop esi
// 008443fe  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
