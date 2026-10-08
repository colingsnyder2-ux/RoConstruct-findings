// roc 2007-03 00537940  unit: seg_00530000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00537940
//
// 00537940  a14c828a00           mov eax, dword ptr [0x8a824c]
// 00537945  56                   push esi
// 00537946  8b742408             mov esi, dword ptr [esp + 8]
// 0053794a  50                   push eax
// 0053794b  6a01                 push 1
// 0053794d  56                   push esi
// 0053794e  e85d2b0800           call 0x5ba4b0
// 00537953  56                   push esi
// 00537954  50                   push eax
// 00537955  e856f1ffff           call 0x536ab0
// 0053795a  83c414               add esp, 0x14
// 0053795d  5e                   pop esi
// 0053795e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
