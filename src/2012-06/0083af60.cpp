// roc 2012-06 0083af60  unit: seg_00830000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0083af60
//
// 0083af60  a1d813de00           mov eax, dword ptr [0xde13d8]
// 0083af65  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0083af69  50                   push eax
// 0083af6a  6a01                 push 1
// 0083af6c  51                   push ecx
// 0083af6d  e89e88ffff           call 0x833810
// 0083af72  83c40c               add esp, 0xc
// 0083af75  33c0                 xor eax, eax
// 0083af77  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
