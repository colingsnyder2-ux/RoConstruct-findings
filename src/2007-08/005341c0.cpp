// roc 2007-08 005341c0  unit: RBX::ScriptContext  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005341c0
//
// 005341c0  a180be8a00           mov eax, dword ptr [0x8abe80]
// 005341c5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005341c9  8b542404             mov edx, dword ptr [esp + 4]
// 005341cd  50                   push eax
// 005341ce  51                   push ecx
// 005341cf  52                   push edx
// 005341d0  e86bb00800           call 0x5bf240
// 005341d5  83c40c               add esp, 0xc
// 005341d8  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?getObject@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAAAVCoordinateFrame@G3D@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
