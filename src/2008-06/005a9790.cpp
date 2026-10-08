// roc 2008-06 005a9790  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9790
//
// 005a9790  56                   push esi
// 005a9791  8b742408             mov esi, dword ptr [esp + 8]
// 005a9795  57                   push edi
// 005a9796  6a00                 push 0
// 005a9798  6a02                 push 2
// 005a979a  56                   push esi
// 005a979b  e8207f0600           call 0x6116c0
// 005a97a0  8bf8                 mov edi, eax
// 005a97a2  a1e8b19500           mov eax, dword ptr [0x95b1e8]
// 005a97a7  50                   push eax
// 005a97a8  6a01                 push 1
// 005a97aa  56                   push esi
// 005a97ab  e8007e0600           call 0x6115b0
// 005a97b0  56                   push esi
// 005a97b1  57                   push edi
// 005a97b2  50                   push eax
// 005a97b3  e8c85c0700           call 0x61f480
// 005a97b8  83c424               add esp, 0x24
// 005a97bb  5f                   pop edi
// 005a97bc  5e                   pop esi
// 005a97bd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
