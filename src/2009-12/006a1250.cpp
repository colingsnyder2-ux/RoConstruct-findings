// roc 2009-12 006a1250  unit: RBX::VScriptContext::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a1250
//
// 006a1250  a1602bb600           mov eax, dword ptr [0xb62b60]
// 006a1255  56                   push esi
// 006a1256  8b742408             mov esi, dword ptr [esp + 8]
// 006a125a  50                   push eax
// 006a125b  6a01                 push 1
// 006a125d  56                   push esi
// 006a125e  e8fd930e00           call 0x78a660
// 006a1263  56                   push esi
// 006a1264  50                   push eax
// 006a1265  e8e6e5ffff           call 0x69f850
// 006a126a  83c414               add esp, 0x14
// 006a126d  5e                   pop esi
// 006a126e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
