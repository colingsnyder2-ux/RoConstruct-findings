// roc 2008-06 005a99d0  unit: RBX::VScriptContext::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a99d0
//
// 005a99d0  a1c4b19500           mov eax, dword ptr [0x95b1c4]
// 005a99d5  56                   push esi
// 005a99d6  8b742408             mov esi, dword ptr [esp + 8]
// 005a99da  50                   push eax
// 005a99db  6a01                 push 1
// 005a99dd  56                   push esi
// 005a99de  e8cd7b0600           call 0x6115b0
// 005a99e3  56                   push esi
// 005a99e4  50                   push eax
// 005a99e5  e806f1ffff           call 0x5a8af0
// 005a99ea  83c414               add esp, 0x14
// 005a99ed  5e                   pop esi
// 005a99ee  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
