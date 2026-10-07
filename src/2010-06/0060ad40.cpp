// roc 2010-06 0060ad40  unit: RBX::ScriptContext  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060ad40
//
// 0060ad40  a1582abe00           mov eax, dword ptr [0xbe2a58]
// 0060ad45  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060ad49  8b542404             mov edx, dword ptr [esp + 4]
// 0060ad4d  50                   push eax
// 0060ad4e  51                   push ecx
// 0060ad4f  52                   push edx
// 0060ad50  e8bb801100           call 0x722e10
// 0060ad55  83c40c               add esp, 0xc
// 0060ad58  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?getObject@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAAAVCoordinateFrame@G3D@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
