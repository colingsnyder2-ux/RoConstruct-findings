// roc 2007-08 005356c0  unit: std::logic_error  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005356c0
//
// 005356c0  a17cbe8a00           mov eax, dword ptr [0x8abe7c]
// 005356c5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005356c9  50                   push eax
// 005356ca  6a01                 push 1
// 005356cc  51                   push ecx
// 005356cd  e86e9b0800           call 0x5bf240
// 005356d2  83c40c               add esp, 0xc
// 005356d5  33c0                 xor eax, eax
// 005356d7  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
