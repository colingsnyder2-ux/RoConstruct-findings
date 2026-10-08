// roc 2007-08 005354a0  unit: std::logic_error  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005354a0
//
// 005354a0  56                   push esi
// 005354a1  8b742408             mov esi, dword ptr [esp + 8]
// 005354a5  57                   push edi
// 005354a6  6a00                 push 0
// 005354a8  6a02                 push 2
// 005354aa  56                   push esi
// 005354ab  e8a09e0800           call 0x5bf350
// 005354b0  8bf8                 mov edi, eax
// 005354b2  a18cbe8a00           mov eax, dword ptr [0x8abe8c]
// 005354b7  50                   push eax
// 005354b8  6a01                 push 1
// 005354ba  56                   push esi
// 005354bb  e8809d0800           call 0x5bf240
// 005354c0  56                   push esi
// 005354c1  57                   push edi
// 005354c2  50                   push eax
// 005354c3  e8c8e40800           call 0x5c3990
// 005354c8  83c424               add esp, 0x24
// 005354cb  5f                   pop edi
// 005354cc  5e                   pop esi
// 005354cd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
