// roc 2009-12 006a1230  unit: RBX::VScriptContext::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a1230
//
// 006a1230  a13c2bb600           mov eax, dword ptr [0xb62b3c]
// 006a1235  56                   push esi
// 006a1236  8b742408             mov esi, dword ptr [esp + 8]
// 006a123a  50                   push eax
// 006a123b  6a01                 push 1
// 006a123d  56                   push esi
// 006a123e  e81d940e00           call 0x78a660
// 006a1243  56                   push esi
// 006a1244  50                   push eax
// 006a1245  e886e5ffff           call 0x69f7d0
// 006a124a  83c414               add esp, 0x14
// 006a124d  5e                   pop esi
// 006a124e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
