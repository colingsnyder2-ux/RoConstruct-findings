// roc 2012-06 008439f0  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008439f0
//
// 008439f0  a17c0ede00           mov eax, dword ptr [0xde0e7c]
// 008439f5  56                   push esi
// 008439f6  8b742408             mov esi, dword ptr [esp + 8]
// 008439fa  50                   push eax
// 008439fb  6a01                 push 1
// 008439fd  56                   push esi
// 008439fe  e80dfefeff           call 0x833810
// 00843a03  56                   push esi
// 00843a04  50                   push eax
// 00843a05  e8860affff           call 0x834490
// 00843a0a  83c414               add esp, 0x14
// 00843a0d  5e                   pop esi
// 00843a0e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
