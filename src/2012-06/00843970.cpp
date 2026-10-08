// roc 2012-06 00843970  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00843970
//
// 00843970  a1fc13de00           mov eax, dword ptr [0xde13fc]
// 00843975  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00843979  50                   push eax
// 0084397a  6a01                 push 1
// 0084397c  51                   push ecx
// 0084397d  e88efefeff           call 0x833810
// 00843982  83c40c               add esp, 0xc
// 00843985  33c0                 xor eax, eax
// 00843987  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
