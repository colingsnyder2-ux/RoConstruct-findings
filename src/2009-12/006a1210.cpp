// roc 2009-12 006a1210  unit: RBX::VScriptContext::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a1210
//
// 006a1210  a1402bb600           mov eax, dword ptr [0xb62b40]
// 006a1215  56                   push esi
// 006a1216  8b742408             mov esi, dword ptr [esp + 8]
// 006a121a  50                   push eax
// 006a121b  6a01                 push 1
// 006a121d  56                   push esi
// 006a121e  e83d940e00           call 0x78a660
// 006a1223  56                   push esi
// 006a1224  50                   push eax
// 006a1225  e826e5ffff           call 0x69f750
// 006a122a  83c414               add esp, 0x14
// 006a122d  5e                   pop esi
// 006a122e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
