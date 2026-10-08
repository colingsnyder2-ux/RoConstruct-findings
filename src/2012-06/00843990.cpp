// roc 2012-06 00843990  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00843990
//
// 00843990  a1fc13de00           mov eax, dword ptr [0xde13fc]
// 00843995  56                   push esi
// 00843996  8b742408             mov esi, dword ptr [esp + 8]
// 0084399a  50                   push eax
// 0084399b  6a01                 push 1
// 0084399d  56                   push esi
// 0084399e  e86dfefeff           call 0x833810
// 008439a3  56                   push esi
// 008439a4  50                   push eax
// 008439a5  e8e6dbffff           call 0x841590
// 008439aa  83c414               add esp, 0x14
// 008439ad  5e                   pop esi
// 008439ae  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
