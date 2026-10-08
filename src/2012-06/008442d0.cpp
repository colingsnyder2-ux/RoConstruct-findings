// roc 2012-06 008442d0  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008442d0
//
// 008442d0  a1b813de00           mov eax, dword ptr [0xde13b8]
// 008442d5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008442d9  50                   push eax
// 008442da  6a01                 push 1
// 008442dc  51                   push ecx
// 008442dd  e82ef5feff           call 0x833810
// 008442e2  83c40c               add esp, 0xc
// 008442e5  33c0                 xor eax, eax
// 008442e7  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
