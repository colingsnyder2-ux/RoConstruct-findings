// roc 2012-06 00843e00  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00843e00
//
// 00843e00  a1f813de00           mov eax, dword ptr [0xde13f8]
// 00843e05  56                   push esi
// 00843e06  8b742408             mov esi, dword ptr [esp + 8]
// 00843e0a  50                   push eax
// 00843e0b  6a01                 push 1
// 00843e0d  56                   push esi
// 00843e0e  e8fdf9feff           call 0x833810
// 00843e13  56                   push esi
// 00843e14  50                   push eax
// 00843e15  e836d7ffff           call 0x841550
// 00843e1a  83c414               add esp, 0x14
// 00843e1d  5e                   pop esi
// 00843e1e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
