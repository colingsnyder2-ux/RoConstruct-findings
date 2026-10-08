// roc 2012-06 00843e60  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00843e60
//
// 00843e60  a1b418de00           mov eax, dword ptr [0xde18b4]
// 00843e65  56                   push esi
// 00843e66  8b742408             mov esi, dword ptr [esp + 8]
// 00843e6a  50                   push eax
// 00843e6b  6a01                 push 1
// 00843e6d  56                   push esi
// 00843e6e  e89df9feff           call 0x833810
// 00843e73  56                   push esi
// 00843e74  50                   push eax
// 00843e75  e896fbffff           call 0x843a10
// 00843e7a  83c414               add esp, 0x14
// 00843e7d  5e                   pop esi
// 00843e7e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
