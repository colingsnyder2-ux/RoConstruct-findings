// roc 2011-06 00618350  unit: RBX::ScriptContext  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00618350
//
// 00618350  a1ecefc800           mov eax, dword ptr [0xc8efec]
// 00618355  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00618359  8b542404             mov edx, dword ptr [esp + 4]
// 0061835d  50                   push eax
// 0061835e  51                   push ecx
// 0061835f  52                   push edx
// 00618360  e81bbd1400           call 0x764080
// 00618365  83c40c               add esp, 0xc
// 00618368  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?getObject@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAAAVCoordinateFrame@G3D@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
