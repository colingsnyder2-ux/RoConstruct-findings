// roc 2008-06 005a99b0  unit: RBX::VScriptContext::?$FactoryProduct  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a99b0
//
// 005a99b0  a1c4b19500           mov eax, dword ptr [0x95b1c4]
// 005a99b5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a99b9  50                   push eax
// 005a99ba  6a01                 push 1
// 005a99bc  51                   push ecx
// 005a99bd  e8ee7b0600           call 0x6115b0
// 005a99c2  83c40c               add esp, 0xc
// 005a99c5  33c0                 xor eax, eax
// 005a99c7  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
