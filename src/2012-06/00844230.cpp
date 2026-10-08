// roc 2012-06 00844230  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00844230
//
// 00844230  a1e813de00           mov eax, dword ptr [0xde13e8]
// 00844235  56                   push esi
// 00844236  8b742408             mov esi, dword ptr [esp + 8]
// 0084423a  50                   push eax
// 0084423b  6a01                 push 1
// 0084423d  56                   push esi
// 0084423e  e8cdf5feff           call 0x833810
// 00844243  56                   push esi
// 00844244  50                   push eax
// 00844245  e8a6f6ffff           call 0x8438f0
// 0084424a  83c414               add esp, 0x14
// 0084424d  5e                   pop esi
// 0084424e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
