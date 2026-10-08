// roc 2007-03 00537830  unit: seg_00530000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00537830
//
// 00537830  a144828a00           mov eax, dword ptr [0x8a8244]
// 00537835  56                   push esi
// 00537836  8b742408             mov esi, dword ptr [esp + 8]
// 0053783a  50                   push eax
// 0053783b  6a01                 push 1
// 0053783d  56                   push esi
// 0053783e  e86d2c0800           call 0x5ba4b0
// 00537843  56                   push esi
// 00537844  50                   push eax
// 00537845  e8c6f1ffff           call 0x536a10
// 0053784a  83c414               add esp, 0x14
// 0053784d  5e                   pop esi
// 0053784e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
