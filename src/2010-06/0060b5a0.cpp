// roc 2010-06 0060b5a0  unit: RBX::ScriptContext  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060b5a0
//
// 0060b5a0  a1842abe00           mov eax, dword ptr [0xbe2a84]
// 0060b5a5  56                   push esi
// 0060b5a6  8b742408             mov esi, dword ptr [esp + 8]
// 0060b5aa  50                   push eax
// 0060b5ab  6a01                 push 1
// 0060b5ad  56                   push esi
// 0060b5ae  e85d781100           call 0x722e10
// 0060b5b3  56                   push esi
// 0060b5b4  50                   push eax
// 0060b5b5  e816f2ffff           call 0x60a7d0
// 0060b5ba  83c414               add esp, 0x14
// 0060b5bd  5e                   pop esi
// 0060b5be  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
