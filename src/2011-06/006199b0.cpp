// roc 2011-06 006199b0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006199b0
//
// 006199b0  56                   push esi
// 006199b1  8b742408             mov esi, dword ptr [esp + 8]
// 006199b5  57                   push edi
// 006199b6  6a00                 push 0
// 006199b8  6a02                 push 2
// 006199ba  56                   push esi
// 006199bb  e8d0a71400           call 0x764190
// 006199c0  8bf8                 mov edi, eax
// 006199c2  a1c0efc800           mov eax, dword ptr [0xc8efc0]
// 006199c7  50                   push eax
// 006199c8  6a01                 push 1
// 006199ca  56                   push esi
// 006199cb  e8b0a61400           call 0x764080
// 006199d0  56                   push esi
// 006199d1  57                   push edi
// 006199d2  50                   push eax
// 006199d3  e8a81d1500           call 0x76b780
// 006199d8  83c424               add esp, 0x24
// 006199db  5f                   pop edi
// 006199dc  5e                   pop esi
// 006199dd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
