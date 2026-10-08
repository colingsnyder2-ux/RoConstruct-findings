// roc 2012-06 00843d40  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00843d40
//
// 00843d40  a10414de00           mov eax, dword ptr [0xde1404]
// 00843d45  56                   push esi
// 00843d46  8b742408             mov esi, dword ptr [esp + 8]
// 00843d4a  50                   push eax
// 00843d4b  6a01                 push 1
// 00843d4d  56                   push esi
// 00843d4e  e8bdfafeff           call 0x833810
// 00843d53  56                   push esi
// 00843d54  50                   push eax
// 00843d55  e866dbffff           call 0x8418c0
// 00843d5a  83c414               add esp, 0x14
// 00843d5d  5e                   pop esi
// 00843d5e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
