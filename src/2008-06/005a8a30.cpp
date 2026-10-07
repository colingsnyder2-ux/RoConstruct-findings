// roc 2008-06 005a8a30  unit: RBX::ScriptContext  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a8a30
//
// 005a8a30  a1bcb19500           mov eax, dword ptr [0x95b1bc]
// 005a8a35  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a8a39  8b542404             mov edx, dword ptr [esp + 4]
// 005a8a3d  50                   push eax
// 005a8a3e  51                   push ecx
// 005a8a3f  52                   push edx
// 005a8a40  e86b8b0600           call 0x6115b0
// 005a8a45  83c40c               add esp, 0xc
// 005a8a48  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?getObject@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAAAVCoordinateFrame@G3D@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
