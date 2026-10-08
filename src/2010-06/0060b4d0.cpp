// roc 2010-06 0060b4d0  unit: RBX::ScriptContext  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060b4d0
//
// 0060b4d0  a1802abe00           mov eax, dword ptr [0xbe2a80]
// 0060b4d5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060b4d9  50                   push eax
// 0060b4da  6a01                 push 1
// 0060b4dc  51                   push ecx
// 0060b4dd  e82e791100           call 0x722e10
// 0060b4e2  83c40c               add esp, 0xc
// 0060b4e5  33c0                 xor eax, eax
// 0060b4e7  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
