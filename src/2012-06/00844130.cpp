// roc 2012-06 00844130  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00844130
//
// 00844130  a1e013de00           mov eax, dword ptr [0xde13e0]
// 00844135  56                   push esi
// 00844136  8b742408             mov esi, dword ptr [esp + 8]
// 0084413a  50                   push eax
// 0084413b  6a01                 push 1
// 0084413d  56                   push esi
// 0084413e  e8cdf6feff           call 0x833810
// 00844143  56                   push esi
// 00844144  50                   push eax
// 00844145  e8a6f6ffff           call 0x8437f0
// 0084414a  83c414               add esp, 0x14
// 0084414d  5e                   pop esi
// 0084414e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
