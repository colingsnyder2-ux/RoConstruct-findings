// roc 2009-06 00633250  unit: std::strstream  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00633250
//
// 00633250  a1fc2aa200           mov eax, dword ptr [0xa22afc]
// 00633255  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00633259  8b542404             mov edx, dword ptr [esp + 4]
// 0063325d  50                   push eax
// 0063325e  51                   push ecx
// 0063325f  52                   push edx
// 00633260  e84b790800           call 0x6babb0
// 00633265  83c40c               add esp, 0xc
// 00633268  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?getObject@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAAAVCoordinateFrame@G3D@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
