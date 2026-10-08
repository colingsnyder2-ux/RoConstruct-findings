// roc 2010-06 0060aae0  unit: RBX::ScriptContext  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060aae0
//
// 0060aae0  a18c2abe00           mov eax, dword ptr [0xbe2a8c]
// 0060aae5  56                   push esi
// 0060aae6  8b742408             mov esi, dword ptr [esp + 8]
// 0060aaea  50                   push eax
// 0060aaeb  6a01                 push 1
// 0060aaed  56                   push esi
// 0060aaee  e81d831100           call 0x722e10
// 0060aaf3  56                   push esi
// 0060aaf4  50                   push eax
// 0060aaf5  e846fcffff           call 0x60a740
// 0060aafa  83c414               add esp, 0x14
// 0060aafd  5e                   pop esi
// 0060aafe  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
