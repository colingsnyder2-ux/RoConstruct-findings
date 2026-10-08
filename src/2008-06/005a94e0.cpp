// roc 2008-06 005a94e0  unit: RBX::VScriptContext::?$FactoryProduct  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a94e0
//
// 005a94e0  a1c8b19500           mov eax, dword ptr [0x95b1c8]
// 005a94e5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a94e9  50                   push eax
// 005a94ea  6a01                 push 1
// 005a94ec  51                   push ecx
// 005a94ed  e8be800600           call 0x6115b0
// 005a94f2  83c40c               add esp, 0xc
// 005a94f5  33c0                 xor eax, eax
// 005a94f7  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
