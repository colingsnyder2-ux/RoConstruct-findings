// roc 2008-06 005a9de0  unit: RBX::VScriptContext::?$FactoryProduct  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9de0
//
// 005a9de0  a1d4b19500           mov eax, dword ptr [0x95b1d4]
// 005a9de5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a9de9  50                   push eax
// 005a9dea  6a01                 push 1
// 005a9dec  51                   push ecx
// 005a9ded  e8be770600           call 0x6115b0
// 005a9df2  83c40c               add esp, 0xc
// 005a9df5  33c0                 xor eax, eax
// 005a9df7  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
