// roc 2012-06 00843ef0  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00843ef0
//
// 00843ef0  a1b013de00           mov eax, dword ptr [0xde13b0]
// 00843ef5  56                   push esi
// 00843ef6  8b742408             mov esi, dword ptr [esp + 8]
// 00843efa  50                   push eax
// 00843efb  6a01                 push 1
// 00843efd  56                   push esi
// 00843efe  e80df9feff           call 0x833810
// 00843f03  56                   push esi
// 00843f04  50                   push eax
// 00843f05  e8e6f4ffff           call 0x8433f0
// 00843f0a  83c414               add esp, 0x14
// 00843f0d  5e                   pop esi
// 00843f0e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
