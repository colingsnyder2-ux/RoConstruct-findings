// roc 2012-06 00843d80  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00843d80
//
// 00843d80  a1f413de00           mov eax, dword ptr [0xde13f4]
// 00843d85  56                   push esi
// 00843d86  8b742408             mov esi, dword ptr [esp + 8]
// 00843d8a  50                   push eax
// 00843d8b  6a01                 push 1
// 00843d8d  56                   push esi
// 00843d8e  e87dfafeff           call 0x833810
// 00843d93  56                   push esi
// 00843d94  50                   push eax
// 00843d95  e896d7ffff           call 0x841530
// 00843d9a  83c414               add esp, 0x14
// 00843d9d  5e                   pop esi
// 00843d9e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
