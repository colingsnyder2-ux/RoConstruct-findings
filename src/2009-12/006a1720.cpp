// roc 2009-12 006a1720  unit: RBX::VScriptContext::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a1720
//
// 006a1720  a1cc24b600           mov eax, dword ptr [0xb624cc]
// 006a1725  56                   push esi
// 006a1726  8b742408             mov esi, dword ptr [esp + 8]
// 006a172a  50                   push eax
// 006a172b  6a01                 push 1
// 006a172d  56                   push esi
// 006a172e  e82d8f0e00           call 0x78a660
// 006a1733  56                   push esi
// 006a1734  50                   push eax
// 006a1735  e8f6ebffff           call 0x6a0330
// 006a173a  83c414               add esp, 0x14
// 006a173d  5e                   pop esi
// 006a173e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
