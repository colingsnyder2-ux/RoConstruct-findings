// roc 2010-06 0060af60  unit: RBX::ScriptContext  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060af60
//
// 0060af60  a1702abe00           mov eax, dword ptr [0xbe2a70]
// 0060af65  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060af69  8b542404             mov edx, dword ptr [esp + 4]
// 0060af6d  50                   push eax
// 0060af6e  51                   push ecx
// 0060af6f  52                   push edx
// 0060af70  e89b7e1100           call 0x722e10
// 0060af75  83c40c               add esp, 0xc
// 0060af78  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?getObject@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAAAVCoordinateFrame@G3D@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
