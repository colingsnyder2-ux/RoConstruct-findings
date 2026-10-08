// roc 2007-03 00536a90  unit: seg_00530000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00536a90
//
// 00536a90  a14c828a00           mov eax, dword ptr [0x8a824c]
// 00536a95  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00536a99  8b542404             mov edx, dword ptr [esp + 4]
// 00536a9d  50                   push eax
// 00536a9e  51                   push ecx
// 00536a9f  52                   push edx
// 00536aa0  e80b3a0800           call 0x5ba4b0
// 00536aa5  83c40c               add esp, 0xc
// 00536aa8  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?getObject@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAAAVCoordinateFrame@G3D@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
