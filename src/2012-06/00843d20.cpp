// roc 2012-06 00843d20  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00843d20
//
// 00843d20  a15c9eda00           mov eax, dword ptr [0xda9e5c]
// 00843d25  56                   push esi
// 00843d26  8b742408             mov esi, dword ptr [esp + 8]
// 00843d2a  50                   push eax
// 00843d2b  6a01                 push 1
// 00843d2d  56                   push esi
// 00843d2e  e8ddfafeff           call 0x833810
// 00843d33  56                   push esi
// 00843d34  50                   push eax
// 00843d35  e846e20000           call 0x851f80
// 00843d3a  83c414               add esp, 0x14
// 00843d3d  5e                   pop esi
// 00843d3e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
