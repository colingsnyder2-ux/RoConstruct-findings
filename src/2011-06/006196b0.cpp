// roc 2011-06 006196b0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006196b0
//
// 006196b0  56                   push esi
// 006196b1  8b742408             mov esi, dword ptr [esp + 8]
// 006196b5  57                   push edi
// 006196b6  6a00                 push 0
// 006196b8  6a02                 push 2
// 006196ba  56                   push esi
// 006196bb  e8d0aa1400           call 0x764190
// 006196c0  8bf8                 mov edi, eax
// 006196c2  a160d5c400           mov eax, dword ptr [0xc4d560]
// 006196c7  50                   push eax
// 006196c8  6a01                 push 1
// 006196ca  56                   push esi
// 006196cb  e8b0a91400           call 0x764080
// 006196d0  56                   push esi
// 006196d1  57                   push edi
// 006196d2  50                   push eax
// 006196d3  e818150100           call 0x62abf0
// 006196d8  83c424               add esp, 0x24
// 006196db  5f                   pop edi
// 006196dc  5e                   pop esi
// 006196dd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
