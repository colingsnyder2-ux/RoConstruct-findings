// roc 2012-06 0083ac20  unit: seg_00830000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0083ac20
//
// 0083ac20  a1d413de00           mov eax, dword ptr [0xde13d4]
// 0083ac25  56                   push esi
// 0083ac26  8b742408             mov esi, dword ptr [esp + 8]
// 0083ac2a  50                   push eax
// 0083ac2b  6a01                 push 1
// 0083ac2d  56                   push esi
// 0083ac2e  e8dd8bffff           call 0x833810
// 0083ac33  56                   push esi
// 0083ac34  50                   push eax
// 0083ac35  e8368b0000           call 0x843770
// 0083ac3a  83c414               add esp, 0x14
// 0083ac3d  5e                   pop esi
// 0083ac3e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
