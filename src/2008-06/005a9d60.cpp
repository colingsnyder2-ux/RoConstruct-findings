// roc 2008-06 005a9d60  unit: RBX::VScriptContext::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9d60
//
// 005a9d60  a1e4b19500           mov eax, dword ptr [0x95b1e4]
// 005a9d65  56                   push esi
// 005a9d66  8b742408             mov esi, dword ptr [esp + 8]
// 005a9d6a  50                   push eax
// 005a9d6b  6a01                 push 1
// 005a9d6d  56                   push esi
// 005a9d6e  e83d780600           call 0x6115b0
// 005a9d73  56                   push esi
// 005a9d74  50                   push eax
// 005a9d75  e8f6f1ffff           call 0x5a8f70
// 005a9d7a  83c414               add esp, 0x14
// 005a9d7d  5e                   pop esi
// 005a9d7e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
