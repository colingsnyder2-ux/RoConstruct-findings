// roc 2012-06 006a24b0  unit: std::D::DU?$char_traits::?$basic_istringstream  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a24b0
//
// 006a24b0  56                   push esi
// 006a24b1  8b742408             mov esi, dword ptr [esp + 8]
// 006a24b5  57                   push edi
// 006a24b6  6a00                 push 0
// 006a24b8  6a02                 push 2
// 006a24ba  56                   push esi
// 006a24bb  e860141900           call 0x833920
// 006a24c0  8bf8                 mov edi, eax
// 006a24c2  a17c0ede00           mov eax, dword ptr [0xde0e7c]
// 006a24c7  50                   push eax
// 006a24c8  6a01                 push 1
// 006a24ca  56                   push esi
// 006a24cb  e840131900           call 0x833810
// 006a24d0  56                   push esi
// 006a24d1  57                   push edi
// 006a24d2  50                   push eax
// 006a24d3  e878661900           call 0x838b50
// 006a24d8  83c424               add esp, 0x24
// 006a24db  5f                   pop edi
// 006a24dc  5e                   pop esi
// 006a24dd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
