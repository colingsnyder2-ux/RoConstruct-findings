// roc 2012-06 006a2600  unit: std::D::DU?$char_traits::?$basic_istringstream  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a2600
//
// 006a2600  a1d013de00           mov eax, dword ptr [0xde13d0]
// 006a2605  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a2609  8b542404             mov edx, dword ptr [esp + 4]
// 006a260d  50                   push eax
// 006a260e  51                   push ecx
// 006a260f  52                   push edx
// 006a2610  e8fb111900           call 0x833810
// 006a2615  83c40c               add esp, 0xc
// 006a2618  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?getObject@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAAAVCoordinateFrame@G3D@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
