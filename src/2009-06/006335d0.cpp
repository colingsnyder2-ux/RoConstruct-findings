// roc 2009-06 006335d0  unit: std::strstream  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006335d0
//
// 006335d0  a1102ba200           mov eax, dword ptr [0xa22b10]
// 006335d5  56                   push esi
// 006335d6  8b742408             mov esi, dword ptr [esp + 8]
// 006335da  50                   push eax
// 006335db  6a01                 push 1
// 006335dd  56                   push esi
// 006335de  e8cd750800           call 0x6babb0
// 006335e3  56                   push esi
// 006335e4  50                   push eax
// 006335e5  e846faffff           call 0x633030
// 006335ea  83c414               add esp, 0x14
// 006335ed  5e                   pop esi
// 006335ee  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
