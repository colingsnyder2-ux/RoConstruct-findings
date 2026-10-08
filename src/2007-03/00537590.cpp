// roc 2007-03 00537590  unit: seg_00530000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00537590
//
// 00537590  a148828a00           mov eax, dword ptr [0x8a8248]
// 00537595  56                   push esi
// 00537596  8b742408             mov esi, dword ptr [esp + 8]
// 0053759a  50                   push eax
// 0053759b  6a01                 push 1
// 0053759d  56                   push esi
// 0053759e  e80d2f0800           call 0x5ba4b0
// 005375a3  56                   push esi
// 005375a4  50                   push eax
// 005375a5  e886f2ffff           call 0x536830
// 005375aa  83c414               add esp, 0x14
// 005375ad  5e                   pop esi
// 005375ae  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
