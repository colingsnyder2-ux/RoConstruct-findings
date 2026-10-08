// roc 2012-06 00843de0  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00843de0
//
// 00843de0  a1f813de00           mov eax, dword ptr [0xde13f8]
// 00843de5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00843de9  50                   push eax
// 00843dea  6a01                 push 1
// 00843dec  51                   push ecx
// 00843ded  e81efafeff           call 0x833810
// 00843df2  83c40c               add esp, 0xc
// 00843df5  33c0                 xor eax, eax
// 00843df7  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
