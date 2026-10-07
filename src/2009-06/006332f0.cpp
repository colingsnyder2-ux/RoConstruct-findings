// roc 2009-06 006332f0  unit: std::strstream  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006332f0
//
// 006332f0  a1f02aa200           mov eax, dword ptr [0xa22af0]
// 006332f5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006332f9  8b542404             mov edx, dword ptr [esp + 4]
// 006332fd  50                   push eax
// 006332fe  51                   push ecx
// 006332ff  52                   push edx
// 00633300  e8ab780800           call 0x6babb0
// 00633305  83c40c               add esp, 0xc
// 00633308  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?getObject@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAAAVCoordinateFrame@G3D@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
