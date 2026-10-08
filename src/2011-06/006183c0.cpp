// roc 2011-06 006183c0  unit: RBX::ScriptContext  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006183c0
//
// 006183c0  56                   push esi
// 006183c1  8b742408             mov esi, dword ptr [esp + 8]
// 006183c5  57                   push edi
// 006183c6  6a00                 push 0
// 006183c8  6a02                 push 2
// 006183ca  56                   push esi
// 006183cb  e8c0bd1400           call 0x764190
// 006183d0  8bf8                 mov edi, eax
// 006183d2  a100f0c800           mov eax, dword ptr [0xc8f000]
// 006183d7  50                   push eax
// 006183d8  6a01                 push 1
// 006183da  56                   push esi
// 006183db  e8a0bc1400           call 0x764080
// 006183e0  56                   push esi
// 006183e1  57                   push edi
// 006183e2  50                   push eax
// 006183e3  e8788b1500           call 0x770f60
// 006183e8  83c424               add esp, 0x24
// 006183eb  5f                   pop edi
// 006183ec  5e                   pop esi
// 006183ed  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
