// roc 2007-08 005357f0  unit: std::logic_error  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005357f0
//
// 005357f0  56                   push esi
// 005357f1  8b742408             mov esi, dword ptr [esp + 8]
// 005357f5  57                   push edi
// 005357f6  6a00                 push 0
// 005357f8  6a02                 push 2
// 005357fa  56                   push esi
// 005357fb  e8509b0800           call 0x5bf350
// 00535800  8bf8                 mov edi, eax
// 00535802  a188be8a00           mov eax, dword ptr [0x8abe88]
// 00535807  50                   push eax
// 00535808  6a01                 push 1
// 0053580a  56                   push esi
// 0053580b  e8309a0800           call 0x5bf240
// 00535810  56                   push esi
// 00535811  57                   push edi
// 00535812  50                   push eax
// 00535813  e8c8f10800           call 0x5c49e0
// 00535818  83c424               add esp, 0x24
// 0053581b  5f                   pop edi
// 0053581c  5e                   pop esi
// 0053581d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
