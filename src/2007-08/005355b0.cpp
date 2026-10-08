// roc 2007-08 005355b0  unit: std::logic_error  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005355b0
//
// 005355b0  a174be8a00           mov eax, dword ptr [0x8abe74]
// 005355b5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005355b9  50                   push eax
// 005355ba  6a01                 push 1
// 005355bc  51                   push ecx
// 005355bd  e87e9c0800           call 0x5bf240
// 005355c2  83c40c               add esp, 0xc
// 005355c5  33c0                 xor eax, eax
// 005355c7  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
