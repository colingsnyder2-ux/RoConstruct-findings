// roc 2009-06 00633510  unit: std::strstream  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00633510
//
// 00633510  a1f82aa200           mov eax, dword ptr [0xa22af8]
// 00633515  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00633519  8b542404             mov edx, dword ptr [esp + 4]
// 0063351d  50                   push eax
// 0063351e  51                   push ecx
// 0063351f  52                   push edx
// 00633520  e88b760800           call 0x6babb0
// 00633525  83c40c               add esp, 0xc
// 00633528  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?getObject@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAAAVCoordinateFrame@G3D@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
