// roc 2008-06 005a9db0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9db0
//
// 005a9db0  56                   push esi
// 005a9db1  8b742408             mov esi, dword ptr [esp + 8]
// 005a9db5  57                   push edi
// 005a9db6  6a00                 push 0
// 005a9db8  6a02                 push 2
// 005a9dba  56                   push esi
// 005a9dbb  e800790600           call 0x6116c0
// 005a9dc0  8bf8                 mov edi, eax
// 005a9dc2  a1e4b19500           mov eax, dword ptr [0x95b1e4]
// 005a9dc7  50                   push eax
// 005a9dc8  6a01                 push 1
// 005a9dca  56                   push esi
// 005a9dcb  e8e0770600           call 0x6115b0
// 005a9dd0  56                   push esi
// 005a9dd1  57                   push edi
// 005a9dd2  50                   push eax
// 005a9dd3  e888690700           call 0x620760
// 005a9dd8  83c424               add esp, 0x24
// 005a9ddb  5f                   pop edi
// 005a9ddc  5e                   pop esi
// 005a9ddd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
