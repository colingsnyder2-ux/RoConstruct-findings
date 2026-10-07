// roc 2010-06 0060aee0  unit: RBX::ScriptContext  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060aee0
//
// 0060aee0  a16c2abe00           mov eax, dword ptr [0xbe2a6c]
// 0060aee5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060aee9  8b542404             mov edx, dword ptr [esp + 4]
// 0060aeed  50                   push eax
// 0060aeee  51                   push ecx
// 0060aeef  52                   push edx
// 0060aef0  e81b7f1100           call 0x722e10
// 0060aef5  83c40c               add esp, 0xc
// 0060aef8  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?getObject@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAAAVCoordinateFrame@G3D@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
