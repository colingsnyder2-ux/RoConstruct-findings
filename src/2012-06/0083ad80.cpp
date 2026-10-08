// roc 2012-06 0083ad80  unit: seg_00830000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0083ad80
//
// 0083ad80  a1c413de00           mov eax, dword ptr [0xde13c4]
// 0083ad85  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0083ad89  50                   push eax
// 0083ad8a  6a01                 push 1
// 0083ad8c  51                   push ecx
// 0083ad8d  e87e8affff           call 0x833810
// 0083ad92  83c40c               add esp, 0xc
// 0083ad95  33c0                 xor eax, eax
// 0083ad97  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
