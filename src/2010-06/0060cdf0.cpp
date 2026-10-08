// roc 2010-06 0060cdf0  unit: RBX::VScriptContext::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060cdf0
//
// 0060cdf0  a15c2abe00           mov eax, dword ptr [0xbe2a5c]
// 0060cdf5  56                   push esi
// 0060cdf6  8b742408             mov esi, dword ptr [esp + 8]
// 0060cdfa  50                   push eax
// 0060cdfb  6a01                 push 1
// 0060cdfd  56                   push esi
// 0060cdfe  e80d601100           call 0x722e10
// 0060ce03  56                   push esi
// 0060ce04  50                   push eax
// 0060ce05  e8b6e5ffff           call 0x60b3c0
// 0060ce0a  83c414               add esp, 0x14
// 0060ce0d  5e                   pop esi
// 0060ce0e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
