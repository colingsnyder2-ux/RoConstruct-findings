// roc 2011-06 006182d0  unit: RBX::ScriptContext  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006182d0
//
// 006182d0  a1c0efc800           mov eax, dword ptr [0xc8efc0]
// 006182d5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006182d9  8b542404             mov edx, dword ptr [esp + 4]
// 006182dd  50                   push eax
// 006182de  51                   push ecx
// 006182df  52                   push edx
// 006182e0  e89bbd1400           call 0x764080
// 006182e5  83c40c               add esp, 0xc
// 006182e8  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?getObject@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAAAVCoordinateFrame@G3D@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
