// roc 2012-06 008441b0  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008441b0
//
// 008441b0  a1e413de00           mov eax, dword ptr [0xde13e4]
// 008441b5  56                   push esi
// 008441b6  8b742408             mov esi, dword ptr [esp + 8]
// 008441ba  50                   push eax
// 008441bb  6a01                 push 1
// 008441bd  56                   push esi
// 008441be  e84df6feff           call 0x833810
// 008441c3  56                   push esi
// 008441c4  50                   push eax
// 008441c5  e8a6f6ffff           call 0x843870
// 008441ca  83c414               add esp, 0x14
// 008441cd  5e                   pop esi
// 008441ce  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
