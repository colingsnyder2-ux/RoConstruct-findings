// roc 2012-06 00840b80  unit: seg_00840000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00840b80
//
// 00840b80  a1d413de00           mov eax, dword ptr [0xde13d4]
// 00840b85  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00840b89  50                   push eax
// 00840b8a  6a01                 push 1
// 00840b8c  51                   push ecx
// 00840b8d  e87e2cffff           call 0x833810
// 00840b92  83c40c               add esp, 0xc
// 00840b95  33c0                 xor eax, eax
// 00840b97  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
