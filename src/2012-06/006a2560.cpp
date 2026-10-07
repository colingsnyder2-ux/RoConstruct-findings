// roc 2012-06 006a2560  unit: std::D::DU?$char_traits::?$basic_istringstream  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a2560
//
// 006a2560  a1b013de00           mov eax, dword ptr [0xde13b0]
// 006a2565  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a2569  8b542404             mov edx, dword ptr [esp + 4]
// 006a256d  50                   push eax
// 006a256e  51                   push ecx
// 006a256f  52                   push edx
// 006a2570  e89b121900           call 0x833810
// 006a2575  83c40c               add esp, 0xc
// 006a2578  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?getObject@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAAAVCoordinateFrame@G3D@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
