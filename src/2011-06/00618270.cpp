// roc 2011-06 00618270  unit: RBX::ScriptContext  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00618270
//
// 00618270  a1ccefc800           mov eax, dword ptr [0xc8efcc]
// 00618275  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00618279  8b542404             mov edx, dword ptr [esp + 4]
// 0061827d  50                   push eax
// 0061827e  51                   push ecx
// 0061827f  52                   push edx
// 00618280  e8fbbd1400           call 0x764080
// 00618285  83c40c               add esp, 0xc
// 00618288  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?getObject@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAAAVCoordinateFrame@G3D@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
