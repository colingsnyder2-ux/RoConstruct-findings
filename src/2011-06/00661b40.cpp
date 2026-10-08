// roc 2011-06 00661b40  unit: RBX::VExplosion::?$EventDesc  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00661b40
//
// 00661b40  a1c8efc800           mov eax, dword ptr [0xc8efc8]
// 00661b45  56                   push esi
// 00661b46  8b742408             mov esi, dword ptr [esp + 8]
// 00661b4a  50                   push eax
// 00661b4b  6a01                 push 1
// 00661b4d  56                   push esi
// 00661b4e  e82d251000           call 0x764080
// 00661b53  56                   push esi
// 00661b54  50                   push eax
// 00661b55  e8b6faffff           call 0x661610
// 00661b5a  83c414               add esp, 0x14
// 00661b5d  5e                   pop esi
// 00661b5e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
