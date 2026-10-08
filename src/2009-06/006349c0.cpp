// roc 2009-06 006349c0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006349c0
//
// 006349c0  56                   push esi
// 006349c1  8b742408             mov esi, dword ptr [esp + 8]
// 006349c5  57                   push edi
// 006349c6  6a00                 push 0
// 006349c8  6a02                 push 2
// 006349ca  56                   push esi
// 006349cb  e8f0620800           call 0x6bacc0
// 006349d0  8bf8                 mov edi, eax
// 006349d2  a1f82aa200           mov eax, dword ptr [0xa22af8]
// 006349d7  50                   push eax
// 006349d8  6a01                 push 1
// 006349da  56                   push esi
// 006349db  e8d0610800           call 0x6babb0
// 006349e0  56                   push esi
// 006349e1  57                   push edi
// 006349e2  50                   push eax
// 006349e3  e8689f0800           call 0x6be950
// 006349e8  83c424               add esp, 0x24
// 006349eb  5f                   pop edi
// 006349ec  5e                   pop esi
// 006349ed  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
