// roc 2009-12 006a1290  unit: RBX::VScriptContext::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a1290
//
// 006a1290  a1502bb600           mov eax, dword ptr [0xb62b50]
// 006a1295  56                   push esi
// 006a1296  8b742408             mov esi, dword ptr [esp + 8]
// 006a129a  50                   push eax
// 006a129b  6a01                 push 1
// 006a129d  56                   push esi
// 006a129e  e8bd930e00           call 0x78a660
// 006a12a3  56                   push esi
// 006a12a4  50                   push eax
// 006a12a5  e8a6e6ffff           call 0x69f950
// 006a12aa  83c414               add esp, 0x14
// 006a12ad  5e                   pop esi
// 006a12ae  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
