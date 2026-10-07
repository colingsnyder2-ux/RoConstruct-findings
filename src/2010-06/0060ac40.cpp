// roc 2010-06 0060ac40  unit: RBX::ScriptContext  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060ac40
//
// 0060ac40  a14c2abe00           mov eax, dword ptr [0xbe2a4c]
// 0060ac45  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060ac49  8b542404             mov edx, dword ptr [esp + 4]
// 0060ac4d  50                   push eax
// 0060ac4e  51                   push ecx
// 0060ac4f  52                   push edx
// 0060ac50  e8bb811100           call 0x722e10
// 0060ac55  83c40c               add esp, 0xc
// 0060ac58  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?getObject@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAAAVCoordinateFrame@G3D@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
