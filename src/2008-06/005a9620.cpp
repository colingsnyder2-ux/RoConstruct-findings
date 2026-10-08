// roc 2008-06 005a9620  unit: RBX::VScriptContext::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9620
//
// 005a9620  a1c0b19500           mov eax, dword ptr [0x95b1c0]
// 005a9625  56                   push esi
// 005a9626  8b742408             mov esi, dword ptr [esp + 8]
// 005a962a  50                   push eax
// 005a962b  6a01                 push 1
// 005a962d  56                   push esi
// 005a962e  e87d7f0600           call 0x6115b0
// 005a9633  56                   push esi
// 005a9634  50                   push eax
// 005a9635  e8b6f2ffff           call 0x5a88f0
// 005a963a  83c414               add esp, 0x14
// 005a963d  5e                   pop esi
// 005a963e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
