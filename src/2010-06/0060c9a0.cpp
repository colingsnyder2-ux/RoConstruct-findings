// roc 2010-06 0060c9a0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060c9a0
//
// 0060c9a0  56                   push esi
// 0060c9a1  8b742408             mov esi, dword ptr [esp + 8]
// 0060c9a5  57                   push edi
// 0060c9a6  6a00                 push 0
// 0060c9a8  6a02                 push 2
// 0060c9aa  56                   push esi
// 0060c9ab  e870651100           call 0x722f20
// 0060c9b0  8bf8                 mov edi, eax
// 0060c9b2  a1482abe00           mov eax, dword ptr [0xbe2a48]
// 0060c9b7  50                   push eax
// 0060c9b8  6a01                 push 1
// 0060c9ba  56                   push esi
// 0060c9bb  e850641100           call 0x722e10
// 0060c9c0  56                   push esi
// 0060c9c1  57                   push edi
// 0060c9c2  50                   push eax
// 0060c9c3  e8a8c01100           call 0x728a70
// 0060c9c8  83c424               add esp, 0x24
// 0060c9cb  5f                   pop edi
// 0060c9cc  5e                   pop esi
// 0060c9cd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
