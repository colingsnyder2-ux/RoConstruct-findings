// roc 2008-06 005a8b70  unit: RBX::ScriptContext  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a8b70
//
// 005a8b70  a1dcb19500           mov eax, dword ptr [0x95b1dc]
// 005a8b75  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a8b79  50                   push eax
// 005a8b7a  6a01                 push 1
// 005a8b7c  51                   push ecx
// 005a8b7d  e82e8a0600           call 0x6115b0
// 005a8b82  83c40c               add esp, 0xc
// 005a8b85  33c0                 xor eax, eax
// 005a8b87  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
