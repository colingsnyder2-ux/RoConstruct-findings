// roc 2012-06 0083af00  unit: seg_00830000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0083af00
//
// 0083af00  a1c813de00           mov eax, dword ptr [0xde13c8]
// 0083af05  56                   push esi
// 0083af06  8b742408             mov esi, dword ptr [esp + 8]
// 0083af0a  50                   push eax
// 0083af0b  6a01                 push 1
// 0083af0d  56                   push esi
// 0083af0e  e8fd88ffff           call 0x833810
// 0083af13  56                   push esi
// 0083af14  50                   push eax
// 0083af15  e856860000           call 0x843570
// 0083af1a  83c414               add esp, 0x14
// 0083af1d  5e                   pop esi
// 0083af1e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
