// roc 2009-06 00633470  unit: std::strstream  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00633470
//
// 00633470  a1ec2aa200           mov eax, dword ptr [0xa22aec]
// 00633475  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00633479  8b542404             mov edx, dword ptr [esp + 4]
// 0063347d  50                   push eax
// 0063347e  51                   push ecx
// 0063347f  52                   push edx
// 00633480  e82b770800           call 0x6babb0
// 00633485  83c40c               add esp, 0xc
// 00633488  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?getObject@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAAAVCoordinateFrame@G3D@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
