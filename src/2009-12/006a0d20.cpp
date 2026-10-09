// roc 2009-12 006a0d20  unit: RBX::VScriptContext::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a0d20
//
// 006a0d20  a14c2bb600           mov eax, dword ptr [0xb62b4c]
// 006a0d25  56                   push esi
// 006a0d26  8b742408             mov esi, dword ptr [esp + 8]
// 006a0d2a  50                   push eax
// 006a0d2b  6a01                 push 1
// 006a0d2d  56                   push esi
// 006a0d2e  e82d990e00           call 0x78a660
// 006a0d33  56                   push esi
// 006a0d34  50                   push eax
// 006a0d35  e8b6e6ffff           call 0x69f3f0
// 006a0d3a  83c414               add esp, 0x14
// 006a0d3d  5e                   pop esi
// 006a0d3e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
