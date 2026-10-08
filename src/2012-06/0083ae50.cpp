// roc 2012-06 0083ae50  unit: seg_00830000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0083ae50
//
// 0083ae50  a1cc13de00           mov eax, dword ptr [0xde13cc]
// 0083ae55  56                   push esi
// 0083ae56  8b742408             mov esi, dword ptr [esp + 8]
// 0083ae5a  50                   push eax
// 0083ae5b  6a01                 push 1
// 0083ae5d  56                   push esi
// 0083ae5e  e8ad89ffff           call 0x833810
// 0083ae63  56                   push esi
// 0083ae64  50                   push eax
// 0083ae65  e806880000           call 0x843670
// 0083ae6a  83c414               add esp, 0x14
// 0083ae6d  5e                   pop esi
// 0083ae6e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
