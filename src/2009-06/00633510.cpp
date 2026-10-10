// from server: 100% by tester
// roc 2007-03 00536770  unit: seg_00530000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00536770
//
// 00536770  a150828a00           mov eax, dword ptr [0x8a8250]
// 00536775  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00536779  8b542404             mov edx, dword ptr [esp + 4]
// 0053677d  50                   push eax
// 0053677e  51                   push ecx
// 0053677f  52                   push edx
// 00536780  e82b3d0800           call 0x5ba4b0
// 00536785  83c40c               add esp, 0xc
// 00536788  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?getObject@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAAAVCoordinateFrame@G3D@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
