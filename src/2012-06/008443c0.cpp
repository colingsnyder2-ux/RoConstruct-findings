// roc 2012-06 008443c0  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008443c0
//
// 008443c0  a1bc13de00           mov eax, dword ptr [0xde13bc]
// 008443c5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008443c9  50                   push eax
// 008443ca  6a01                 push 1
// 008443cc  51                   push ecx
// 008443cd  e83ef4feff           call 0x833810
// 008443d2  83c40c               add esp, 0xc
// 008443d5  33c0                 xor eax, eax
// 008443d7  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
