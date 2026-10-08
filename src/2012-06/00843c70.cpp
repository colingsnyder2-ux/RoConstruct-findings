// roc 2012-06 00843c70  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00843c70
//
// 00843c70  a10814de00           mov eax, dword ptr [0xde1408]
// 00843c75  56                   push esi
// 00843c76  8b742408             mov esi, dword ptr [esp + 8]
// 00843c7a  50                   push eax
// 00843c7b  6a01                 push 1
// 00843c7d  56                   push esi
// 00843c7e  e88dfbfeff           call 0x833810
// 00843c83  56                   push esi
// 00843c84  50                   push eax
// 00843c85  e896e20000           call 0x851f20
// 00843c8a  83c414               add esp, 0x14
// 00843c8d  5e                   pop esi
// 00843c8e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
