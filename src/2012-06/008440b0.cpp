// roc 2012-06 008440b0  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008440b0
//
// 008440b0  a1d013de00           mov eax, dword ptr [0xde13d0]
// 008440b5  56                   push esi
// 008440b6  8b742408             mov esi, dword ptr [esp + 8]
// 008440ba  50                   push eax
// 008440bb  6a01                 push 1
// 008440bd  56                   push esi
// 008440be  e84df7feff           call 0x833810
// 008440c3  56                   push esi
// 008440c4  50                   push eax
// 008440c5  e826f6ffff           call 0x8436f0
// 008440ca  83c414               add esp, 0x14
// 008440cd  5e                   pop esi
// 008440ce  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
