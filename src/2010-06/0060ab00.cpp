// roc 2010-06 0060ab00  unit: RBX::ScriptContext  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060ab00
//
// 0060ab00  a1602abe00           mov eax, dword ptr [0xbe2a60]
// 0060ab05  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060ab09  8b542404             mov edx, dword ptr [esp + 4]
// 0060ab0d  50                   push eax
// 0060ab0e  51                   push ecx
// 0060ab0f  52                   push edx
// 0060ab10  e8fb821100           call 0x722e10
// 0060ab15  83c40c               add esp, 0xc
// 0060ab18  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?getObject@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAAAVCoordinateFrame@G3D@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
