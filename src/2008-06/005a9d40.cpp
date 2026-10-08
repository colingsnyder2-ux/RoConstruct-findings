// roc 2008-06 005a9d40  unit: RBX::VScriptContext::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9d40
//
// 005a9d40  a174af9500           mov eax, dword ptr [0x95af74]
// 005a9d45  56                   push esi
// 005a9d46  8b742408             mov esi, dword ptr [esp + 8]
// 005a9d4a  50                   push eax
// 005a9d4b  6a01                 push 1
// 005a9d4d  56                   push esi
// 005a9d4e  e85d780600           call 0x6115b0
// 005a9d53  56                   push esi
// 005a9d54  50                   push eax
// 005a9d55  e866f1ffff           call 0x5a8ec0
// 005a9d5a  83c414               add esp, 0x14
// 005a9d5d  5e                   pop esi
// 005a9d5e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
