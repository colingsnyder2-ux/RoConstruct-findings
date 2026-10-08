// roc 2009-06 006344b0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006344b0
//
// 006344b0  56                   push esi
// 006344b1  8b742408             mov esi, dword ptr [esp + 8]
// 006344b5  57                   push edi
// 006344b6  6a00                 push 0
// 006344b8  6a02                 push 2
// 006344ba  56                   push esi
// 006344bb  e800680800           call 0x6bacc0
// 006344c0  8bf8                 mov edi, eax
// 006344c2  a1f02aa200           mov eax, dword ptr [0xa22af0]
// 006344c7  50                   push eax
// 006344c8  6a01                 push 1
// 006344ca  56                   push esi
// 006344cb  e8e0660800           call 0x6babb0
// 006344d0  56                   push esi
// 006344d1  57                   push edi
// 006344d2  50                   push eax
// 006344d3  e898980800           call 0x6bdd70
// 006344d8  83c424               add esp, 0x24
// 006344db  5f                   pop edi
// 006344dc  5e                   pop esi
// 006344dd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
