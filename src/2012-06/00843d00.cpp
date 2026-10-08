// roc 2012-06 00843d00  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00843d00
//
// 00843d00  a1589eda00           mov eax, dword ptr [0xda9e58]
// 00843d05  56                   push esi
// 00843d06  8b742408             mov esi, dword ptr [esp + 8]
// 00843d0a  50                   push eax
// 00843d0b  6a01                 push 1
// 00843d0d  56                   push esi
// 00843d0e  e8fdfafeff           call 0x833810
// 00843d13  56                   push esi
// 00843d14  50                   push eax
// 00843d15  e846e20000           call 0x851f60
// 00843d1a  83c414               add esp, 0x14
// 00843d1d  5e                   pop esi
// 00843d1e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
