// roc 2007-08 00535120  unit: std::logic_error  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00535120
//
// 00535120  a180be8a00           mov eax, dword ptr [0x8abe80]
// 00535125  56                   push esi
// 00535126  8b742408             mov esi, dword ptr [esp + 8]
// 0053512a  50                   push eax
// 0053512b  6a01                 push 1
// 0053512d  56                   push esi
// 0053512e  e80da10800           call 0x5bf240
// 00535133  56                   push esi
// 00535134  50                   push eax
// 00535135  e8a6f0ffff           call 0x5341e0
// 0053513a  83c414               add esp, 0x14
// 0053513d  5e                   pop esi
// 0053513e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
