// roc 2009-12 006a1270  unit: RBX::VScriptContext::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a1270
//
// 006a1270  a1642bb600           mov eax, dword ptr [0xb62b64]
// 006a1275  56                   push esi
// 006a1276  8b742408             mov esi, dword ptr [esp + 8]
// 006a127a  50                   push eax
// 006a127b  6a01                 push 1
// 006a127d  56                   push esi
// 006a127e  e8dd930e00           call 0x78a660
// 006a1283  56                   push esi
// 006a1284  50                   push eax
// 006a1285  e846e6ffff           call 0x69f8d0
// 006a128a  83c414               add esp, 0x14
// 006a128d  5e                   pop esi
// 006a128e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
