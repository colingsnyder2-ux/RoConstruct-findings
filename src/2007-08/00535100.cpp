// roc 2007-08 00535100  unit: std::logic_error  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00535100
//
// 00535100  a180be8a00           mov eax, dword ptr [0x8abe80]
// 00535105  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00535109  50                   push eax
// 0053510a  6a01                 push 1
// 0053510c  51                   push ecx
// 0053510d  e82ea10800           call 0x5bf240
// 00535112  83c40c               add esp, 0xc
// 00535115  33c0                 xor eax, eax
// 00535117  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
