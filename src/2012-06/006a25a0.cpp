// roc 2012-06 006a25a0  unit: std::D::DU?$char_traits::?$basic_istringstream  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a25a0
//
// 006a25a0  a1dc13de00           mov eax, dword ptr [0xde13dc]
// 006a25a5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a25a9  8b542404             mov edx, dword ptr [esp + 4]
// 006a25ad  50                   push eax
// 006a25ae  51                   push ecx
// 006a25af  52                   push edx
// 006a25b0  e85b121900           call 0x833810
// 006a25b5  83c40c               add esp, 0xc
// 006a25b8  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?getObject@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAAAVCoordinateFrame@G3D@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
