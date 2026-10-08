// roc 2007-03 00537810  unit: seg_00530000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00537810
//
// 00537810  a144828a00           mov eax, dword ptr [0x8a8244]
// 00537815  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00537819  50                   push eax
// 0053781a  6a01                 push 1
// 0053781c  51                   push ecx
// 0053781d  e88e2c0800           call 0x5ba4b0
// 00537822  83c40c               add esp, 0xc
// 00537825  33c0                 xor eax, eax
// 00537827  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
