// roc 2012-06 006a25c0  unit: std::D::DU?$char_traits::?$basic_istringstream  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a25c0
//
// 006a25c0  a1e013de00           mov eax, dword ptr [0xde13e0]
// 006a25c5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a25c9  8b542404             mov edx, dword ptr [esp + 4]
// 006a25cd  50                   push eax
// 006a25ce  51                   push ecx
// 006a25cf  52                   push edx
// 006a25d0  e83b121900           call 0x833810
// 006a25d5  83c40c               add esp, 0xc
// 006a25d8  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?getObject@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAAAVCoordinateFrame@G3D@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
