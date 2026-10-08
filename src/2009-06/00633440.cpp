// roc 2009-06 00633440  unit: std::strstream  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00633440
//
// 00633440  56                   push esi
// 00633441  8b742408             mov esi, dword ptr [esp + 8]
// 00633445  57                   push edi
// 00633446  6a00                 push 0
// 00633448  6a02                 push 2
// 0063344a  56                   push esi
// 0063344b  e870780800           call 0x6bacc0
// 00633450  8bf8                 mov edi, eax
// 00633452  a1a428a200           mov eax, dword ptr [0xa228a4]
// 00633457  50                   push eax
// 00633458  6a01                 push 1
// 0063345a  56                   push esi
// 0063345b  e850770800           call 0x6babb0
// 00633460  56                   push esi
// 00633461  57                   push edi
// 00633462  50                   push eax
// 00633463  e8689b0800           call 0x6bcfd0
// 00633468  83c424               add esp, 0x24
// 0063346b  5f                   pop edi
// 0063346c  5e                   pop esi
// 0063346d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
