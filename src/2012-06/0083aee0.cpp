// roc 2012-06 0083aee0  unit: seg_00830000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0083aee0
//
// 0083aee0  a1c813de00           mov eax, dword ptr [0xde13c8]
// 0083aee5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0083aee9  50                   push eax
// 0083aeea  6a01                 push 1
// 0083aeec  51                   push ecx
// 0083aeed  e81e89ffff           call 0x833810
// 0083aef2  83c40c               add esp, 0xc
// 0083aef5  33c0                 xor eax, eax
// 0083aef7  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
