// roc 2012-06 00843ce0  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00843ce0
//
// 00843ce0  a1549eda00           mov eax, dword ptr [0xda9e54]
// 00843ce5  56                   push esi
// 00843ce6  8b742408             mov esi, dword ptr [esp + 8]
// 00843cea  50                   push eax
// 00843ceb  6a01                 push 1
// 00843ced  56                   push esi
// 00843cee  e81dfbfeff           call 0x833810
// 00843cf3  56                   push esi
// 00843cf4  50                   push eax
// 00843cf5  e846e20000           call 0x851f40
// 00843cfa  83c414               add esp, 0x14
// 00843cfd  5e                   pop esi
// 00843cfe  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
