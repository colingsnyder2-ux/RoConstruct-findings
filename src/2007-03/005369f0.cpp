// roc 2007-03 005369f0  unit: seg_00530000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005369f0
//
// 005369f0  a144828a00           mov eax, dword ptr [0x8a8244]
// 005369f5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005369f9  8b542404             mov edx, dword ptr [esp + 4]
// 005369fd  50                   push eax
// 005369fe  51                   push ecx
// 005369ff  52                   push edx
// 00536a00  e8ab3a0800           call 0x5ba4b0
// 00536a05  83c40c               add esp, 0xc
// 00536a08  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?getObject@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAAAVCoordinateFrame@G3D@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
