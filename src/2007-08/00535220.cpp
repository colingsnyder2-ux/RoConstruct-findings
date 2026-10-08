// roc 2007-08 00535220  unit: std::logic_error  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00535220
//
// 00535220  a178be8a00           mov eax, dword ptr [0x8abe78]
// 00535225  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00535229  50                   push eax
// 0053522a  6a01                 push 1
// 0053522c  51                   push ecx
// 0053522d  e80ea00800           call 0x5bf240
// 00535232  83c40c               add esp, 0xc
// 00535235  33c0                 xor eax, eax
// 00535237  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
