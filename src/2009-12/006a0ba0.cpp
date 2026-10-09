// roc 2009-12 006a0ba0  unit: RBX::VScriptContext::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a0ba0
//
// 006a0ba0  a1442bb600           mov eax, dword ptr [0xb62b44]
// 006a0ba5  56                   push esi
// 006a0ba6  8b742408             mov esi, dword ptr [esp + 8]
// 006a0baa  50                   push eax
// 006a0bab  6a01                 push 1
// 006a0bad  56                   push esi
// 006a0bae  e8ad9a0e00           call 0x78a660
// 006a0bb3  56                   push esi
// 006a0bb4  50                   push eax
// 006a0bb5  e896e6ffff           call 0x69f250
// 006a0bba  83c414               add esp, 0x14
// 006a0bbd  5e                   pop esi
// 006a0bbe  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
