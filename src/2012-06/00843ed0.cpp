// roc 2012-06 00843ed0  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00843ed0
//
// 00843ed0  a1b013de00           mov eax, dword ptr [0xde13b0]
// 00843ed5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00843ed9  50                   push eax
// 00843eda  6a01                 push 1
// 00843edc  51                   push ecx
// 00843edd  e82ef9feff           call 0x833810
// 00843ee2  83c40c               add esp, 0xc
// 00843ee5  33c0                 xor eax, eax
// 00843ee7  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
