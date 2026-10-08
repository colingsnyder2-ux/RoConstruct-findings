// roc 2009-06 00633620  unit: std::strstream  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00633620
//
// 00633620  56                   push esi
// 00633621  8b742408             mov esi, dword ptr [esp + 8]
// 00633625  57                   push edi
// 00633626  6a00                 push 0
// 00633628  6a02                 push 2
// 0063362a  56                   push esi
// 0063362b  e890760800           call 0x6bacc0
// 00633630  8bf8                 mov edi, eax
// 00633632  a1102ba200           mov eax, dword ptr [0xa22b10]
// 00633637  50                   push eax
// 00633638  6a01                 push 1
// 0063363a  56                   push esi
// 0063363b  e870750800           call 0x6babb0
// 00633640  56                   push esi
// 00633641  57                   push edi
// 00633642  50                   push eax
// 00633643  e8b8c90800           call 0x6c0000
// 00633648  83c424               add esp, 0x24
// 0063364b  5f                   pop edi
// 0063364c  5e                   pop esi
// 0063364d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
