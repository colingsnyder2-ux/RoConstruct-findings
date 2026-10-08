// roc 2007-03 00536810  unit: seg_00530000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00536810
//
// 00536810  a148828a00           mov eax, dword ptr [0x8a8248]
// 00536815  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00536819  8b542404             mov edx, dword ptr [esp + 4]
// 0053681d  50                   push eax
// 0053681e  51                   push ecx
// 0053681f  52                   push edx
// 00536820  e88b3c0800           call 0x5ba4b0
// 00536825  83c40c               add esp, 0xc
// 00536828  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?getObject@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAAAVCoordinateFrame@G3D@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
