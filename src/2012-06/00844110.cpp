// roc 2012-06 00844110  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00844110
//
// 00844110  a1e013de00           mov eax, dword ptr [0xde13e0]
// 00844115  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00844119  50                   push eax
// 0084411a  6a01                 push 1
// 0084411c  51                   push ecx
// 0084411d  e8eef6feff           call 0x833810
// 00844122  83c40c               add esp, 0xc
// 00844125  33c0                 xor eax, eax
// 00844127  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
