// roc 2012-06 006a3cb0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a3cb0
//
// 006a3cb0  56                   push esi
// 006a3cb1  8b742408             mov esi, dword ptr [esp + 8]
// 006a3cb5  57                   push edi
// 006a3cb6  6a00                 push 0
// 006a3cb8  6a02                 push 2
// 006a3cba  56                   push esi
// 006a3cbb  e860fc1800           call 0x833920
// 006a3cc0  8bf8                 mov edi, eax
// 006a3cc2  a1d813de00           mov eax, dword ptr [0xde13d8]
// 006a3cc7  50                   push eax
// 006a3cc8  6a01                 push 1
// 006a3cca  56                   push esi
// 006a3ccb  e840fb1800           call 0x833810
// 006a3cd0  56                   push esi
// 006a3cd1  57                   push edi
// 006a3cd2  50                   push eax
// 006a3cd3  e8f8681900           call 0x83a5d0
// 006a3cd8  83c424               add esp, 0x24
// 006a3cdb  5f                   pop edi
// 006a3cdc  5e                   pop esi
// 006a3cdd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
