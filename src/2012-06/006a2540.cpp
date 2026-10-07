// roc 2012-06 006a2540  unit: std::D::DU?$char_traits::?$basic_istringstream  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a2540
//
// 006a2540  a1cc13de00           mov eax, dword ptr [0xde13cc]
// 006a2545  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a2549  8b542404             mov edx, dword ptr [esp + 4]
// 006a254d  50                   push eax
// 006a254e  51                   push ecx
// 006a254f  52                   push edx
// 006a2550  e8bb121900           call 0x833810
// 006a2555  83c40c               add esp, 0xc
// 006a2558  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?getObject@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAAAVCoordinateFrame@G3D@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
