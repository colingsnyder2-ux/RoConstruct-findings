// roc 2010-06 0060c9d0  unit: RBX::VScriptContext::?$FactoryProduct  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060c9d0
//
// 0060c9d0  a1642abe00           mov eax, dword ptr [0xbe2a64]
// 0060c9d5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060c9d9  50                   push eax
// 0060c9da  6a01                 push 1
// 0060c9dc  51                   push ecx
// 0060c9dd  e82e641100           call 0x722e10
// 0060c9e2  83c40c               add esp, 0xc
// 0060c9e5  33c0                 xor eax, eax
// 0060c9e7  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
