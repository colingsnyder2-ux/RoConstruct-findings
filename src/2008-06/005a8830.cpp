// roc 2008-06 005a8830  unit: RBX::ScriptContext  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a8830
//
// 005a8830  a1c8b19500           mov eax, dword ptr [0x95b1c8]
// 005a8835  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a8839  8b542404             mov edx, dword ptr [esp + 4]
// 005a883d  50                   push eax
// 005a883e  51                   push ecx
// 005a883f  52                   push edx
// 005a8840  e86b8d0600           call 0x6115b0
// 005a8845  83c40c               add esp, 0xc
// 005a8848  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?getObject@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAAAVCoordinateFrame@G3D@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
