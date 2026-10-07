// roc 2010-06 0060afe0  unit: RBX::ScriptContext  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060afe0
//
// 0060afe0  a15c2abe00           mov eax, dword ptr [0xbe2a5c]
// 0060afe5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060afe9  8b542404             mov edx, dword ptr [esp + 4]
// 0060afed  50                   push eax
// 0060afee  51                   push ecx
// 0060afef  52                   push edx
// 0060aff0  e81b7e1100           call 0x722e10
// 0060aff5  83c40c               add esp, 0xc
// 0060aff8  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?getObject@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAAAVCoordinateFrame@G3D@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
