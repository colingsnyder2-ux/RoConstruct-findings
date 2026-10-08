// roc 2012-06 008442f0  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008442f0
//
// 008442f0  a1b813de00           mov eax, dword ptr [0xde13b8]
// 008442f5  56                   push esi
// 008442f6  8b742408             mov esi, dword ptr [esp + 8]
// 008442fa  50                   push eax
// 008442fb  6a01                 push 1
// 008442fd  56                   push esi
// 008442fe  e80df5feff           call 0x833810
// 00844303  56                   push esi
// 00844304  50                   push eax
// 00844305  e886f7ffff           call 0x843a90
// 0084430a  83c414               add esp, 0x14
// 0084430d  5e                   pop esi
// 0084430e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
