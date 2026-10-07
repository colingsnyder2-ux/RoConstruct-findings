// roc 2012-06 006a2580  unit: std::D::DU?$char_traits::?$basic_istringstream  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a2580
//
// 006a2580  a1d813de00           mov eax, dword ptr [0xde13d8]
// 006a2585  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a2589  8b542404             mov edx, dword ptr [esp + 4]
// 006a258d  50                   push eax
// 006a258e  51                   push ecx
// 006a258f  52                   push edx
// 006a2590  e87b121900           call 0x833810
// 006a2595  83c40c               add esp, 0xc
// 006a2598  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?getObject@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAAAVCoordinateFrame@G3D@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
