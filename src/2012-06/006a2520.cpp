// roc 2012-06 006a2520  unit: std::D::DU?$char_traits::?$basic_istringstream  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a2520
//
// 006a2520  a1b413de00           mov eax, dword ptr [0xde13b4]
// 006a2525  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a2529  8b542404             mov edx, dword ptr [esp + 4]
// 006a252d  50                   push eax
// 006a252e  51                   push ecx
// 006a252f  52                   push edx
// 006a2530  e8db121900           call 0x833810
// 006a2535  83c40c               add esp, 0xc
// 006a2538  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?getObject@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAAAVCoordinateFrame@G3D@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
