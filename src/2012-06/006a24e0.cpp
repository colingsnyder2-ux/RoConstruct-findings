// roc 2012-06 006a24e0  unit: std::D::DU?$char_traits::?$basic_istringstream  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a24e0
//
// 006a24e0  a1d413de00           mov eax, dword ptr [0xde13d4]
// 006a24e5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a24e9  8b542404             mov edx, dword ptr [esp + 4]
// 006a24ed  50                   push eax
// 006a24ee  51                   push ecx
// 006a24ef  52                   push edx
// 006a24f0  e81b131900           call 0x833810
// 006a24f5  83c40c               add esp, 0xc
// 006a24f8  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?getObject@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAAAVCoordinateFrame@G3D@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
