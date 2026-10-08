// roc 2008-06 005a98c0  unit: RBX::VScriptContext::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a98c0
//
// 005a98c0  a1bcb19500           mov eax, dword ptr [0x95b1bc]
// 005a98c5  56                   push esi
// 005a98c6  8b742408             mov esi, dword ptr [esp + 8]
// 005a98ca  50                   push eax
// 005a98cb  6a01                 push 1
// 005a98cd  56                   push esi
// 005a98ce  e8dd7c0600           call 0x6115b0
// 005a98d3  56                   push esi
// 005a98d4  50                   push eax
// 005a98d5  e876f1ffff           call 0x5a8a50
// 005a98da  83c414               add esp, 0x14
// 005a98dd  5e                   pop esi
// 005a98de  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
